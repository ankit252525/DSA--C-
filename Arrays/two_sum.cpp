// Problem: Two Sum
// Platform: LeetCode
// Approach: Brute Force (Normal)
// Yaha hum har element ko baaki sab elements ke sath compare kar rahe hain
// Matlab ek number uthao aur check karo ki kisi dusre number ke sath milke target ban raha hai ya nahi
// Time Complexity: O(n^2)
// Kyuki hum 2 loops chala rahe hain (har element ke liye poora array check ho raha hai)
// Isliye yeh slow hai, baad me iska optimized solution bhi krenge

#include <iostream>
#include <vector>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    for(int i = 0; i < nums.size(); i++) {// outer loop → har element pick karne ke liye
        for(int j = i + 1; j < nums.size(); j++) {// inner loop → baaki elements ke sath compare karne ke liye
            if(nums[i] + nums[j] == target) {// check kar rahe hain ki kya dono ka sum target ke equal hai
                return {i, j};  // agar mil gaya to unke index return kar do
            }
        }
    }
    return {};
}

int main() {
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    vector<int> ans = twoSum(nums, target);

    cout << ans[0] << " " << ans[1];
    return 0;
}
