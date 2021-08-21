# include<iostream>

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


int height(tree * root){
    if(root==NULL)return 0;

    return max(height(root->left),height(root->right))+1;
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
    cout<<height(root);
    return 0;
}