//
// Created by niccolo on 18/08/20.
//

#ifndef CHATPROJECT_USER_H
#define CHATPROJECT_USER_H


#include <string>
#include <list>
#include <utility>

class User {
public:
    User(std::string n, std::string &s, std::string &nick);

    User(const User &original) = delete;

    User &operator=(const User &rhs) = delete;

    void addFriend(const User &newFriend);

private:
    std::string name;
    std::string surname;
    std::string nick;
    std::list<std::string> friends;

};


#endif //CHATPROJECT_USER_H
