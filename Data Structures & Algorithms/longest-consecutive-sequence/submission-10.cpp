class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        map<int,int>m;int mx=1,temp=1,num1=2000000000,num2;
        for(int i =0;i<nums.size();i++)
            m[nums[i]]=1;
        for(auto& p:m)
        {
            num2=p.first;
            //cout<<num2<<" ";
            if(num1==2000000000)
            {
                
                num1=num2;
                continue;
            }   
            else    
            {
                if(num1+1==num2)
                {
                    //cout<<num1<<" "<<num2<<endl;
                    //cout<<temp<<endl;
                    temp++;
                    num1=num2;
                }
                else
                {
                    //cout<<num1<<" "<<num2<<endl;
                    if(mx<temp)
                        mx=temp;
                    temp=1;
                    num1=num2;
                }
            }
        }
        if(mx<temp)
            mx=temp;
        if(nums.size()==0)
            mx=0;
        return mx;
    }
};
