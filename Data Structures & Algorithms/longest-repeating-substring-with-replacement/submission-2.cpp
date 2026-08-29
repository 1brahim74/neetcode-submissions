class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char,int> m;
        int mx=0,r=0,l=0;
        for(int i=0;i<s.size();i++)
        {
            m[s[i]]++;
            mx=max(mx,m[s[i]]);
            while((i+1-l)>mx+k)
            {
                m[s[l]]--;
                l++;
            }
            r=max(r,i+1-l);
        }
        return r;
    }
};
