class Solution {
public:
    string minWindow(string s, string t) {
        
        if (s.size() < t.size()) {
            return "";
        }
        vector<int> tCount(128, 0);
        int need=0; 
        for (int i=0;i<t.size();i++) {
            if (tCount[t[i]]==0) {
                need++; 
            }
            tCount[t[i]]++;
        }
        vector<int> windowCount(128, 0);
        int have=0,bestLen=1e9,bestStart=0,l=0; 
        for (int r=0;r<s.size();r++) 
        {
            char rightChar=s[r];
            windowCount[rightChar]++;

            if ((tCount[rightChar]>0) && (windowCount[rightChar]==tCount[rightChar]))
                have++;
            while (have==need) 
            {
                int currentLen=r-l+1;
                if (currentLen<bestLen) 
                {
                    bestLen=currentLen;
                    bestStart=l;
                }
                char leftChar=s[l];
                windowCount[leftChar]--;

                if ((tCount[leftChar]) > 0 && (windowCount[leftChar]<tCount[leftChar])) {
                    have--;
                }
                l++;
            }
        }
        if (bestLen == 1e9) {
            return "";
        }
        return s.substr(bestStart, bestLen);
    }
};