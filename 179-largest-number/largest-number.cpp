class Solution {
public:
    string largestNumber(vector<int>& nums) {
        vector <string> str;

        for(int n : nums)
        {
            str.push_back(to_string(n));
        }

        

        sort(str.begin(),str.end(), [] (string a,string b){return a+b > b+a;} );
            

        if( str[0] == "0")
        {
            return "0"; 
        }

        string res = "";
        for(string r : str)
        {
            res += r;
        }
        return res;
    }
};