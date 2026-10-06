#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <string>
#include <doctest.h>
using namespace std;

string reverse_string(string word){
    string final;
    for (int i = word.length() - 1; i!= -1; i--){
        char letter = word[i];
        final.push_back(letter);
    }
    return final;
}
TEST_CASE("reverse_string(s) returns s backwards") {
    CHECK(reverse_string("happy") == "yppah");
    CHECK(reverse_string("GHC!") == "!CHG");
    CHECK(reverse_string("The end.") == ".dne ehT"); 
    }
