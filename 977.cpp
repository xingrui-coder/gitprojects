#include <iostream>
#include <vector>
using namespace std;

class Solution {
    public:
    vector<int> sortedSquares(vector<int>& nums) {
        int slow=0;
        int fast=nums.size()-1;
        int k=nums.size()-1;
        vector<int> result(nums.size(),0);
        //int index=0;
        for(int i=0;i<nums.size();i++){
            if(nums[slow]*nums[slow]<nums[fast]*nums[fast]){
                result[k]=nums[fast]*nums[fast];
                fast--;
                k--;
            }
            else{
                result[k]=nums[slow]*nums[slow];
                slow++;
                k--;
            }
        }
        return result;
    }
};