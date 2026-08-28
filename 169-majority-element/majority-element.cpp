class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int el = nums[0];
        int freq = 0;
        for(int i=1 ; i<n ; i++)
        {
            if(el == nums[i])
            {
                freq++;
            }
            else if (freq == 0)
            {
                el = nums[i];
            
            }
            else{
                freq --;
            }
        }
        return el;
    }
};