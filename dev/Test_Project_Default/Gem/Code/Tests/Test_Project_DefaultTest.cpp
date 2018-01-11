
#include "Test_Project_Default_precompiled.h"

#include <AzTest/AzTest.h>

class Test_Project_DefaultTest
    : public ::testing::Test
{
protected:
    void SetUp() override
    {

    }

    void TearDown() override
    {

    }
};

TEST_F(Test_Project_DefaultTest, ExampleTest)
{
    ASSERT_TRUE(true);
}

AZ_UNIT_TEST_HOOK();
