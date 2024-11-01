#include <iostream>
using namespace std;

struct Node{
     int data;
     Node* right;
     Node* left;

     Node(int value){
     data=value;
     left=right=nullptr;

     }
};
void inodertraversal(Node* root){
    if(root==nullptr)
    return;

    inodertraversal(root->left);
    cout<<root->data<<"  ";
    inodertraversal(root->right);
}

int main(){
 Node* root=new Node(1);
 root->left=new Node(2);
 root->left->left=new Node(4);
 root->left->left->left=new Node(6);
 root->left->left->right=new Node(8);
 root->left->right=new Node(5);
 root->left->right->left=new Node(9);
 root->left->right->right=new Node(9);
 root->right=new Node(3);
 root->right->left=new Node(11);
 root->right->right=new Node(12);
 cout<<"In-order Tree travasel printing here: "<<endl;
 inodertraversal(root);
}
