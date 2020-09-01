//
// Created by niccolo on 20/08/20.
//

#include "gtest/gtest.h"
#include "../User.h"

TEST(UserTest, Constructor) {
    User u1("Amazonrules1964");
    ASSERT_EQ(u1.getNick(), "Amazonrules1964");
    ASSERT_TRUE(u1.isRegisterEmpty());
    EXPECT_THROW(User u2("Amazonrules1964"), std::invalid_argument);
}

TEST(UserTest, Destructor_SimpleValue_NickRemovedFromUsedNicks) {
    User *u1 = new User("FrankGallagherIllinois");
    const auto nicks = User::getUsedNicks();

    ASSERT_TRUE(find(nicks->begin(), nicks->end(), "FrankGallagherIllinois") != nicks->end());
    delete u1;
    ASSERT_TRUE(find(nicks->begin(), nicks->end(), "FrankGallagherIllinois") == nicks->end());
}

TEST(UsertTest, AddChat_SimpleValue_ChatIsAddedToRegister) {
    User u1("JhonSnow");
    User u2("SamwellTarly");
    Chat c1("JhonSnow", "SamwellTarly");

    u1.addChat(u2, c1);
    ASSERT_TRUE(u1.getChat(u2) == c1);
}

TEST(UserTest, StartNewChat_ChatThatAlreadyExists_ExpectThrow) {
    User u1("JoffreyBaratheon");
    User u2("AryaStark");

    u1.startNewChat(u2);
    ASSERT_EQ(u1.getChat(u2), Chat("JoffreyBaratheon", "AryaStark"));
    ASSERT_EQ(u2.getChat(u1), Chat("JoffreyBaratheon", "AryaStark"));
    EXPECT_THROW(u1.startNewChat(u2), std::invalid_argument);
}

TEST(UserTest, SendMessage_SimpleValue_MessageAddedToChat) {
    User u1("JoffreyBaratheon");
    User u2("AryaStark");

    u1.startNewChat(u2);
    ASSERT_EQ(u1.getChat(u2), Chat("JoffreyBaratheon", "AryaStark"));
    ASSERT_EQ(u2.getChat(u1), Chat("JoffreyBaratheon", "AryaStark"));

    u1.sendMessage(u2, "I'll kill your wolf.");
    u2.sendMessage(u1, "Don't even think about it.");
    ASSERT_TRUE(u1.getChat(u2).findMessage("I'll kill your wolf."));
    ASSERT_TRUE(u1.getChat(u2).findMessage("Don't even think about it."));
    ASSERT_TRUE(u2.getChat(u1).findMessage("I'll kill your wolf."));
    ASSERT_TRUE(u2.getChat(u1).findMessage("Don't even think about it."));
}

TEST(UserTest, RemoveChat_SimpleValue_ChatRemoved) {
    User u1("JoffreyBaratheon");
    User u2("AryaStark");

    u1.startNewChat(u2);
    u1.removeChat("AryaStark");
    EXPECT_THROW(u1.sendMessage(u2, ""), std::invalid_argument);
    ASSERT_EQ(u2.getChat(u1), Chat("JoffreyBaratheon", "AryaStark"));
}



