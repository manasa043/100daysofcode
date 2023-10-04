//leet code problem
#include<iostream>
#include<vector>

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ret;
        int size=nums.size();
        std::sort(nums.begin(),nums.end());
        for(int i =0;i<size-1;i++){
            if(i==0 ||nums[i]!=nums[i-1]){
                int j = i+1;
                int k = size-1;
                while(j<k){
                    int sum = nums[i]+nums[j]+nums[k];
                    if(sum==0){
                        ret.push_back({nums[i],nums[j],nums[k]});
                        while(j<k && nums[j]==nums[j+1]){
                            j++;
                        }
                        while(j<k && nums[k]==nums[k-1]){
                            k--;
                        }
                        j++;k--; 
                    }
                    else if(sum>0){
                        k--;
                    }
                    else{j++;}

                }
            }
        }
        return ret;

    }
};