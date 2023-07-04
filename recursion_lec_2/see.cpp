//#include<iostream>
//using namespace std;
//#include<math.h>
//
//string keypad(int n){
//    string input;
//    switch (n) {
//        case 2: input = "abc";
//            break;
//        case 3: input = "def";
//            break;
//        case 4: input = "ghi";
//            break;
//        case 5: input = "jkl";
//            break;
//        case 6: input = "mno";
//            break;
//        case 7: input = "pqrs";
//            break;
//        case 8: input = "tuv";
//            break;
//        case 9: input = "wxyz";
//            break;
//    }
//    return input;
//}
//
//void subs(int numb, string output){
//    if(numb == 0){
//        cout<<output<<endl;
//        return;
//    }
//    int n =  numb%10;   // for last digit;
//    numb = numb / 10;   // for the first digit;
//
//    string input = keypad(n);
//    for(int i = 0; i<input.size(); i++){
//        subs(numb, input[i] + output);
//    }
//}
//
//int main(){
//    int n;
//    cin>>n;
//    string output = " ";
//
//    subs(n, output);
//}
