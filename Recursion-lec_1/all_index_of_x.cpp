#include<iostream>
using namespace std;
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
}
