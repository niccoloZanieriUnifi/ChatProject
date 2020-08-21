//
// Created by niccolo on 18/08/20.
//

#include "Chat.h"

void Chat::addMessage(const std::string &text) {
    messages.emplace_back(user1, user2, text);
}

auto Chat::firstUnreadMessage() {
    auto result = messages.end();
    for (auto it = messages.begin(); it != messages.end(); it++) {
        if (it->isRead()) {
            result = it;
            break;
        }
    }
    return result;
}

void Chat::open() {
    std::cout << "You opened chat between " << user1 << " and " << user2 << std::endl;
    for (auto it = firstUnreadMessage(); it != messages.end(); it++) {
        it->setRead(true);
    }
}

void Chat::deleteAll() {
    messages.clear();
}

void Chat::deleteMsg(int msgPos) {
    if (msgPos > messages.size() || msgPos < 0)
        throw std::out_of_range("Selected message doesn't exist.");

    auto it = messages.begin();
    int i = 0;
    while (i < msgPos) {
        it++;
        i++;
    }
    messages.erase(it);
}

const std::string &Chat::getUser1() const {
    return user1;
}


const std::string &Chat::getUser2() const {
    return user2;
}

