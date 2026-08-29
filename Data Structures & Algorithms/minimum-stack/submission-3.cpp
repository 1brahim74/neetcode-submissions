class MinStack {
private:
    vector<pair<int,int>>v;
    long long int curmin=9223372036854775800;
public:
    MinStack() {
        
    }
    
    void push(int val) {
        if(val<curmin)
            curmin=val;
        v.push_back({val,curmin});
        return;
    }
    
    void pop() {
        v.pop_back();
        if(v.empty())
        {
            curmin=9223372036854775800;
            return;
        }
        auto it=v.end();it--;
        curmin=it->second;
        return;
    }
    
    int top() {
        auto it=v.end();it--;
        return it->first;
    }
    
    int getMin() {
        return curmin;
    }
};
