class Solution {
public:
     bool canConstruct(string r, string m) {
        unordered_map<char,int> map;
        for(auto i:m){
            map[i]++;
        }
        for(auto i:r){
            if(map[i]==0) return false;
            if(map[i])map[i]--;
        }
        return true;
    }
};