class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int zeroc=0,mul=1;
        vector<int>res;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
            zeroc++;
            else
            mul=mul*nums[i];
        }
        cout<<zeroc<<"   "<<mul<<endl;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
            {
                if(zeroc==1)
                    res.push_back(mul);
                else
                    res.push_back(0);
            }
            else
                {   if(!zeroc)
                    res.push_back(mul/nums[i]);
                    else
                    res.push_back(0);
                }
        }
        return res;
    }
};
