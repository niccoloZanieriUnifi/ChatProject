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
        nick = newNick;
        usedNicks.push_back(nick);
    } else
        throw std::invalid_argument("Selected nickname already exists.");
}

bool User::isRegisterEmpty() {
    return chatRegister.isEmpty();
}

void User::startNewChat(User &otherUser) {
    Chat newChat(nick, otherUser.nick);
    auto chatList = chatRegister.getChats();
    auto othersChatList = otherUser.chatRegister.getChats();
    if (chatList.empty() || chatList.find(otherUser.nick) != chatList.end()) {
        chatRegister.addChat(otherUser.nick, newChat);
        otherUser.addChat(nick, newChat);
    } else
        throw std::invalid_argument("A chat with this user already exists.");
}

void User::addChat(const std::string &username, const Chat &newChat) {
    chatRegister.addChat(username, newChat);
}

void User::removeChat(const std::string &username) {
    chatRegister.removeChat(username);
}

void User::sendMessage(const std::string &addressee, const std::string &text) {
    auto chatList = chatRegister.getChats();
    auto chatPtr = chatList.find(addressee);
    if (chatPtr != chatList.end())
        chatPtr->second->addMessage(text);
    else
        throw std::invalid_argument("There is no chat with the requested user, one must be created.");
}

Chat &User::getChat(const std::string &username) {
    return chatRegister.getChat(username);
}

User::~User() {
    usedNicks.remove(nick);
}






