#include<iostream>
using namespace std;
#include<math.h>

int subs(string input, string output[]){
    if(input.empty()){
        output[0] = " ";
        return 1;
    }
    string substring = input.substr(1);
    int smallOutputSize = subs(substring, output);
    for(int i = 0 ; i<smallOutputSize;i++){
        output[i + smallOutputSize] = input[0] + output[i];
    }
    return  2 * smallOutputSize;
}

int main(){
    string input;
    cin>>input;
    int length =  int(input.size());
    int size = pow(2, length);
    string* output = new string[size];
    int count =  subs(input, output);
    for(int i = 0; i<count;i++){
        cout<<output[i]<<endl;
    }
}
