#include<iostream>
using namespace std;

void merge(int arr[], int s, int e, int mid){
    int arr2[500];
    int k = s;
    int i = s;
    int j = mid + 1;
    while(i<=mid && j<=e){
        if(arr[i]<arr[j]){
            arr2[k] = arr[i];
            k++;
            i++;
        }
        else{
            arr2[k] = arr[j];
            k++;
            j++;
        }
    }
        while(i<=mid){
            arr2[k] = arr[i];
            k++;
            i++;
        }
        while(j<=e){
            arr2[k] = arr[j];
            k++;
            j++;
        }
    
    for(int i = 0; i<k;i++){
        arr[i] = arr2[i];
    }
}

void mergeSort(int arr[], int start, int end){
    if(start>= end){
        return;
    }
    int mid = (start + end)/2;
    
    mergeSort(arr, start, mid);
    mergeSort(arr, mid+1, end);
    
    merge(arr, start, end, mid);
}

int main(){
    cout<<"Enter the size of the array"<<endl;
    int n;
    cin>>n;
    cout<<"Enter the elements of the arrays"<<endl;
    int arr[n];
    
    for(int i = 0 ; i<n;i++){
        cin>>arr[i];
    }
    
    mergeSort(arr, 0, n-1);
    
    for(int i = 0 ; i<n;i++){
        cout<<arr[i]<<endl;
    }
}
