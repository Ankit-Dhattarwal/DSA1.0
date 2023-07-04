#include<iostream>
using namespace std;

bool helper( char input[], int start, int end){
    if(input[start] == input[end]){
        return true;
    }
    
    if(input[start] != input[end]){
        return false;
    }
    bool hp = helper(input, start+1, end-1);
    return hp;
}


bool check( char input[]){
    int len = 0;
    for(int i = 0; input[i] != '\0'; i++){
        len++;
    }
    
    if(len == 0 || len == 1){
        return true;
    }
    bool help =  helper(input,0, len-1);
    return help;
}

int main(){
    char input[100];
    cin.getline(input, 100);
    
   bool ans =  check(input);
    if(ans == 1){
        cout<<"true"<<endl;
    }
    else{
        cout<<"false"<<endl;
    }
}
