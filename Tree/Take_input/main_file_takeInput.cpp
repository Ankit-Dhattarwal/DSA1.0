#include<iostream>
#include "class_treeNode.h"
#include<queue>
using namespace std;

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

void printLevelWise(TreeNode<int>*root){
    if(root == NULL){
        return;
    }
    queue<TreeNode<int>*> pendingPrintNode;
    pendingPrintNode.push(root);
    
    while(pendingPrintNode.size() != 0){
        TreeNode<int>* front = pendingPrintNode.front();
        pendingPrintNode.pop();
        
        cout<<front->data<<":";
        
        for(int i = 0; i<front->children.size(); i++){
            cout<<front->children[i]->data<<",";
            pendingPrintNode.push(front->children[i]);
        }
        cout<<endl;
        
        
    }
}

TreeNode<int>* takeInput(){
    int rootData;
    cout<<"Enter the Data"<<endl;
    cin>>rootData;
    
    TreeNode<int>*root = new TreeNode<int>(rootData);
    
    int n;
    cout<<"Enter num of children of "<<rootData<<endl;
    cin>>n;
    
    for(int i = 0;  i< n; i++){
        TreeNode<int>* child = takeInput();
        root->children.push_back(child);
    }
    return root;
}

void printTree(TreeNode<int>*root){
    if(root == NULL){
        return;   // This is not the base case of the recursion
    }
    cout<<root->data<<":";
    
    for(int i = 0; i< root-> children.size(); i++){
        cout<<root->children[i]->data<<",";
    }
    cout<<endl;
    
    for(int i = 0; i<root->children.size(); i++){
        printTree(root->children[i]);
    }
}

int numNodes(TreeNode<int>* root){
    if(root == NULL){
        return 0;
    }
    int ans = 1;
    for(int i = 0; i< root->children.size(); i++){
        ans += numNodes(root->children[i]);
    }
    return ans;
}

int sumNodes(TreeNode<int>* root){
    if(root == NULL){
        return 0;
    }
    int sum = root->data;
    for(int i = 0 ; i<root->children.size(); i++){
        sum += sumNodes(root->children[i]);
    }
    return sum ;
}

TreeNode<int>* LargestNode(TreeNode<int>* root){
    TreeNode<int> *result = root;
    int large = root->data;
    
    for(int i = 0; i<root->children.size(); i++){
        TreeNode<int>* temp = LargestNode(root->children[i]);
        if(temp -> data > large){
            large = temp ->data;
            result = temp;
        }
    }
    return result;
}

int heightTree(TreeNode<int>* root){
    int temp = 0, height = 0;
    if(root == NULL){
        return 0;
    }
    if(root->children.size() == 0){
        return 1;
    }
    for(int i = 0 ; i < root->children.size(); i++){
      temp = heightTree(root->children[i]);
        
        if(temp > height){
            height = temp;
        }
    }
    return height+1;
}

int countLeafNode(TreeNode<int>* root){
    int count = 0;
    if(root == NULL){
        return 0;
    }
    if(root->children.size() == 0){
        return 1;
    }
    
    for(int i = 0 ; i<root->children.size(); i++){
      count += countLeafNode(root->children[i]);
    }
    return count;
}

void printAtLevelK(TreeNode<int>* root, int K){
    if(root == NULL){
        return;
    }
    if(K ==0){
        cout<<root->data<<endl;
        return;
    }
    for(int i = 0 ; i<root->children.size(); i++){
        printAtLevelK(root->children[i], K-1);
    }
}

void preOrder(TreeNode<int>* root){
    if(root == NULL){
        return;
    }
    cout<<root->data<<" ";
    
    for(int i= 0; i< root->children.size(); i++){
        preOrder(root->children[i]);
    }
}

void postOrder(TreeNode<int>* root){
    if(root == NULL){
        return;
    }
    for(int i  = 0; i< root->children.size(); i++){
        postOrder(root->children[i]);
    }
    cout<<root->data<<" ";
}

int main(){
    
    //1 3 2 3 4 2 5 6 2 7 8 0 0 0 0 1 9 0
    
    
    /*
    TreeNode<int> * root = new TreeNode<int>(1);
    TreeNode<int> * node1 = new TreeNode<int>(2);
    TreeNode<int> * node2 = new TreeNode<int>(3);

    root -> children.push_back(node1);
    root -> children.push_back(node2);
    */
  //  TreeNode<int>* root = takeInput();
    TreeNode<int>* root = takeInputLevelWise();
   // printTree(root);
    printLevelWise(root);
    //TODO delete the tree;
   cout<<"the number of the nodes is "<<numNodes(root)<<endl;
    
    cout<<"Level 2: "<<endl;
    printAtLevelK(root, 2);
    
    cout<<"the sum of the nodes is "<<sumNodes(root)<<endl;
    
    TreeNode<int>* ans = LargestNode(root);
    cout<<"the largest nodes is "<<ans->data<<endl;
    
    cout<<"The height of the tree is: "<<heightTree(root)<<endl;
    
    cout<<"The num of the leafNode is: "<<countLeafNode(root)<<endl;
    
  //  preOrder(root);
    postOrder(root);
}

