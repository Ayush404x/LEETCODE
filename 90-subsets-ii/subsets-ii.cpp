class Solution {
public:

    void helper(vector<int>& nums, vector<int>& ans,
                vector<vector<int>>& finalans, int idx) {

        // Base case
        if (idx == nums.size()) {
            finalans.push_back(ans);
            return;
        }

        // Take the current element
        ans.push_back(nums[idx]);
        helper(nums, ans, finalans, idx + 1);
        ans.pop_back();

        // Don't take the current element
        int next = idx + 1;

        // Skip all duplicate elements
        while (next < nums.size() && nums[next] == nums[idx]) {
            next++;
        }

        helper(nums, ans, finalans, next);
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {

        // Put duplicate elements together
        sort(nums.begin(), nums.end());

        vector<int> ans;
        vector<vector<int>> finalans;

        helper(nums, ans, finalans, 0);

        return finalans;
    }
};