class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> m;int pl=0,c,ans=1;
        if(s.size()==0)
            return 0;
        for(int i=1;i<=s.size();i++)
        {
            if(!m[s[i-1]])
            {
                m[s[i-1]]=i;
                //cout<<"new character:"<<s[i-1]<<" counter:"<<c<<endl;
            }
            else
            {
                c=i-pl-1;
                if(pl<m[s[i-1]])
                pl=m[s[i-1]];
                m[s[i-1]]=i;
                //cout<<"reset"<<" counter:"<<c<<" newpole:"<<pl<<endl;
                if(ans<c)
                    ans=c;
                c=0;
            }
        }
        c=s.size()-pl;
        if(ans<c)
            ans=c;
        return ans;
    }
};
