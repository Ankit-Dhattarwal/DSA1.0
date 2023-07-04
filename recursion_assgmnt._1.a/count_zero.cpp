#include<iostream>
using namespace std;

int count(int n){
    if(n == 0){
        return 0;
    }
    int ans = count(n/10);
    if(n%10 == 0){
        return ans + 1;
    }
    else{
        return ans;
    }
}

int main(){
    cout<<"Enter the number"<<endl;
    int n;
    cin>>n;
    int zero = count(n);
    if(zero == 0){
        cout<<zero + 1<<endl;
    }
    else{
        cout<<zero<<endl;
    }
}
