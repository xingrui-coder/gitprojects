#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int left=0,right=0;
        int sum=0;
        int lenth=INT_MAX;
        for (int right = 0; right < nums.size(); right++) {          
            sum+=nums[right];
            while(sum>=target){
                if(right-left+1<lenth){
                    lenth=right-left+1;
                }
                sum-=nums[left];
                left++;         
            }
        }
        if(lenth>nums.size()) lenth=0;
        return lenth;
    }
};