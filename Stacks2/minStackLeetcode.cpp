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
// // TC -> O(1) and SC -> O(n)

// class MinStack {
// public:
//     stack<int> st;
//     stack<int> helper;
//     MinStack() { // constructor
        
//     }
    
//     void push(int val) { // O(1)
//         st.push(val);
//         if(helper.size()==0 || val<helper.top()) helper.push(val);
//         else helper.push(helper.top());
//     }
    
//     void pop() { // O(1)
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


// // Method -> 3  (Ultimate method)
// TC -> O(1) and SC -> O(1)

// class MinStack {
// public:
//     stack<long long> st;
//     long long min;
//     MinStack() { // constructor
//         min = LLONG_MAX;
//     }
    
//     void push(int val) { // O(1)
//         long long x = (long long)val;
//         if(st.size()==0){
//             st.push(x);
//             min = x;
//         }
//         else if(x>=min) st.push(x);
//         else{ // val<min
//             st.push(2*x-min);
//             min = x;
//         }
//     }
    
//     void pop() { // O(1)
//         if(st.top()<min){ // A fake value is present
//             // before popping make sure to retrieve the old min
//             long long oldMin = 2*min-st.top();
//             min = oldMin;
//         }
//         st.pop();
//     }
    
//     int top() { // O(1)
//         if(st.top()<min) return (int)min;
//         else return (int)st.top();
//     }
    
//     int getMin() { // O(1)
//         return (int)min;
//     }
// };