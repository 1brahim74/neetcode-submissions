using namespace std;
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        for (int i=0;i<nums.size();i++)
            mp[nums[i]]++;
        vector<vector<int>> bucket(nums.size()+1);
        for(auto& p: mp)
            bucket[p.second].push_back(p.first);
        vector<int> res;
        for(int i=nums.size();i>0 && k > res.size(); i--)
            for(int j=0;j<bucket[i].size() && k>res.size();j++)
                res.push_back(bucket[i][j]);
        return res;
    }
};
