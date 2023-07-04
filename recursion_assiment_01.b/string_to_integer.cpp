#include<iostream>
using namespace std;
#include<math.h>

int converter(char input[]){
    int len = 0;
    for(int i = 0; input[i] != '\0'; i++){
        len++;
    }
    
    if(len == 1){
        return input[0] - '0';
    }
    
    int a =  converter(input+1);
    
       int  b  = input[0] - '0';
        int result = b * pow(10, len-1) + a;
    return result;
}

int main(){
    char input[100];
    cin.getline(input, 100);
    
    int ans = converter(input);
    cout<<ans<<endl;
}
