#include<iostream>
using namespace std;
#include"class_LL_stack.cpp"

int main(){
    Stack<char> s1;
    s1.push(100);
    s1.push(101);
    s1.push(102);
    s1.push(103);
    s1.push(104);
    
    cout<<s1.top()<<endl;
    
    cout<<s1.pop()<<endl;
    cout<<s1.pop()<<endl;
    cout<<s1.pop()<<endl;
    
    cout<<s1.getSize()<<endl;
    
    cout<<s1.isEmpty()<<endl;
}

