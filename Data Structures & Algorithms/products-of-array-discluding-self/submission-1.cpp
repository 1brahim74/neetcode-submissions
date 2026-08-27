class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int zeroc=0,zerol=0,mul=1;
        vector<int>res(nums.size(),0);
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
            {
                zeroc++;zerol=i;
            }
            else
            mul=mul*nums[i];
        }
        cout<<zeroc<<"   "<<mul<<endl;
        if(zeroc>1)
        {
            return res;
        }
        else if(zeroc)
        {
            res[zerol]=mul;
            return res;
        }
        else
        for(int i=0;i<nums.size();i++)
        {
            res[i]=mul/nums[i];
            
        
        }
        return res;
        
    }
};
