#include<iostream>
using namespace std;

//int lengths(char input[]){
//    int len = 0;
//    for(int i =0;input[i] != '\0'; i++){
//        len++;
//    }
//    return len;
//
//}

void replace(char input[]){
    
    if(input[0] == '\0'){
        return;
    }
 
   replace(input+1);
//
    if(input[0] =='p' && input[1] =='i'){
        int len = 0;
        for(int i =0;input[i] != '\0'; i++){
            len++;
        }
        for(int i = len; i >= 2 ; i--){
            input[i+2] = input[i];
        }
//        len = len +2;
        input[0] = '3';
        input[1] = '.';
        input[2] = '1';
        input[3] = '4';

    }
}

int main(){
    char input[100];
    cin.getline(input, 100);
//    cout<<"Enter the string"<<endl;
//    for(int i = 0; input[i] != '\0'; i++){
//        cin>>input[i];
//    }
//    int length = lengths(input);
    
    replace(input);
    cout<<input<<endl;
    
}

