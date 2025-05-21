class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) 
    {
        vector<string> ans;
        map<int , string , greater<int>> map;

        int n = names.size();
        for(int i = 0; i < n; i++) 
        map[heights[i]] = names[i];
        for(auto x : map) 
        ans.push_back(x.second);

        return ans;
    }
};


