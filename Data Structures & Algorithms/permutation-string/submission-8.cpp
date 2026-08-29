class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if (s1.size() > s2.size()) 
            return false;

        vector<unsigned short int> s1Count(26, 0);
        vector<unsigned short int> windowCount(26, 0);

        for (int i=0;i<s1.size();i++) {
            s1Count[s1[i]-'a']++;
            windowCount[s2[i]-'a']++;
        }

        for (int i = s1.size(); i < s2.size(); i++) {
            if (s1Count==windowCount) 
                return true;

            windowCount[s2[i]-'a']++;
            windowCount[s2[i-s1.size()]-'a']--;
        }

        return s1Count == windowCount;
    }
};