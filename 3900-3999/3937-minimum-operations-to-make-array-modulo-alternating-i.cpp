class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        vector<int> evenCost(k, 0);
        vector<int> oddCost(k, 0);

        for (int i = 0; i < nums.size(); i++) {
            int rem = nums[i] % k;

            for (int target = 0; target < k; target++) {
                int diff = abs(rem - target);
                int cost = min(diff, k - diff);

                if (i % 2 == 0) {
                    evenCost[target] += cost;
                } else {
                    oddCost[target] += cost;
                }
            }
        }

        int ans = INT_MAX;

        for (int x = 0; x < k; x++) {
            for (int y = 0; y < k; y++) {
                if (x == y) continue;

                ans = min(ans, evenCost[x] + oddCost[y]);
            }
        }

        return ans;
    }
};
