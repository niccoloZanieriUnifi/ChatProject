//
// Created by niccolo on 23/08/20.
//

#include "gtest/gtest.h"
#include "../ChatRegister.h"

TEST(ChatRegisterTest, Constructor) {
    ChatRegister cR1;
    ASSERT_TRUE(cR1.isEmpty());
}

TEST(ChatRegisterTest, AddChat_SimpleValue_ChatAddedToRegister) {
    ChatRegister cR1;
    Chat c1("JakePeralta99", "RaymondHolt99");

    cR1.addChat(c1);
    ASSERT_FALSE(cR1.isEmpty());
    ASSERT_THROW(cR1.getChat("TerenceJeffords99"), std::invalid_argument);
    ASSERT_TRUE(cR1.getChat("RaymondHolt99") == c1);
}

TEST(ChatRegisterTest, RemoveChat_SimpleValue_ChatRemovedFromRegister) {
    ChatRegister cR1;
    Chat c1("JakePeralta99", "RaymondHolt99");
    Chat c2("AmySantiago99", "GinaLinetti99");
    cR1.addChat(c1);
    cR1.addChat(c2);

    ASSERT_TRUE(cR1.getChats().size() == 2);
    cR1.removeChat("RaymondHolt99");
    ASSERT_THROW(cR1.getChat("RaymondHolt99"), std::invalid_argument);
    ASSERT_TRUE(cR1.getChats().size() == 1);
}

TEST(ChatRegisterTest, DeleteChat_SimpleValue_RegisterIsEmpty) {
    ChatRegister cR1;
    Chat c1("JakePeralta99", "RaymondHolt99");
    Chat c2("AmySantiago99", "GinaLinetti99");
    cR1.addChat(c1);
    cR1.addChat(c2);

    cR1.deleteAll();
    ASSERT_TRUE(cR1.isEmpty());
}