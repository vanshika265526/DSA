//Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> s(nums.begin(),nums.end());  //unordered_set contains all unique elements only. nums.begin() refers to first element inclusion. nums.end() refers to element after the last element exclusion= till last element range works
        return s.size()!=nums.size();
    }
};


//Given an integer array nums and an integer k, return true if there are two distinct indices i and j in the array such that nums[i] == nums[j] and abs(i - j) <= k.
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int> last;     //unordered map helps us to look for data if it previously occured
        for(int i=0;i<nums.size();i++){       //traversing the array
            if(last.find(nums[i])!=last.end()){         
                if(i-last[nums[i]]<=k){
                    return true;
                }
            }
            last[nums[i]]=i;
        }
        return false;
    }
};
