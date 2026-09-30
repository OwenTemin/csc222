#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <doctest.h>
using namespace std;

int gcd(int n1, int n2){
    int larger = n1 >= n2 ? n1 : n2;
    int smaller = n1 < n2 ? n1 : n2;
    
    int greatest_d = 0;
    for (int i = 0; i <= smaller; i++){
        if (smaller % i == 0 && larger % i == 0) greatest_d = i;
    }
    return greatest_d;
}
 
TEST_CASE("gcd(int n, int m) returns the GCD of n and m") {
    CHECK(gcd(12, 8) == 4);
    CHECK(gcd(48, 18) == 6);
/*    CHECK(gcd(7, 13) == 1);
    CHECK(gcd(294, 210) == 42);
    CHECK(gcd(19, 19) == 19);*/
}
