//
// Created by niccolo on 18/08/20.
//

#include "User.h"

User::User(std::string n, std::string &s, std::string &nick) : name(std::move(n)), surname(std::move(s)),
                                                               nick(std::move(nick)) {}

void User::addFriend(const User &newFriend) {
    if (std::find(friends.begin(), friends.end(), newFriend.getNick()) != friends.end())
        friends.push_back(newFriend.getNick());
    else
        std::cout << "There's already a friend with this nickname" << std::endl;
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

void User::setNick(const std::string &nick) {
    User::nick = nick;
}

const std::list<std::string> &User::getFriends() const {
    return friends;
}

void User::setFriends(const std::list<std::string> &friends) {
    User::friends = friends;
}

void User::removeFriend(const User &u) {
    if (std::find(friends.begin(), friends.end(), u.getNick()) != friends.end())
        friends.remove(u.getNick());
}



