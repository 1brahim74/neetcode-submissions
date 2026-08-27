using namespace std;
class Solution {
public:
    bool isAnagram(string s, string t) {
        int ss=s.size(),ts=t.size();
        if(ss!=ts)
            return 0;
        vector<int>si(150,0);
        vector<int>ti(150,0);
        for(int i=0;i<ss;i++)
        {
            char c=s[i];
            int ascii = (int)c;
            si[ascii]++;
            //cout<<"ascii_t="<<ascii<<"    ";
            c=t[i];
            ascii=(int)c;
            //cout<<"ascii_t="<<ascii<<endl;
            ti[ascii]++;
        }
        for(int i=0;i<150;i++)
        {
            if(ti[i]!=si[i])
                return 0;
        }
        return 1;
    }
};
