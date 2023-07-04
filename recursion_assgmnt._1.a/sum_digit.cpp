#include<iostream>
using namespace std;

int sum(int n){
    if(n == 0){
        return 0;
    }
    
    int ans = sum(n/10);
    int add = n % 10;
    int result = add + ans;
    return  result;
}

int main(){
    int n;
    cin>>n;
    
    int ans = sum(n);
    cout<<ans<<endl;
}
