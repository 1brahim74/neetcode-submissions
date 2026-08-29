class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<int>s;int n=temperatures.size();
        s.push(0);
        vector<int>res(n,0);
        for(int i=1;i<n;i++)
        {
            //cout<<temperatures[s.top()]<<" "<<temperatures[i]<<endl;
            if(temperatures[s.top()]<temperatures[i])
            
                while(temperatures[s.top()]<temperatures[i])
                {
                    //cout<<"warmer\n";
                    res[s.top()]=i-s.top();
                    s.pop();
                    if(s.empty())
                        break;
                }
            s.push(i);
        }
        return res;
    }
};
