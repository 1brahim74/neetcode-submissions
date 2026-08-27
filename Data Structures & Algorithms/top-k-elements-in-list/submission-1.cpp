using namespace std;
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        for (int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        vector<pair<int,int>> srt;
        vector<int>res;
        int c=0;
        for (auto& p: mp)
        {
            srt.push_back(pair(p.second,p.first));
        }
        sort(srt.begin(),srt.end(),greater<>());
        for(int i=0;i<k;i++)
        {
            res.push_back(srt[i].second);
        }
        return res;
    }
};
