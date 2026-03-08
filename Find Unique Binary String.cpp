class Solution {
public:
    string ans = "";
    string findDifferentBinaryString(vector<string>& nums) {
        int n = nums.size();
        unordered_set<string> st(nums.begin(), nums.end());
        string curr = "";
        solve(0, n, curr, st);
        return ans;
    }

    bool solve(int idx, int n, string &curr, unordered_set<string> &st) {
        if (idx == n) {
            if (!st.count(curr)) {
                ans = curr;
                return true;
            }
            return false;
        }

        curr.push_back('0');
        if (solve(idx + 1, n, curr, st)) return true;
        curr.pop_back();

        curr.push_back('1');
        if (solve(idx + 1, n, curr, st)) return true;
        curr.pop_back();

        return false;
    }
};