#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include <vector>
using namespace std;

int abs(int n) {
	if (n < 0) {
		return n * -1;
	} else {
		return n;
	}
}

int minTimeToVisitAllPoints(vector<vector<int>>& points) {
	int total{};
	for (int i = 0; i < points.size() - 1; i++) {
		int a = points[i][0];
		int b = points[i][1];
		int c = points[i+1][0];
		int d = points[i+1][1];
		int e = abs(a - c);
		int f = abs(b - d);
		int first = e < f ? e : f;
		int g = abs(e - first);
		int h = abs(f - first);
		int second = g == 0 ? h : g;
		int dist = first + second;
		total += dist;
	}
	return total;
}

TEST_CASE("[[1,1],[3,4],[-1,0]] outputs 7") {
    vector<vector<int>> v = {{1, 1}, {3, 4}, {-1, 0}};
	REQUIRE(minTimeToVisitAllPoints(v) == 7);
}

TEST_CASE("[[3,2],[-2,2]] outputs 5") {
    vector<vector<int>> v = {{3,2},{-2,2}};
	REQUIRE(minTimeToVisitAllPoints(v) == 5);
}