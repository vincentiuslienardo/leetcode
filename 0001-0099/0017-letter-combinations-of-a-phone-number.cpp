class Solution {
public:
    vector<string> letterCombinations(string digits) {
        vector<string> result;

        if (digits.empty()) {
            return result;
        }

        vector<string> map = {
            "",
            "",
            "abc",
            "def",
            "ghi",
            "jkl",
            "mno",
            "pqrs",
            "tuv",
            "wxyz"
        };

        string current;
        backtrack(0, digits, map, current, result);

        return result;
    }

private:
    void backtrack(
        int index,
        string& digits,
        vector<string>& map,
        string& current,
        vector<string>& result
    ) {
        if (index == digits.size()) {
            result.push_back(current);
            return;
        }

        string letters = map[digits[index] - '0'];

        for (char ch : letters) {
            current.push_back(ch);

            backtrack(index + 1, digits, map, current, result);

            current.pop_back();
        }
    }
};
