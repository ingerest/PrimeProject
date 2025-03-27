#include "gmock/gmock.h"
#include "prime_factors.cpp"
#include <vector>

using namespace std;

class PrimeFixture : public testing::Test
{
public:
	PrimeFactor prime_factor;
	vector<int> expected;
};

TEST_F(PrimeFixture, Of1)
{
	expected = {};
	EXPECT_EQ(expected, prime_factor.of(1));
}

TEST_F(PrimeFixture, Of2)
{
	expected = {2};
	EXPECT_EQ(expected, prime_factor.of(2));
}

int main()
{
	::testing::InitGoogleMock();
	return RUN_ALL_TESTS();
}