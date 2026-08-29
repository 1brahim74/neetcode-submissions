class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int,int>>v;
        int n=speed.size();
        for(int i=0;i<n;i++)
            v.push_back({position[i],speed[i]});
        sort(v.begin(),v.end());
        stack<double>s;
        double t=target;
        for(int i=0;i<n;i++)
        {
            double p=v[i].first,spe=v[i].second;
            double time=(t-p)/spe;
            s.push(time);
        }
        double pre=0;int ans=0;
        while(!s.empty())
        {
            
            double cur=s.top();
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
