#include<iostream>
using namespace std;

void pstar(char input[]){
    
    int len = 0;
    for(int i = 0; input[i] != '\0'; i++){
        len++;
    }
    
    if(input[0] == '\0'){
        return;
    }
    
    pstar(input+1);
    
    if(input[0] == input[1]){
        for(int i = len; i>=1;i--){
            input[i+1] = input[i];
        }
        input[1] = '*';
    }
}

int main(){
    char input[100];
    cin.getline(input, 100);
    
    pstar(input);
    cout<<input<<endl;
}
