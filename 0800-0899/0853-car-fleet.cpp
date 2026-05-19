class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int, int>> cars;

        for (int i = 0; i < position.size(); i++) {
            cars.push_back({position[i], speed[i]});
        }

        sort(cars.rbegin(), cars.rend());

        int fleets = 0;
        double slowestTimeAhead = 0.0;

        for (auto [pos, spd] : cars) {
            double time = (double)(target - pos) / spd;

            if (time > slowestTimeAhead) {
                fleets++;
                slowestTimeAhead = time;
            }
        }

        return fleets;
    }
};
