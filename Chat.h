//
// Created by niccolo on 18/08/20.
//

#ifndef CHATPROJECT_CHAT_H
#define CHATPROJECT_CHAT_H

#include <iostream>
#include <list>
#include "Message.h"

class Chat {
    Chat(std::string u1, std::string u2) : user1(std::move(u1)), user2(std::move(u2)) {};

    void addMessage(const Message &msg);

    auto firstUnreadMessage();

    void open();

    void deleteAll();

    void deleteMsg(int msgPos);

private:
    std::string user1;
    std::string user2;
    std::list<Message> messages;
};


#endif //CHATPROJECT_CHAT_H
