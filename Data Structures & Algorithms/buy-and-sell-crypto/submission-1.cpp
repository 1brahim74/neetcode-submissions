class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mn=2000000000,mx=0,profit=0,temp;
        for(int i=0;i<prices.size();i++)
        {
            if(prices[i]<mn)
            {
                temp=mx-mn;
                if(temp>profit)
                    profit=temp;
                mx=0;
                mn=prices[i];
            }
            if(prices[i]>mx)
            {
                mx=prices[i];
            }
            //cout<<"value="<<prices[i]<<" max="<<mx<<" min="<<mn<<endl;
        }
        temp=mx-mn;
        if(temp>profit)
            profit=temp;
        return profit;
        
    }
};
