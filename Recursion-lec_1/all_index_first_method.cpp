#include<iostream>
using namespace std;
int  allIndex(int* p , int size, int e, int* output){
    
    if(size == 0){
        return 0;
    }
    
    int  result = allIndex(p+1, size - 1, e, output);
    
    // shift the array in right direction and add 1 if they equal;
    if(p[0] == e){
        for(int i= result-1 ;i>=0 ;i--)
          {
              output[i+1] =  output[i]+1;
          }
          output[0] = 0;
        return result+1;
    }
    
    // if not equal then only add 1 ;
    else{
        for(int i= result-1 ;i>=0 ;i--)
          {
              output[i] =  output[i]+1;
          }
        return result;
    }
}

int main(){
    cout<<"Enter the size of the array"<<endl;
    int n;
    cin>>n;
    
    int* p = new int[n];
    cout<<"Enter the elements of the arrays"<<endl;
    //taking elements of the arrays
    for(int i = 0; i<n; i++){
        cin>>p[i];
    }
    
    cout<<"Enter the element"<<endl;
    int e;
    cin>>e;
    
    int *output = new int[n];
    
    // how to pass the 1D array to a function which create in the heap
  int  check = allIndex(p, n, e, output);
//
//    if(check == true){
//        cout<<"True"<<endl;
//    }
//    else{
//        cout<<"false"<<endl;
//    }
    
      for(int i = 0; i < check; i++) {
          cout << output[i] << " ";
      }
    
    // deallocating array which create in the heap
    delete[]  p;
    delete [] output;
}

