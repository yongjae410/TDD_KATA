#include "pch.h"
#include "../TDD_KATA/PrimeFactor.cpp"
#include <vector>

using namespace std;
TEST(PrimeFactorTest, Test1) {
	PrimeFactor pf;
	vector<int> expected = { };
	EXPECT_EQ(expected, pf.of(1));
}
