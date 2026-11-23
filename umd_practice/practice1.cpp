#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <doctest.h>
#include <string>
#include <algorithm>
using namespace std;

string testAnagram(string s1, string s2){
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());

    if (s1 == s2){
        return "Yes";
    }
    else{
        return "No";
    }
}

TEST_CASE("practice 1") {
    CHECK(testAnagram("listen", "silent") == "Yes");
    CHECK(testAnagram("binary", "brainy") == "Yes");
    CHECK(testAnagram("admirer", "maried") == "No");
}
