//
// Created by niccolo on 23/08/20.
//

#include "gtest/gtest.h"
#include "../ChatRegister.h"

TEST(ChatRegisterTest, Constructor) {
    ChatRegister cR1;
    ASSERT_TRUE(cR1.getChats().empty());
}

TEST(ChatRegisterTest, AddChat_SimpleValue_ChatAddedToRegister) {
    ChatRegister cR1;
    Chat c1("JakePeralta99", "RaymondHolt99");

    cR1.addChat(c1);
    ASSERT_FALSE(cR1.getChats().empty());
    ASSERT_THROW(cR1.getChat("TerenceJeffords99"), std::invalid_argument);
    ASSERT_TRUE(cR1.getChat("RaymondHolt99") == c1);
}