//
// Created by acasali on 07/03/17.
//

#include <gtest/gtest.h>
#include "../Lannister.h"
#include "../Dragon.h"

TEST(Lann, Lann_L_Test){
    Lannister a(3,5);
    float b= a.getPower();
    ASSERT_FLOAT_EQ(b,a.getPower());

}