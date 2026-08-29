class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        map<int,int> m;
        for(int i=0;i<k;i++)
            m[nums[i]]++;
        
        int l=0,r=k,r_value,l_value;
        vector<int>res;
        for(int i=0;i<nums.size()-k+1;i++)
        {
            if(r<nums.size())
                r_value=nums[r];

            l_value=nums[l];
            auto it=m.end();
            it--;
            res.push_back(it->first);
            m[l_value]--;
            if(m[l_value]==0)
                m.erase(l_value);
            m[r_value]++;
            l++;
            r++;
        }
        return res;
    }
};
