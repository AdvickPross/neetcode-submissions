class MinStack {
    set<int> minset;
    unordered_map<int,int> hash;
    stack<int> minstack;
public:
    MinStack() {
        
    }
    
    void push(int val) {
        minstack.push(val);
        minset.insert(val);
        hash[val]++;
    } 
    
    void pop() {
        int ele = minstack.top();
        if (hash[ele] == 1) {
            minset.erase(ele);
        }
        minstack.pop();
        hash[ele]--;
    }
    
    int top() {
        return minstack.top();
    }
    
    int getMin() {
        return *minset.begin();
    }
};
