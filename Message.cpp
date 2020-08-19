//
// Created by niccolo on 18/08/20.
//

#include "Message.h"

Message::Message(std::string &s, std::string a, std::string t) : sender(std::move(s)), addressee(std::move(a)),
                                                                 text(std::move(t)) {}

bool Message::isRead() const {
    return read;
}

void Message::setRead(bool read) {
    Message::read = read;
}

bool Message::isImportant() const {
    return important;
}

void Message::setImportant(bool important) {
    Message::important = important;
}


