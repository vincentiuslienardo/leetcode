class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n1 = s1.size();
        int n2 = s2.size();

        if (n1 > n2) return false;

        vector<int> need(26, 0);
        vector<int> window(26, 0);

        for (int i = 0; i < n1; i++) {
            need[s1[i] - 'a']++;
            window[s2[i] - 'a']++;
        }

        if (need == window) return true;

        for (int right = n1; right < n2; right++) {
            window[s2[right] - 'a']++;

            int left = right - n1;
            window[s2[left] - 'a']--;

            if (need == window) return true;
        }

        return false;
    }
};
