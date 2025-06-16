// #include<iostream>
// #include<vector>
// using namespace std;
// // Function to merge two sorted vectors into one sorted result vector
// void merge(vector<int> &a, vector<int> &b, vector<int> &res){
//     int i=0; // a
//     int j=0; // b
//     int k=0; // res
//     // Compare elements from both vectors and put smaller one in result
//     while(i<a.size() && j<b.size()){
//         if(a[i]<=b[j]) res[k++]=a[i++];
//         else res[k++]=b[j++];
//     }
//         // If vector 'a' is exhausted, copy remaining elements from 'b'
//     if(i==a.size()){ // a is at end
//         while(j<b.size()){
//             res[k++]=b[j++];
//         }
//     }
//         // If vector 'b' is exhausted, copy remaining elements from 'a'
//     if(j==b.size()){ // b is at end 
//         while(i<a.size()){
//             res[k++]=a[i++];
//         }
//     }
// }
// // Recursive function to sort vector using divide and conquer approach
// void mergeSort(vector<int> &v){
//     int n=v.size();
//     if(n==1) return; // Base Case
//     int n1 = n/2, n2 = n-n/2;
//     vector<int> a(n1), b(n2);
//     // copy pasting
//     for(int i=0;i<n1;i++){
//         a[i]=v[i];
//     }
//     for(int i=0;i<n2;i++){
//         b[i]=v[i+n1];
//     }
//     // now magic aka recursion
//     mergeSort(a);
//     mergeSort(b);
//     // now merge
//     merge(a,b,v);
//     a.clear(); // it reduces space complexity by deleting unused vector
//     b.clear();
// }
// int main(){
//     int arr[]={5,1,3,0,4,9,6};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     vector<int> v(arr,arr+n);
//     for(int i=0;i<v.size();i++){
//         cout<<v[i]<<" ";
//     }
//     cout<<endl;
//     mergeSort(v);
//     for(int i=0;i<v.size();i++){
//         cout<<v[i]<<" ";
//     }
//     cout<<endl;
// }


// Other Method
#include<iostream>
#include<vector>
using namespace std;
// Merge function using start, mid, and end indices
void merge(vector<int>& arr, int start, int mid, int end) {
    // Create temporary arrays for left and right subarrays
    vector<int> left(arr.begin() + start, arr.begin() + mid + 1);
    vector<int> right(arr.begin() + mid + 1, arr.begin() + end + 1);  
    int i = 0, j = 0, k = start; 
    // Merge the temporary arrays back into arr[start..end]
    while (i < left.size() && j < right.size()) {
        if (left[i] <= right[j]) {
            arr[k++] = left[i++];
        } else {
            arr[k++] = right[j++];
        }
    } 
    // Copy remaining elements of left[], if any
    while (i < left.size()) {
        arr[k++] = left[i++];
    }  
    // Copy remaining elements of right[], if any
    while (j < right.size()) {
        arr[k++] = right[j++];
    }
}
// Recursive merge sort function
void mergeSort(vector<int>& arr, int start, int end) {
    if (start >= end) return; // Base case: single element or invalid range  
    int mid = start + (end - start) / 2; // Find middle point 
    // Recursively sort first and second halves
    mergeSort(arr, start, mid);
    mergeSort(arr, mid + 1, end); 
    // Merge the sorted halves
    merge(arr, start, mid, end);
}
int main() {
    vector<int> arr = {5, 1, 3, 0, 4, 9, 6};   
    cout << "Original array: ";
    for (int x : arr) cout << x << " ";
    cout << endl;   
    mergeSort(arr, 0, arr.size() - 1);   
    cout << "Sorted array: ";
    for (int x : arr) cout << x << " ";
    cout << endl;   
    return 0;
}