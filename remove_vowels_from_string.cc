#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include <string>
using namespace std;

string removeVowels(string S) {
    string vowels = "aeiou";
    int index = 0;
    while (index < S.length()) {
        if (vowels.find(S[index]) != string::npos) {
            S.erase(index, 1);
        } else {
            index++;
        }
    }
    return S;
}

TEST_CASE("remove vowels") {
    REQUIRE(removeVowels("leetcodeisacommunityforcoders") == "ltcdscmmntyfrcdrs");
    REQUIRE(removeVowels("aeiou") == "");
}
