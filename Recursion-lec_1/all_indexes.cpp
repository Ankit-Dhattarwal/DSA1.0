#include<iostream>
using namespace std;
int  allIndex(int* p , int size, int e, int* output){
    
    if(size == 0){
        return 0;
    }
    
    int  result = allIndex(p, size - 1, e, output);
    if(p[size - 1] == e){
        output[result] = size-1;
        return result+1;
    }
    else{
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
