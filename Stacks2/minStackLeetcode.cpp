// // Leetcode 155 (Min Stack)
// // Method -> 1 (Brute force)

// class MinStack {
// public:
//     stack<int> st;
//     MinStack() { // constructor
        
//     }
    
//     void push(int val) {
//         st.push(val);
//     }
    
//     void pop() {
//         st.pop();
//     }
    
//     int top() { // O(1)
//         return st.top();
//     }
    
//     int getMin() {
//         stack<int> helper;
//         int mn = INT_MAX;
//         while(st.size()>0){
//             mn = min(mn,st.top());
//             helper.push(st.top());
//             st.pop();
//         }
//         while(helper.size()>0){
//             st.push(helper.top());
//             helper.pop();
//         }
//         return mn;
//     }
// };


// // Method -> 2 (Best Solution)

// class MinStack {
// public:
//     stack<int> st;
//     stack<int> helper;
//     MinStack() { // constructor
        
//     }
    
//     void push(int val) {
//         st.push(val);
//         if(helper.size()==0 || val<helper.top()) helper.push(val);
//         else helper.push(helper.top());
//     }
    
//     void pop() {
//         st.pop();
//         helper.pop();
//     }
    
//     int top() { // O(1)
//         return st.top();
//     }
    
//     int getMin() {
//         return helper.top();
//     }
// };