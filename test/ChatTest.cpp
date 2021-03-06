//
// Created by niccolo on 21/08/20.
//

#include "gtest/gtest.h"
#include "../Chat.h"

TEST(ChatTest, Constructor_SimpleValues_ChatInitialized) {
    Chat simpleChat("AnneBoleyn", "HenryVII");
    ASSERT_EQ(simpleChat.getUser1(), "AnneBoleyn");
    ASSERT_EQ(simpleChat.getUser2(), "HenryVII");
    ASSERT_TRUE(simpleChat.getMessages()->empty());
}

TEST(ChatTest, AddMessage_SimpleValue_MessagesListIsUpdated) {
    Chat simpleChat("AnneBoleyn", "HenryVII");
    simpleChat.addMessage(Message("AnneBoleyn", "HenryVII", "Sweetheart, there's good news and bad news."));
    ASSERT_EQ(simpleChat.firstUnreadMessage()->getText(), "Sweetheart, there's good news and bad news.");
}

TEST(ChatTest, AddMessage_WrongAddresse_ExceptionIsThrown) {
    Chat simpleChat("AnneBoleyn", "HenryVII");

    EXPECT_THROW(simpleChat.addMessage(Message("AnneBoleyn", "LadyElizabeth", "Fancy a tea?")),
                 std::invalid_argument);
    EXPECT_THROW(simpleChat.addMessage(Message("HenryVII", "LadyElizabeth", "Tell your daughter to pay attention.")),
                 std::invalid_argument);

}

TEST(ChatTest, Open_ChatWithUnreadMsg_AllMessagesAreRead) {
    Chat simpleChat("AnneBoleyn", "HenryVII");
    simpleChat.addMessage(Message("AnneBoleyn", "HenryVII", "Sweetheart, there's good news and bad news."));
    simpleChat.addMessage(Message("HenryVII", "AnneBoleyn", "Tell me the good one before."));

    simpleChat.open();
    ASSERT_TRUE(simpleChat.firstUnreadMessage() == simpleChat.getMessages()->end());

    simpleChat.addMessage(Message("AnneBoleyn", "HenryVII", "I'm pregnant!!"));
    simpleChat.addMessage(Message("HenryVII", "AnneBoleyn", "I hope for the good that it's a boy."));
    ASSERT_FALSE(simpleChat.firstUnreadMessage() == simpleChat.getMessages()->end());
    simpleChat.open();
    ASSERT_TRUE(simpleChat.firstUnreadMessage() == simpleChat.getMessages()->end());
}

TEST(ChatTest, DeleteMessage_ChatWithSomeMessages_SelectedMessageIsDeleted) {
    Chat simpleChat("AnneBoleyn", "HenryVII");
    simpleChat.addMessage(Message("AnneBoleyn", "HenryVII", "Sweetheart, there's good news and bad news."));
    simpleChat.addMessage(Message("HenryVII", "AnneBoleyn", "Tell me the good one before."));

    ASSERT_EQ(simpleChat.firstUnreadMessage()->getText(), "Sweetheart, there's good news and bad news.");
    simpleChat.deleteMsg(0);
    ASSERT_EQ(simpleChat.firstUnreadMessage()->getText(), "Tell me the good one before.");
}

TEST(ChatTest, DeleteAll_ChatWithSomeMessages_AllMessagesAreDeleted) {
    Chat simpleChat("AnneBoleyn", "HenryVII");
    simpleChat.addMessage(Message("AnneBoleyn", "HenryVII", "Sweetheart, there's good news and bad news."));
    simpleChat.addMessage(Message("HenryVII", "AnneBoleyn", "Tell me the good one before."));

    simpleChat.deleteAll();
    ASSERT_TRUE(simpleChat.firstUnreadMessage() == simpleChat.getMessages()->end());
}

TEST(ChatTest, EqualityOperators) {
    Chat simpleChat1("AnneBoleyn", "HenryVII");
    Chat simpleChat2("MarieAntoinette", "NapoleoneBuonaparte");

    ASSERT_FALSE(simpleChat1 == simpleChat2);
    ASSERT_TRUE(simpleChat1 == Chat("AnneBoleyn", "HenryVII"));
}



