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

//Level Order Traversal :

void levelOrderTraversal(Node* root){
    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        Node* temp = q.front();
        
        q.pop();

        if(temp == NULL){
            cout <<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout<<temp->data <<" ";
            if(temp -> left) q.push(temp -> left);
            if(temp -> right) q.push(temp -> right);
        }
    }
}
int main(){
    Node* root = NULL;
    root = buildtree(root);
    //1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    cout<<"Level order traversal for the tree : \n";
    levelOrderTraversal(root);
    /*
    Level order traversal for the tree :
    1 3 5 7 11 17
    */
}