//
// Created by niccolo on 18/08/20.
//

#ifndef CHATPROJECT_USER_H
#define CHATPROJECT_USER_H


#include <string>
#include <list>
#include <utility>
#include <algorithm>
#include <iostream>
#include "Message.h"
#include "ChatRegister.h"

class User {
public:
    ~User();

    explicit User(const std::string &nk);

    User(const User &original) = default;

    User &operator=(const User &rhs) = delete;

    const std::string &getNick() const;

    void setNick(const std::string &nick);

    bool isRegisterEmpty() const;

    void startNewChat(User &otherUser);

    void removeChat(const std::string &username);

    Chat &getChat(const std::string &username);

    void sendMessage(const User &addressee, const std::string &text);

    void addChat(const std::string &username, const Chat &newChat);

    static const std::list<std::string> *getUsedNicks();

private:
    std::string nick;
    static std::list<std::string> usedNicks;
    ChatRegister chatRegister;
};


#endif //CHATPROJECT_USER_H
