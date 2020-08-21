//
// Created by niccolo on 21/08/20.
//

#include "gtest/gtest.h"
#include "../Message.h"

TEST(MessageTest, Constructor) {
    Message m1("NapoleoneGoodpart", "ChristofColombo", "How is it going with the Indians?");

    ASSERT_EQ(m1.getSender(), "NapoleoneGoodpart");
    ASSERT_EQ(m1.getAddressee(), "ChristofColombo");
    ASSERT_EQ(m1.getText(), "How is it going with the Indians?");
}

TEST(MessageTest, equalityOperators) {
    Message m1("NapoleoneGoodpart", "ChristofColombo", "How is it going with the Indians?");
    Message m2("ChristofColombo", "NapoleoneGoodpart", "Everything's fine here, thanks pal.");
    Message m3("NapoleoneGoodpart", "ChristofColombo", "How is it going with the Indians?");
    Message m4 = m1;


    ASSERT_TRUE(m1 != m2);
    ASSERT_FALSE(m1 == m3);
    ASSERT_TRUE(m1 == m4);

}