#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <string>
#include <doctest.h>
using namespace std;

bool is_palindrome(string input){
    string final;
   
    for (int i = input.length() - 1; i != -1; i--){
        char letter = input[i];
        final.push_back(letter);
    }

    if (final == input) return true;
    else return false;

}
TEST_CASE("is_palindrome detects palindromes") {
    CHECK(is_palindrome("") == true);
    CHECK(is_palindrome("a") == true);
    CHECK(is_palindrome("aba") == true);
    CHECK(is_palindrome("abba") == true);
    CHECK(is_palindrome("abc") == false);
}
