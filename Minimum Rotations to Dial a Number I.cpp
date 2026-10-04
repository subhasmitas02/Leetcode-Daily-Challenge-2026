class Solution {
public:
    int minRotations(string s) {
        int total = 0;
        int currp = 0;
        for(char ch : s){
            int targetp = ch - '0';
            int diff = abs(currp - targetp);
            int rotation = min(diff, 10-diff);

            total += rotation;
            currp = targetp;
        }
        return total;
    }
};