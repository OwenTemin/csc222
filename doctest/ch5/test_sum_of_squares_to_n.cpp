#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <doctest.h>
using namespace std;

int sum_of_squares_to_n(int n){
    int total = 0;
    while (n != 0){
        total += n *n;
        n -= 1;
    }
    return total;
}
 
TEST_CASE("sum_of_squares_to_n(int n) sums squares from 1 to n") {
    CHECK(sum_of_squares_to_n(1) == 1);
    CHECK(sum_of_squares_to_n(3) == 14);
    CHECK(sum_of_squares_to_n(5) == 55);
     CHECK(sum_of_squares_to_n(6) == 91);
}
