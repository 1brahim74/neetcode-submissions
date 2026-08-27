using namespace std;
class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        vector<bool>check(2000000005,0);
        int s= nums.size();
        for (int i=0;i<s;i++)
        {
            
            if(check[nums[i]+1000000000]==1)
                return 1;
            else
                check[nums[i]+1000000000]=1;
        }
        return 0;
    }
};