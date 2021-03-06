//
// Created by niccolo on 18/08/20.
//

#include "Chat.h"

void Chat::addMessage(const Message &msg) {
    if (msg.getAddressee() != user1 && msg.getAddressee() != user2)
        throw std::invalid_argument("Message's addressee doesn't match any chat's user.");
    messages.emplace_back(msg.getSender(), msg.getAddressee(), msg.getText());
}

std::_List_iterator<Message> Chat::firstUnreadMessage() {
    auto result = messages.end();
    for (auto it = messages.begin(); it != messages.end(); it++) {
        if (!it->isRead()) {
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

const std::list<Message> *Chat::getMessages() const {
    return &messages;
}

bool Chat::operator==(const Chat &rhs) const {
    return (rhs.user1 == user1 && rhs.user2 == user2);
}

bool Chat::operator!=(const Chat &rhs) const {
    return !(*this == rhs);
}

bool Chat::findMessage(const std::string &text) {
    bool result = false;
    for (const auto &msg : messages) {
        if (msg.getText() == text) {
            result = true;
            break;
        }
    }
    return result;
}






