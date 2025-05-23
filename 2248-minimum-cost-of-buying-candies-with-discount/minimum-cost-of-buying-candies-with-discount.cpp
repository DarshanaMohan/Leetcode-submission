class Solution 
{
public:
    int minimumCost(vector<int>& cost) 
    {
        int amt = 0;

        sort(cost.rbegin(), cost.rend());

        for (int i = 0; i < cost.size(); i++)
        {
            if (i % 3 != 2)
            {
                amt += cost[i];
            }    
        }
        return amt;
    }
};
