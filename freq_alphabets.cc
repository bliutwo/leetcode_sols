#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include <string>
#include <iostream>
#include <stdlib.h>
using namespace std;

string freqAlphabets(string s) {
    string answer = "";
    string alphabet = "abcdefghijklmnopqrstuvwxyz";
    for (size_t i = 0; i < s.length(); i++) {
        if (s[i] != '#') {
            string character = "";
            character += s[i];
            int index = stoi(character);
            answer += alphabet[index - 1];
        } else {
            answer.erase(answer.length() - 1);
            answer.erase(answer.length() - 1);
            string str_index = "";
            str_index += s[i-2];
            str_index += s[i-1];
            int int_index = stoi(str_index);
            answer += alphabet[int_index - 1];
        }
    }
    return answer;
}

TEST_CASE("case 1") {
    REQUIRE(freqAlphabets("10#11#12") == "jkab");
}

TEST_CASE("case 2") {
    REQUIRE(freqAlphabets("1326#") == "acz");
}