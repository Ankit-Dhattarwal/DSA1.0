#include<iostream>
using namespace std;

int multiple(int m, int n){
    if(n == 0){
        return 0;
    }
    int mult = multiple(m, n-1);
    int a = mult + m;
    return a;
}

int main(){
    cout<<"Enter the numbers want to multiple"<<endl;
    int m, n;
    cin>>m>>n;
    
    int ans = multiple(m, n);
    cout<<ans<<endl;
    
}
