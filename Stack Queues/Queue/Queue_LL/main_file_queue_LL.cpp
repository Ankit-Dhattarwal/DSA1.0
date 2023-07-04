#include<iostream>
using namespace std;
#include "class_queue_ll.h"

int main(){
    Queue<int> q;
    q.equeue(10);
    q.equeue(20);
    q.equeue(30);
    q.equeue(40);
    q.equeue(50);
    q.equeue(60);
    
    cout<<q.front()<<endl;
    cout<<q.dequeue()<<endl;
    cout<<q.dequeue()<<endl;
    cout<<q.dequeue()<<endl;
    
    cout<<q.getsize()<<endl;
    cout<<q.isEmpty()<<endl;

}
