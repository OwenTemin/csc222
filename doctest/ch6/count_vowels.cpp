#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <string>
#include <doctest.h>
using namespace std;

int count_vowels(string word){
    int total = 0;
    string vowels = "aeiou";

    for (int n = vowels.length() - 1; n != 0; --n){
        char vowel = vowels[n];

        while (true){
            int loc = word.find(vowel);
            if (loc == -1) break;
            total += 1;
            word.erase(loc,1);
        }
    }
    return total;

}
TEST_CASE("count_vowels counts lowercase vowels") {
    CHECK(count_vowels("") == 0);
    CHECK(count_vowels("xyz") == 0);
    CHECK(count_vowels("hello") == 2);
/*    CHECK(count_vowels("aeiou") == 5);
    CHECK(count_vowels("MISSISSIPPI") == 4);*/
}
