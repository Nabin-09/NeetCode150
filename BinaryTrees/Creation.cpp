#include<bits/stdc++.h>

using namespace std;

class Node{
    public: 
        int data;
        Node* right;
        Node* left;
    Node(int d){
        this->data = d;
        this->left = NULL;
        this->right = NULL;    }  
};

Node* buildtree(Node* root){
    cout << "Enter data for node : \n";
    int data; cin >> data;

    root = new Node(data);
    if(data == -1) return NULL;
    

    cout << "Enter data to be inserted in left of "<<data<<"\n";
    root->left = buildtree(root->left);
    cout<<"Enter data to be inserted in right of "<<data<<"\n";
    root->right = buildtree(root->right);
    return root;

}
int main(){
    Node* root = NULL;
    root = buildtree(root);
}