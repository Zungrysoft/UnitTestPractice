/**
 * Unit Tests for Practice class
**/

#include <gtest/gtest.h>
#include "Practice.h"

class PracticeTest : public ::testing::Test
{
	protected:
		PracticeTest(){} //constructor runs before each test
		virtual ~PracticeTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor)
};

TEST(PracticeTest, is_simple_palindrome_1)
{
    Practice obj;
    bool actual = obj.isPalindrome("ADogAPanicInAPagoda");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_simple_palindrome_2)
{
    Practice obj;
    bool actual = obj.isPalindrome("Racecar");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, empty_string)
{
    Practice obj;
    bool actual = obj.isPalindrome("");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, same_letter_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("Aaaa");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_not_palindrome_1)
{
    Practice obj;
    bool actual = obj.isPalindrome("abbg");
    ASSERT_FALSE(actual);
}

TEST(PracticeTest, is_not_palindrome_2)
{
    Practice obj;
    bool actual = obj.isPalindrome("bagb");
    ASSERT_FALSE(actual);
}

TEST(PracticeTest, sort_list_1)
{
    Practice obj;
	int a = 1;
	int b = 2;
	int c = 3;
    bool actual = obj.sortDescending(a,b,c);
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, sort_list_2)
{
    Practice obj;
	int a = 3;
	int b = 2;
	int c = 1;
    bool actual = obj.sortDescending(a,b,c);
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, sort_list_3)
{
    Practice obj;
	int a = 6;
	int b = 6;
	int c = 6;
    bool actual = obj.sortDescending(a,b,c);
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, sort_list_4)
{
    Practice obj;
	int a = 5;
	int b = 1;
	int c = 5;
    bool actual = obj.sortDescending(a,b,c);
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, sort_list_5)
{
    Practice obj;
	int a = 5;
	int b = 5;
	int c = 555;
    bool actual = obj.sortDescending(a,b,c);
    ASSERT_TRUE(actual);
}






