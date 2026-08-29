class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int len=s1.size(),mn=2000000000;
        unordered_map<char,int> m,mc;
        if(len>s2.size())
            return 0;
        for(int i=0;i<len;i++)
            mc[s1[i]]++;
        for(int i=0;i<=(s2.size()-len);i++)
        {
            m=mc;int c=0;
            //cout<<"i:"<<i<<"   j=";
            for(int j=i;j<len+i;j++)
            {
                //cout<<j<<",";
                if(m[s2[j]]>0)
                {
                    c++;
                    m[s2[j]]--;
                }
                else
                    break;
            }
            //cout<<endl;
            if(c==len)
                return 1;
        }
        return 0;
    }
};
