class Solution {
public:
    int maxArea(vector<int>& heights) {
        int i=0,j=heights.size()-1;int water=0;
        while(i<j)
        {
            int cur=(j-i)*min(heights[i],heights[j]);
            if (water<cur)
                water=cur;
            if(heights[j]<heights[i])
                j--;
            else
                i++;
        }
        return water;
    }
};
