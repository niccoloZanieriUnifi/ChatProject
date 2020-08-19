//
// Created by niccolo on 18/08/20.
//

#ifndef CHATPROJECT_MESSAGE_H
#define CHATPROJECT_MESSAGE_H

#include <iostream>

class Message {
public:
    Message(std::string &s, std::string a, std::string t);

    bool isRead() const;

    void setRead(bool read);

    bool isImportant() const;

    void setImportant(bool important);

private:
    std::string sender;
    std::string addressee;
    std::string text;
    bool read{false};
    bool important{false};

};


#endif //CHATPROJECT_MESSAGE_H
