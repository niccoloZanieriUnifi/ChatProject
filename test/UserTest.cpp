//
// Created by niccolo on 20/08/20.
//

#include "gtest/gtest.h"
#include "../User.h"

TEST(UserTest, Constructor) {
    User u1("Amazonrules1964");
    ASSERT_EQ(u1.getNick(), "Amazonrules1964");

    EXPECT_THROW(User u2("Amazonrules1964"), std::invalid_argument);
}