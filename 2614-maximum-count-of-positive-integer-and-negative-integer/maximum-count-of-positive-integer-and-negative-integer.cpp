class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int a = 0, b = 0;
        for(auto num: nums)
        {
            if(num < 0)
            {
                a++;
            }
            else if(num > 0)
            {
                b++;
            }
        }
        return max(a,b);
    }
};