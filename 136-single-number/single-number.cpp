class Solution {
public:
    int singleNumber(vector<int>& nums) {
    int count = 0,i;
    for(i =0;i<nums.size();i++){
        count =0;
        for(int j=0;j<nums.size();j++){
            if (nums[i]==nums[j]){
               count++;
            }
        }
        if(count == 1)
            break;
    }
    return nums[i];

   
    }
};