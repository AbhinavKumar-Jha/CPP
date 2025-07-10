#include<iostream>
#include<algorithm>
using namespace std;
int partition(int arr[], int startIdx, int endIdx){
    int pivotElement = arr[(startIdx+endIdx)/2];
    int count = 0;
    for(int i=startIdx;i<=endIdx;i++){
        if(i==(startIdx+endIdx)/2) continue;
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
void quicksort(int arr[], int startIdx, int endIdx){
    if(startIdx>=endIdx) return;
    int pivotIdx=partition(arr,startIdx,endIdx);
    quicksort(arr,startIdx,pivotIdx-1);
    quicksort(arr,pivotIdx+1,endIdx);
}
int main(){
    int arr[]={5,1,8,2,7,6,3,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    quicksort(arr, 0, n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}