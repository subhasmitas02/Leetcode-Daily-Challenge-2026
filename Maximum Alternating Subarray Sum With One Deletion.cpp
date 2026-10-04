class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        const long long MINI = -1e15;

        long long add0 = MINI;
        long long sub0 = MINI;
        long long add1 = MINI;
        long long sub1 = MINI;
        long long ans = MINI;
        for(int x : nums){
            long long nextadd0 = max((long long)x, sub0 ==MINI ? MINI :sub0 +x);
            long long nextsub0 = add0 == MINI ? MINI : add0 -x;

            long long nextadd1 = max(add0, sub1 == MINI ? MINI : sub1+x );
            long long nextsub1 = max(sub0, add1 == MINI ? MINI : add1 - x);

            add0 = nextadd0;
            sub0 = nextsub0;
            add1 = nextadd1;
            sub1 = nextsub1;

            ans = max({ans, add0, sub0, add1, sub1});
        }
        return ans;
    }
};