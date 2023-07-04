#include<iostream>
using namespace std;

bool checkNumber(int* p , int size, int nmbr){
    
    if(size == 0){
        return false;
    }
    if(p[0] == nmbr){
        return true;
    }
    
    
    
    bool result = checkNumber(p+1, size - 1, nmbr);
    if(!result){
        return false;
    }
    else{
        return true;
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
    
    cout<<"Enter the element you want to find"<<endl;
    int e;
    cin>>e;
    
    
    // how to pass the 1D array to a function which create in the heap
  bool check = checkNumber(p, n, e);
    
    if(check == true){
        cout<<"True"<<endl;
    }
    else{
        cout<<"false"<<endl;
    }
    
    // deallocating array which create in the heap
    delete[]  p;
}
