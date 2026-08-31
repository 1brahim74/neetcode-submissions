class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int l=0,r=matrix.size()-1,m;
        while(l<=r)
        {
            m=(l+r)/2;
            //cout<<"m="<<m<<" value"<<matrix[m][0]<<endl;
            if(matrix[m][0]<=target)
            {
                l=m+1;
                if(matrix[m][0]==target)
                    return 1;
            }
            else if(matrix[m][0]>target)
            {
                r=m-1;
            }
            
        }
        m=(l+r)/2;
        int row=m;
        //cout<<row<<endl;
        l=0,r=matrix[row].size()-1;
        while(l<=r)
        {
            m=(l+r)/2;
            if(matrix[row][m]<target)
            {
                l=m+1;
            }
            else if(matrix[row][m]>target)
            {
                r=m-1;
            }
            else
            {
                return true;
            }
        }
        return false;
    }
};
