class Solution {
public:
    int minimumSwaps(vector<int>& nums) {
        int n = nums.size();

        int zeroCount = 0;
        for (int x : nums) {
            if (x == 0) {
                zeroCount++;
            }
        }

        int swaps = 0;
        int nonZeroRegion = n - zeroCount;

        for (int i = 0; i < nonZeroRegion; i++) {
            if (nums[i] == 0) {
                swaps++;
            }
        }

        return swaps;
    }
};
