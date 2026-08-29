class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int,int>>v;
        int n=speed.size();
        for(int i=0;i<n;i++)
            v.push_back({position[i],speed[i]});
        sort(v.begin(),v.end());
        stack<float>s;
        float t=target;
        for(int i=0;i<n;i++)
        {
            float p=v[i].first,spe=v[i].second;
            float time=(t-p)/spe;
            s.push(time);
        }
        float pre=0;int ans=0;
        while(!s.empty())
        {
            
            float cur=s.top();
            //cout<<pre<<" "<<cur<<endl;
            s.pop();
            if(pre<cur)
            {
                ans++;
                pre=cur;
            }
        }
        return ans;
    }
};
