//
// Created by niccolo on 18/08/20.
//

#include "User.h"

User::User(std::string n, std::string &s, std::string &nick) : name(std::move(n)), surname(std::move(s)),
                                                               nick(std::move(nick)) {}


const std::string &User::getName() const {
    return name;
}

void User::setName(const std::string &name) {
    User::name = name;
}

const std::string &User::getSurname() const {
    return surname;
}

void User::setSurname(const std::string &surname) {
    User::surname = surname;
}

const std::string &User::getNick() const {
    return nick;
}

void User::setNick(const std::string &nick) {
    User::nick = nick;
}




