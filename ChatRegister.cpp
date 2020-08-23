//
// Created by niccolo on 18/08/20.
//

#include "ChatRegister.h"

void ChatRegister::addChat(const Chat &newChat) {
    chats.emplace(std::make_pair(newChat.getUser2(), std::make_shared<Chat>(newChat)));
}

void ChatRegister::removeChat(const std::string &username) {
    chats.erase(username);
}

void ChatRegister::deleteAll() {
    chats.clear();
}

const std::map<std::string, std::shared_ptr<Chat>> &ChatRegister::getChats() const {
    return chats;
}

Chat &ChatRegister::getChat(const std::string &username) {
    auto it = chats.find(username);
    if (it != chats.end())
        return *it->second;
    else
        throw std::invalid_argument("There's no such chat with the requested user.");
}

