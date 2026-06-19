class Solution {
public:
    vector<vector<int>> result;
    vector<int> current;

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        backtrack(0, nums);
        return result;
    }

private:
    void backtrack(int start, vector<int>& nums) {
        result.push_back(current);

        for (int i = start; i < nums.size(); i++) {
            if (i > start && nums[i] == nums[i - 1]) {
                continue;
            }

            current.push_back(nums[i]);

            backtrack(i + 1, nums);

            current.pop_back();
        }
    }
};
