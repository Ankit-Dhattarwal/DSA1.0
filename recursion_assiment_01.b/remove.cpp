#include<iostream>
using namespace std;

void remove(char input[]){
    
    if(input[0] == '\0'){
        return;
    }
    remove(input+1);
    
    int len = 0;
    for(int i = 0; input[i] != '\0'; i++){
        len++;
    }
    
    if(input[0] == 'x'){
        for(int i = 0; i<=len-1;i++){
            input[i] = input[i+1];
        }
    }

}

int main(){
    char input[1000];
    cin.getline(input, 1000);
    
    remove(input);
    cout<<input<<endl;
}
