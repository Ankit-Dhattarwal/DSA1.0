#include<iostream>
using namespace std;

void rp(char s[], char that, char with){
    if(s[0] == '\0'){
        return;
    }
    
    if(s[0] != that){
        rp(s +1, that, with);
    }
    else{
        s[0] = with;
        rp(s, that, with);
    }
}

int main(){
    char str[100];
    cin>>str;
    
    cout<<"Enter that you want to replace"<<endl;
    char n;
    cin>>n;
    
    cout<<"Enter that replace with"<<endl;
    char e;
    cin>>e;
    
    rp(str, n, e);
    cout<<str<<endl;
}

















/*
 #include<iostream>
 using namespace std;

 void rp(char s[]){
     if(s[0] == '\0'){
         return;
     }
     
     if(s[0] != 'a'){
         rp(s +1);
     }
     else{
         s[0] = 'x';
         rp(s);
     }
 }

 int main(){
     char str[100];
     cin>>str;
     
     rp(str);
     cout<<str<<endl;
 }

 */
