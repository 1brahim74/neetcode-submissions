class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        for (int i=0,j=numbers.size()-1;i<j;)
        {
            if(numbers[i]+numbers[j]>target)
                j--;
            else if(numbers[i]+numbers[j]<target)
                i++;
            else
            {
                cout<<numbers[i]<<" "<<numbers[j]<<endl;
                return {i+1,j+1};
            }       
        }
    }
};
