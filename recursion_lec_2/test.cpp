#include<iostream>
using namespace std;
#include<math.h>

int subs(int numb, string output[]){
    if(numb == 0){
        output[0] = " ";
        return 1;
    }
    int n =  numb%10;   // for last digit;
    numb = numb / 10;   // for the first all digit expect last digit ;
    
    int smallOutputSize = subs(numb, output);
    
    string input;
    switch (n) {
        case 2: input = "abc";
            break;
        case 3: input = "def";
            break;
        case 4: input = "ghi";
            break;
        case 5: input = "jkl";
            break;
        case 6: input = "mno";
            break;
        case 7: input = "pqrs";
            break;
        case 8: input = "tuv";
            break;
        case 9: input = "wxyz";
            break;
    }
    int 
}

int main(){
    int n;
    cin>>n;
    string* output = new string[n];
    
    int count = subs(n, output);
    for(int i = 0; i<count;i++){
        cout<<output[i]<<endl;
    }
}

