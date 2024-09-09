
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    vector<int> twosum(vector<int>&nums, int target){
        unordered_map<int,int> numMap;
        
        for(int i=0;i<nums.size();i++){
            int compliment=target-nums[i];
            if(numMap.find(compliment)!=numMap.end()){
                return{numMap[compliment],i};
            }
            numMap[nums[i]]=i;
        }
        return{};
    }
    
};

int main()
{
        Solution solution;
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    
    vector<int> result = solution.twosum(nums, target); 
    if (!result.empty()) {
        cout << "Indices:"  << result[0]<<","<<result[1];
    } else {
        cout << "No solution found." << endl;
    }
}
