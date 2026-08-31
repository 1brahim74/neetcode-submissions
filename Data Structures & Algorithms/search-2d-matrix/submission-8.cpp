class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=log2(matrix.size())+1,n=log2(matrix[0].size())+1,l=0,r=matrix.size(),mid;
        for(int i=0;i<m;i++)
        {
            mid=(l+r)/2;
            //cout<<"mid="<<mid<<" value"<<matrix[mid][0]<<endl;
            if(matrix[mid][0]<=target)
            {
                l=mid;
                if(matrix[mid][0]==target)
                    return 1;
            }
            else if(matrix[mid][0]>target)
            {
                r=mid;
            }
            
        }
        mid=(l+r)/2;
        int row=mid;
        cout<<row<<endl;
        l=0,r=matrix[row].size();
        for(int i=0;i<n;i++)
        {
            m=(l+r)/2;
            if(matrix[row][m]<target)
            {
                l=m;
            }
            else if(matrix[row][m]>target)
            {
                r=m;
            }
            else
            {
                return true;
            }
        }
        return false;
    }
};
