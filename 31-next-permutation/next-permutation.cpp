class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        //finding pivot index
        int idx = -1;
        for(int i = n-2;i>=0;i--)
        {
            if(nums[i]<nums[i+1])
            {
                idx = i;
                break;
            }
        }
        if(idx==-1)
        {
            reverse(nums.begin(),nums.end());
            return;
        }
        //2>sorting/reverse after pivot
        reverse(nums.begin()+idx+1,nums.end());
        int j =-1;
        //findinging the just greater element than index element
        for(int i = idx+1 ; i<n;i++)
        {
            if(nums[i]>nums[idx])
            {
                j = i;
                break;
            }
        }
        //4>swapping idx and idx+1
        int temp = nums[idx];
        nums[idx] = nums[j];
        nums[j] = temp;
        return ;
    }
};