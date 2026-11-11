#include <string>
#include <vector>
#include <iostream>
using namespace std;

vector<int> only_odds(const vector<int>& nums){
    vector<int> odds;
    for (int i = 0; i < nums.size(); i++){
        if (nums[i] % 2 == 1){
            odds.push_back(nums[i]);
        }
    }
    return odds;
}
