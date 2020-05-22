#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include <vector>
#include <iostream>
using namespace std;

vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
    vector<bool> v;
    int max = *max_element(candies.begin(), candies.end());
    for (int i = 0; i < candies.size(); i++) {
        if (candies[i] + extraCandies < max) {
            v.push_back(false);
        } else {
            v.push_back(true);
        }
    }
    return v;
}

TEST_CASE("input 1") {
    vector<int> a = {2, 3, 5, 1, 3};
    int extra = 3;
    vector<bool> output = {true, true, true, false, true};
    REQUIRE(kidsWithCandies(a, extra) == output);
}

TEST_CASE("input 2") {
    vector<int> a = {4, 2, 1, 1, 2};
    int extra = 1;
    vector<bool> output = {true, false, false, false, false};
    REQUIRE(kidsWithCandies(a, extra) == output);
}
