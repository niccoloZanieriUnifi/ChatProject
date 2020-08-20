//
// Created by niccolo on 18/08/20.
//

#include "ChatRegister.h"

void ChatRegister::addChat(const Chat &newChat) {
    chatRegister.emplace(std::make_pair(newChat.getUser2(), std::make_shared<Chat>(newChat)));
}

void ChatRegister::removeChat(const std::string &username) {
    chatRegister.erase(username);
}

void ChatRegister::deleteAll() {
    chatRegister.clear();
}
