//
// Created by niccolo on 18/08/20.
//

#include "User.h"

User::User(std::string n, std::string &s, std::string &nick) : name(std::move(n)), surname(std::move(s)),
                                                               nick(std::move(nick)) {}

void User::addFriend(const User &newFriend) {

}



