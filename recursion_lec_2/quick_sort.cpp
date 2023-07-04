#include<iostream>
using namespace std;

int partition(int arr[], int s, int e){
    int count = 0;
    for(int i = 0; i<=e; i++){
        if(arr[i]<arr[s]){
            count++;
        }
    }
    int temp;
    temp = arr[s];
    arr[s] = arr[count];
    arr[count] = temp;
    
    int i = s;
    int j = e;
    while(i<j){
        if(arr[i]<arr[count]){
            i++;
        }
        else if(arr[j]> arr[count]){
            j--;
        }
        else{
            int temp = 0;
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
            j--;
        }
    }
    return count;
}



void qs(int arr[], int si, int ei){
    if(si >= ei){
        return;
    }
    
    int c = partition(arr, si, ei);
    qs(arr, si, c-1);
    qs(arr, c+1, ei);
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
    
    qs(arr, 0, n-1);
    
    for(int i = 0 ; i<n;i++){
        cout<<arr[i]<<endl;
    }
}
