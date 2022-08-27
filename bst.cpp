#include<iostream>
#include<queue>
using namespace std;

class Node{
    public:
        int data;
        Node* left;
        Node* right;

        Node(int d){
            this->data=d;
            this->left=NULL;
            this->right=NULL;
        }
};

//level order to print
void levelOrderTraversal(Node* root){
    queue<int> q;
    

}
Node* insertBST(Node* root, int d){
    if(root==NULL){
        root=new Node(d);
        return root;
    }
    if(d>root->data){
        root->right=insertBST(root->right,d);
    }
    else{
        root->left=insertBST(root->left,d);
    }
    return root;
}

void takeInput(Node *&root){
    int data;
    cin>>data;
    while(data != -1){
        insertBST(root, data);
        cin>>data;
    }
}

int main(){
    Node *root=NULL;

    cout<<"enter data"<<endl;
    takeInput(root);

    return 0;
}