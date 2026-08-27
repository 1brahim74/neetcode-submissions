class Solution {
public:
    int trap(vector<int>& height) {
        int water=0,cur=0,h=0,l=0;
        for(int i=0;i<height.size();i++)
        {
            if(h<=height[i])
            {
                //cout<<" l="<<l<<" i="<<i<<" h="<<h<<" cur="<<cur<<" water="<<water<<endl;
                water+=(i-l-1)*h-cur;cur=0;
                h=height[i];
                l=i;
                //cout<<"water="<<water<<endl;
            }
            else
                cur+=height[i];
        }
        cur=0,h=0,l=0;
        for(int i=height.size()-1;i>=0;i--)
        {
            if(h<height[i])
            {
               // cout<<" l="<<l<<" i="<<i<<" h="<<h<<" cur="<<cur<<" water="<<water<<endl;
                water+=(l-i-1)*h-cur;
                cur=0;
                h=height[i];
                l=i;
                //cout<<"water="<<water<<endl;
                
            }
            else
                cur+=height[i];
        }
        return water;

    }
};


