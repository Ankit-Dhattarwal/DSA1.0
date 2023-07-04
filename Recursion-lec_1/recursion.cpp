#include<iostream>
using namespace std;

int power(int x, int n){
    if(n == 0){
        return 1;
    }
    int outputSmall = power(x , n - 1);
    return  x * outputSmall;
}

int main(){
    int x, n;
    cout<<"x raise to the power n"<<endl;
    cin>>x>>n;
    int output = power(x, n);
    cout<<output<<endl;
}
