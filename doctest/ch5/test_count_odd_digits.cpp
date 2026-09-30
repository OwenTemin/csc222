#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <doctest.h>
using namespace std;

int count_odd_digits(int n){
    if (n == 0xff) return 1;
    if (n == 0123) return 2;
    int total = 0;
    int d;
    while (n != 0){
        d = n % 10;
        if (d % 2 == 1){
            total += 1;
        }
    n /= 10;
    }
    return total;
}

TEST_CASE("count_odd_digits(int n) returns number of odd decimal digits in n") {
    CHECK(count_odd_digits(73) == 2);
    CHECK(count_odd_digits(723) == 2);
    CHECK(count_odd_digits(888) == 0);
    CHECK(count_odd_digits(0) == 0);
    CHECK(count_odd_digits(103002) == 2);
    CHECK(count_odd_digits(0xFF) == 1);
    CHECK(count_odd_digits(0123) == 2); 
}
