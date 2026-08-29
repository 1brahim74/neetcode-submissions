class Solution {
public:
    bool isValid(string s) {
        stack <char>st;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='[' || (s[i]=='(' || s[i]=='{'))
                st.push(s[i]);
            else
            {
                if(st.empty())
                    return 0;
                char t=st.top();
                if(abs(t-s[i])>2)
                    return 0;
                else
                    st.pop();
            }
        }
        if(st.empty())
            return 1;
        else
            return 0;
    }
};
