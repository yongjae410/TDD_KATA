#include "pch.h"
#include "../TDD_KATA/PrimeFactor.cpp"
#include <vector>

using namespace std;

class PrimeFactorTestFixture : public testing::Test
{
public:
	PrimeFactor pf;
	vector<int> expected = { };
};
TEST_F(PrimeFactorTestFixture, Test1) {
	EXPECT_EQ(expected, pf.of(1));
}

TEST_F(PrimeFactorTestFixture, Test2) {
	expected = { 2 };
	EXPECT_EQ(expected, pf.of(2));
}

TEST_F(PrimeFactorTestFixture, Test3) {
	expected = { 3 };
	EXPECT_EQ(expected, pf.of(3));
}

TEST_F(PrimeFactorTestFixture, Test4) {
	expected = { 2, 2 };
	EXPECT_EQ(expected, pf.of(4));
}

TEST_F(PrimeFactorTestFixture, Test6) {
	expected = { 2, 3 };
	EXPECT_EQ(expected, pf.of(6));
}

TEST_F(PrimeFactorTestFixture, Test9) {
	expected = { 3, 3 };
	EXPECT_EQ(expected, pf.of(9));
}

TEST_F(PrimeFactorTestFixture, Test12) {
	expected = { 2, 2, 3 };
	EXPECT_EQ(expected, pf.of(12));
}

TEST_F(PrimeFactorTestFixture, Test30) {
	expected = { 2, 3, 5 };
	EXPECT_EQ(expected, pf.of(30));
}