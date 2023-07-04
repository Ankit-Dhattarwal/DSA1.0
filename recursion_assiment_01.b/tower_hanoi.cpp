#include<iostream>
using namespace std;

void tower(int n, char source, char auxilary, char dest){
    if(n==0){
        return;
    }
    tower(n-1, source, dest, auxilary);
    
    cout<<source<<" "<<dest<<endl;
    
    tower(n-1,auxilary, source, dest);

}

int main(){
    int n;
    cin>>n;
    
  tower(n,'a', 'b', 'c');
}
