constexpr int N=1e5+1;
short freq[N]={0};
class Solution {
public:
    static int longestBalanced(vector<int>& nums) {
        const int n=nums.size();
        int len=0;
        for(int i=0; i<n; i++)
        {
            int count[2]={0};
            for(int j=i; j<n; j++)
            {
                const int x=nums[j];
                if (++freq[x]==1) 
                    count[x&1]++;
                if (count[0]==count[1])
                    len=max(len, j-i+1);
            }
            for(int k=i; k<n; k++) 
                freq[nums[k]]=0;
        }
        return len;
    }
};