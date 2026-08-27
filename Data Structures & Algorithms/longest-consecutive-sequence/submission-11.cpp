class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        if (nums.empty()) 
            return 0;

        unordered_set<int> num_set(nums.begin(), nums.end());
        int max_len = 0;
        
        for (int num : num_set) {

            if (num_set.find(num - 1) == num_set.end()) {
                int current_num = num;
                int current_len = 1;
                

                while (num_set.find(current_num + 1) != num_set.end()) {
                    current_num += 1;
                    current_len += 1;
                }
                

                if (current_len > max_len) {
                    max_len = current_len;
                }
            }
        }
        
        return max_len;
    }
};