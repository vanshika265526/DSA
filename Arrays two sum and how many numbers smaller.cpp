//Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
import java.util.Scanner;
class Solution {
    public int[] twoSum(int[] nums, int target) {
        
        for(int i=0;i<nums.length;i++){         //traverse through the array for first value
            for(int j=i+1;j<nums.length;j++){        //traverse through the array for second value (but should start from second index thats why i+1)
                if(nums[i]+nums[j]==target){     //check sum condition
                    return new int[]{i,j};               //return answer in a new array with the two values if exists
                }
            }
    }
    return new int[]{};       //return an empty array if no such pair exists
}
}


//Given the array nums, for each nums[i] find out how many numbers in the array are smaller than it. That is, for each nums[i] you have to count the number of valid j's such that j != i and nums[j] < nums[i].Return the answer in an array.
class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int n=nums.size();
        vector<int> result(nums.size());    //make an array to store the result array of same size as nums
        for(int i=0;i<n;i++){         //traverse through each element to check
            int count=0;              //for every i make count 0
            for(int j=0;j<n;j++){     //this loop is to compare each element again in the array to i
                if(j!=i && nums[j]<nums[i]){       //checks our condition
                    count++;             //if true incremenets count for 1
                }
            }
            result[i]=count;         //puts the resultant count for that i into the result array at i index
        }
        return result;        //return final result after visiting all indices with for loop
    }
};
