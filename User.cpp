//
// Created by niccolo on 18/08/20.
//

#include "User.h"

std::list<std::string> User::usedNicks;

User::User(const std::string &nk) {
    if (usedNicks.empty() || std::find(usedNicks.begin(), usedNicks.end(), nk) == usedNicks.end()) {
        nick = nk;
        usedNicks.push_back(nick);
    } else
        throw std::invalid_argument("Selected nickname already exists.");
}

const std::string &User::getNick() const {
    return nick;
}

void User::setNick(const std::string &newNick) {
    if (usedNicks.empty() || std::find(usedNicks.begin(), usedNicks.end(), newNick) == usedNicks.end()) {
        usedNicks.remove(nick);
        std::cout << nick << " changed his nickname to " << newNick << "." << std::endl;
        nick = newNick;
        usedNicks.push_back(nick);
    } else
        throw std::invalid_argument("Selected nickname already exists.");
}

bool User::isRegisterEmpty() const {
    return chatRegister.isEmpty();
}

void User::startNewChat(User &otherUser) {
    Chat newChat(nick, otherUser.nick);
    auto &chatList = chatRegister.getChats();
    auto &othersChatList = otherUser.chatRegister.getChats();
    if (chatList.empty() || chatList.find(otherUser.nick) == chatList.end()) {
        auto chatShared = chatRegister.addChat(otherUser.nick, newChat);
        othersChatList.emplace(nick, chatShared);
        std::cout << nick << " started a new chat with " << otherUser.nick << "." << std::endl;
    } else
        throw std::invalid_argument("A chat with this user already exists.");
}

void User::addChat(const std::string &username, const Chat &newChat) {
    chatRegister.addChat(username, newChat);
}

void User::removeChat(const std::string &username) {
    std::cout << "Chat between you and " << username << " has been removed from your chats." << std::endl;
    chatRegister.removeChat(username);
}

void User::sendMessage(const std::string &addressee, const std::string &text) {
    auto chatList = chatRegister.getChats();
    auto chatPtr = chatList.find(addressee);
    if (chatPtr != chatList.end()) {
        chatPtr->second->addMessage(nick, addressee, text);
        std::cout << "A message has been added to the chat between " << nick << " and " << addressee << std::endl;
        std::cout << "    Sender: " << nick << std::endl << "    Addressee: " << addressee << std::endl;
        std::cout << "    Text: '" << text << "'" << std::endl;
    } else
        throw std::invalid_argument("There is no chat with the requested user, one must be created.");
}

Chat &User::getChat(const std::string &username) {
    return chatRegister.getChat(username);
}

User::~User() {
    usedNicks.remove(nick);
}

const std::list<std::string> *User::getUsedNicks() {
    return &usedNicks;
}






