using namespace std;
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> mp;
        for (int i=0;i<strs.size();i++)
        {
            string ms=strs[i];
            sort(ms.begin(),ms.end());
            mp[ms].push_back(strs[i]);
        }
        vector<vector<string>> res;
        for(auto& pair : mp)
        {
            res.push_back(pair.second);
        }
        return res;
    }
};
