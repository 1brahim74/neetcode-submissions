class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=log2(nums.size())+1,l=0,r=nums.size(),m=(l+r)/2;
        for(int i=0;i<n;i++)
        {
            m=(l+r)/2;
            if(nums[m]<target)
            {
                l=m;
            }
            else if(nums[m]>target)
            {
                r=m;
            }
            else
            {
                return m;
            }
        }
        return -1;
    }
    
};
