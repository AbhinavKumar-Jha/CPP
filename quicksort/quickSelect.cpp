#include<iostream>
#include<algorithm>
using namespace std;
int partition(int arr[], int startIdx, int endIdx){
    int pivotElement = arr[startIdx];
    int count = 0;
    for(int i=startIdx+1;i<=endIdx;i++){
        if(arr[i]<=pivotElement) count++;
    }
    int pivotIdx = count+startIdx;
    swap(arr[startIdx],arr[pivotIdx]);
    int i=startIdx;
    int j=endIdx;
    while(i<pivotIdx && j>pivotIdx){
      if(arr[i]<=pivotElement) i++;
      if(arr[j]>pivotElement) j--;
      else if(arr[i]>pivotElement && arr[j]<=pivotElement){
        swap(arr[i],arr[j]);
        i++;
        j--;
      }  
    }
    return pivotIdx;
}
int kthSmallest(int arr[], int startIdx, int endIdx, int k){
    int pivotIdx=partition(arr,startIdx,endIdx);
    if(pivotIdx+1==k) return arr[pivotIdx];
    else if(pivotIdx+1<k) return kthSmallest(arr,pivotIdx+1,endIdx,k);
    else return kthSmallest(arr,startIdx,pivotIdx-1,k);
    // kthSmallest(arr,pivotIdx+1,endIdx);
}
int main(){
    int arr[]={5,1,8,2,7,6,3,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int k=4;
    cout<<kthSmallest(arr, 0, n-1,k);
    return 0;
}