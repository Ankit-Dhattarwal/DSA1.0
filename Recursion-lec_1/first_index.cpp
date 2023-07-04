#include<iostream>
using namespace std;
int  FirstIndex(int* p , int size, int e){
    
    if(size == 0){
        return -1;
    }
    if(p[0] == e){
        return 0;
    }
    
    int  result = FirstIndex(p+1, size - 1, e);
    if(result == -1){
        return -1;
    }
    else{
        return result + 1;
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
    
    
    // how to pass the 1D array to a function which create in the heap
  int  check = FirstIndex(p, n, e);
    cout<<check<<endl;
//
//    if(check == true){
//        cout<<"True"<<endl;
//    }
//    else{
//        cout<<"false"<<endl;
//    }
    
    // deallocating array which create in the heap
    delete[]  p;
}
