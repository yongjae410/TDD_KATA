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