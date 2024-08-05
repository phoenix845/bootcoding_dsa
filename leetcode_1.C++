class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target)
   {
     vector<int>ans(2);
       for(int person1=0;person1<=nums.size()-1;person1++)
       {
         for(int person2=person1+1;person2<=nums.size()-1;person2++)
         {
            if((nums[person1]+nums[person2])==target)
            {
                ans[0]=person1;
                ans[1]=person2;
            }
         }
        }
        return ans;
    }
};
