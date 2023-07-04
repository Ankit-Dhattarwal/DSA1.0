#include<iostream>
using namespace std;
#include<math.h>

float geo(int k){
    if(k == 0){
        return 1;
    }
    float a = geo(k-1);
    float sum = a + 1/pow(2, k);
    return sum;
}

int main(){
    cout<<"Enter the number"<<endl;
    int k;
    cin>>k;
    
    float ans = geo(k);
    cout<<ans<<endl;
}

