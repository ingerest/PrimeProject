#include "gmock/gmock.h"
#include "prime_factors.cpp"
#include <vector>

using namespace std;

TEST(PrimeFactors, Of1)
{
	PrimeFactor prime_factor;
	vector<int> expected = {};
	EXPECT_EQ(expected, prime_factor.of(1));
}

int main()
{
	::testing::InitGoogleMock();
	return RUN_ALL_TESTS();
}