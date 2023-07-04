#include<iostream>
using namespace std;
#include "class_treeNode.h"
#include<queue>

TreeNode<int> *takeInputLevelWise(){
    int rootData;
    cout<<"Enter the root Data"<<endl;
    cin>>rootData;
    TreeNode<int>*root = new TreeNode<int>(rootData);
    
    queue<TreeNode<int>*> pendingNode;
    pendingNode.push(root);
    
    while(pendingNode.size() != 0){
        TreeNode<int>* front = pendingNode.front();
        pendingNode.pop();
        
        cout<<"Enter num of children of "<<front->data<<endl;
        int numChild;
        cin>>numChild;
        
        for(int i = 0 ; i<numChild ; i++){
            int childData;
            cout<<"Enter " << i << "th child of "<<front->data<<endl;
            cin>>childData;
            TreeNode<int>*child = new TreeNode<int>(childData);
            front ->children.push_back(child);
            pendingNode.push(child);
        }
    }
    return root;
}

int findElement(TreeNode<int>* root, int x){
    if(root == NULL){
        return 0;
    }
    for(int i = 0; i<root->children.size(); i++){
        if(x == root->children[i]->data){
            return 1;
        }
    }
    return 0;
}

int countLargeThenElement(TreeNode<int>* root, int x){
    if(root ==NULL){
        return 0;
    }
    
    int count = 0;
    if(root->data > x){
        count++;
    }
    
    for(int i = 0; i<root->children.size(); i++){
     count += countLargeThenElement(root->children[i], x);
    }
    return count;
}

int main(){
    TreeNode<int>* root = takeInputLevelWise();
    int x;
    cout<<"Enter the element"<<endl;
    cin>>x;
    
    int ans = findElement(root, x);
    if(ans == 1){
        cout<<"True"<<endl;
    }
    else{
        cout<<"False"<<endl;
    }
    
    int LargeCount = countLargeThenElement(root, x);
    cout<<"The large then x is: "<<LargeCount<<endl;
}
