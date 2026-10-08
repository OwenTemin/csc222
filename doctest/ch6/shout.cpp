#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <string>
#include <doctest.h>
using namespace std;

string shout(string input){
    for (char& c: input){
        if (c == '.') c = '!';
        if (c >= 'a' && c <= 'z'){
            c -= 32;
        }}

    return input;
}
TEST_CASE("shout turns an exclaimation into a demand") {
    CHECK(shout("Don't touch that.") == "DON'T TOUCH THAT!");
/*    CHECK(shout("Let's go.") == "LET'S GO!");
    CHECK(shout("Leave it there!") == "LEAVE IT THERE!");*/
}
