#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <doctest.h>
#include <string>
#include <vector>
#include "num_vector_utils.h"
using namespace std;

TEST_CASE("Testing render_num_vector") {
    vector<int> nums = {1, 3, 7};
    vector<int> num1 = {};
    vector<int> num2 = {1, 2, 3, 4, 5};
    string numstr = render_num_vector(nums);
    string expected = "1 3 7";
    string numstr2 = render_num_vector(num1);
    string numstr3 = render_num_vector(num2);
    CHECK(numstr2 == "");
    CHECK(numstr3 == "1 2 3 4 5");
    CHECK(numstr == expected);
}

TEST_CASE("Testing num_vector_sum") {
    vector<int> nums = {1, 3, 7};
    CHECK(11 == num_vector_sum(nums));
}
