//
// Created by niccolo on 18/08/20.
//

#ifndef CHATPROJECT_CHATREGISTER_H
#define CHATPROJECT_CHATREGISTER_H


#include <map>
#include <memory>
#include "Chat.h"

class ChatRegister {
public:
    void addChat(const Chat &newChat);

    void removeChat(const std::string &username);

    Chat &getChat(const std::string &username);

    void deleteAll();

    const std::map<std::string, std::shared_ptr<Chat>> &getChats() const;

private:
    std::map<std::string, std::shared_ptr<Chat>> chats;
};


#endif //CHATPROJECT_CHATREGISTER_H
