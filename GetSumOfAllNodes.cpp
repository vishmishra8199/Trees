#include<iostream>
using namespace std;

class tree{
    public:
    int data;
    tree * left;
    tree * right;
    
    tree(int x){
        data =x;
        left =right =NULL;
    }
};

int findsum(tree * root){
    static int sum = 0;

    if(root==NULL)return 0;
    
    sum=sum+root->data;
    findsum(root->left);
    findsum(root->right);

    return sum;

}

int main(){
    tree * root = new tree(9);
    root->left = new tree(2);
    root->right = new tree(48);
    root->left->left =new tree(11);
    root->left->right = new tree(21);
    root-> right->left = new tree(23);
    root->right->right = new tree(28);
    root->left->left->left = new tree(50);
    cout<<findsum(root);
    return 0;
}