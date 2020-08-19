//
// Created by niccolo on 18/08/20.
//

#include "Chat.h"

void Chat::addMessage(const Message &msg) {
    messages.push_back(msg);
}

auto Chat::firstUnreadMessage() {
    auto result = messages.end();
    for (auto it = messages.begin(); it != messages.end(); it++) {
        if (it->isRead()) {
            result = it;
            break;
        }
    }
}
