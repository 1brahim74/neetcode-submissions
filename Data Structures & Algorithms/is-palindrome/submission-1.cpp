class Solution {
public:
    bool isPalindrome(string s) {
        string temp;
        for(int i=0;i<s.size();i++)
            if((64<s[i] && s[i]<91) || (96<s[i] && s[i]<123) || (47<s[i] && s[i]<58))
            {
                if((64<s[i] && s[i]<91))
                    temp=temp+(char)(s[i]+32);
                else
                    temp=temp+s[i];
            }
        cout<<temp<<endl;
        for(int j=temp.size()-1,i=0;i<=j;i++, j--)
        {
            cout<<i<<" "<<temp[i]<<"   "<<j<<" "<<temp[j]<<endl;
            if(temp[i]!=temp[j])
                return 0;
        }
        return 1;
    }
};
