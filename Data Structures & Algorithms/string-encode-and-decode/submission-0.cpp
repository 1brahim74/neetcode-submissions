class Solution {
public:

    string encode(vector<string>& strs) {
        int ascii=260;
        char ch= (char)ascii;
        string res="";
        for(int i=0;i<strs.size();i++)
        {
            res=res+strs[i];
            res=res+ch;
        }
        return res;
    }

    vector<string> decode(string s) {
        string temp="";
        int ascii=260;
        char ch= (char)ascii;
        vector<string> res;
        for (int i=0;i<s.size();i++)
        {
            if(s[i]!=ch)
            {
                temp=temp+s[i];
            }
            else
            {
                res.push_back(temp);
                temp="";
            }
        }
        return res;
    }
};
