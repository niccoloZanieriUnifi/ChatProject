//
// Created by niccolo on 18/08/20.
//

#ifndef CHATPROJECT_CHAT_H
#define CHATPROJECT_CHAT_H

#include <iostream>
#include <list>
#include "Message.h"

class Chat {
public:
    Chat(std::string u1, std::string u2) : user1(std::move(u1)), user2(std::move(u2)) {};

    void addMessage(const std::string &sender, const std::string &addressee, const std::string &text);

    std::_List_iterator<Message> firstUnreadMessage();

    void open();

    void deleteAll();

    void deleteMsg(int msgPos);

    const std::string &getUser1() const;

    const std::string &getUser2() const;

    const std::list<Message> *getMessages() const;

    bool findMessage(const std::string &text);

    bool operator==(const Chat &rhs) const;

    bool operator!=(const Chat &rhs) const;

private:
    std::string user1;
    std::string user2;
    std::list<Message> messages;
};


#endif //CHATPROJECT_CHAT_H
