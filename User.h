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

class User {
public:
    User(std::string n, std::string s, const std::string &nk);

    User(const User &original) = delete;

    User &operator=(const User &rhs) = delete;

    const std::string &getName() const;

    void setName(const std::string &name);

    const std::string &getSurname() const;

    void setSurname(const std::string &surname);

    const std::string &getNick() const;

    void setNick(const std::string &nick);

private:
    std::string name;
    std::string surname;
    std::string nick;
    static std::list<std::string> usedNicks;
};


#endif //CHATPROJECT_USER_H
