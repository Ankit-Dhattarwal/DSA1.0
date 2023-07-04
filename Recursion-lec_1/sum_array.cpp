#include<iostream>
using namespace std;

int sum(int* p, int size){
    if(size == 0){
        return 0;
    }
    int c= p[0];
    int smallerOutput = sum(p+1,size-1);
    return  c + smallerOutput;
}

int main(){
    int n;
    cin>>n;
    int* p = new int[n];
    
    //taking elements of the arrays
    for(int i = 0; i<n; i++){
        cin>>p[i];
    }
    
    // how to pass the 1D array to a function which create in the heap
    int output = sum(p, n);
    cout<<output<<endl;
    
    // deallocating array which create in the heap
    delete[]  p;
}
