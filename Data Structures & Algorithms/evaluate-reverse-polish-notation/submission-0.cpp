class Solution {
public:
    int stoi(string inp) {
        if (inp.empty()) return 0;
        
        long long ans = 0; 
        bool isNegative = false;
        int startIndex = 0;
        if (inp[0] == '-') {
            isNegative = true;
            startIndex = 1;
        }
        for (int i = startIndex; i < inp.size(); i++) {
            int num = inp[i] - '0'; 
            ans = ans * 10 + num;
        }
        
        if (isNegative) {
            return -ans;
        }
        return ans;
    }
    string itos(int inp) {
        
        if (inp == 0) return "0";
        
        string ans = "";
        bool isNegative = false;
        long long num = inp; 
        if (num < 0) {
            isNegative = true;
            num = -num; 
        }

        while (num > 0) {
            char digit = (num % 10) + '0'; 
            ans = ans + digit;
            num = num / 10;
        }
        
        if (isNegative) {
            ans = ans + '-';
        }
        
        reverse(ans.begin(), ans.end());
        return ans;
    }
    int evalRPN(vector<string>& tokens) {
        stack<int> s;
        
        // Read tokens from left to right
        for (int i = 0; i < tokens.size(); i++) {
            string token = tokens[i];
            
            // If the token is an operator
            if (token == "+" || token == "-" || token == "*" || token == "/") {
                // Order matters! The first one popped is the second operand.
                int val2 = s.top(); 
                s.pop();
                int val1 = s.top(); 
                s.pop();
                
                if (token == "+") s.push(val1 + val2);
                else if (token == "-") s.push(val1 - val2);
                else if (token == "*") s.push(val1 * val2);
                else if (token == "/") s.push(val1 / val2);
            } 
            // If the token is a number
            else {
                // std::stoi converts the string to an int, handling negatives perfectly
                s.push(stoi(token)); 
            }
        }
        
        // The final answer is the only number left on the stack
        return s.top();
    }

};
