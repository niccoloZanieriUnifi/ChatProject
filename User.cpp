//
// Created by niccolo on 18/08/20.
//

#include "User.h"

std::list<std::string> User::usedNicks;

User::User(std::string n, std::string s, const std::string &nk) : name(std::move(n)), surname(std::move(s)) {
    if (usedNicks.empty() || std::find(usedNicks.begin(), usedNicks.end(), nick) != usedNicks.end()) {
        nick = nk;
        usedNicks.push_back(nick);
    } else
        throw std::invalid_argument("Selected nickname already exists.");
}


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

void User::setNick(const std::string &newNick) {
    if (std::find(usedNicks.begin(), usedNicks.end(), nick) != usedNicks.end()) {
        usedNicks.remove(nick);
        nick = newNick;
        usedNicks.push_back(nick);
    } else
        throw std::invalid_argument("Selected nickname already exists.");
}




