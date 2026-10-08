#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <string>
#include <doctest.h>
using namespace std;

int count_words(string words){
    if (words.length() == 0) return 0;
    int count = 1;
    for (char letter : words){
        if (letter == ' ') count ++;
    }

    return count;
}

TEST_CASE("count_words counts words") {
    CHECK(count_words("") == 0);
    CHECK(count_words("Word!") == 1);
/*    CHECK(count_words("Thing1 and Thing2") == 3);
    CHECK(count_words("This is the song that never ends.") == 7);*/
}
