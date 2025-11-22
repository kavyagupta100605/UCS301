#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;
    public:
    Node(int val)
    {
        data=val;
        left=right=nullptr;
    }
};
void preorder(Node *root)
{
    if(root==nullptr)
        return;
    cout<<root->data;
    preorder(root->left);
    preorder(root->right);
}
void inorder(Node *root)
{
    if(root==nullptr)
        return;
    inorder(root->left);
    cout<<root->data;
    inorder(root->right);
}
void postorder(Node *root)
{
    if(root==nullptr)
        return;
    postorder(root->left);
    postorder(root->right);
    cout<<root->data;
}
int search(Node *root,int num)
{
    if(root==nullptr)
        return 0;
    else if(root->data==num)
        return 1;
    if(root->data>num)
        return search(root->left,num);
    else if(root->data<num)   
        return search(root->right,num);
    
}
int max(Node *root)
{
    if(root->right==nullptr)
        return root->data;
    return max(root->right);

}
int min(Node *root)
{
    if(root->left==nullptr)
        return root->data;
    return min(root->left);

}
int maxdepth(Node *root,int count)
{
    int mc=0;
    if(root==nullptr)
        return 0;
    count++;
    maxdepth(root->left,count);
    mc=(count>mc)?count:mc;
    maxdepth(root->right,count);
    return mc;
}

int main()
{
    Node *root = new Node(3);
    root->left=new Node(2);
    root->right=new Node(5);
    root->right->right=new Node(6);

    root->left->left=new Node(1);
    root->right->left=new Node(4);
    root->left->left->left=new Node(8);
    //preorder(root);
    //inorder(root);
    //postorder(root);
    // int flag=search(root,9);
    // cout<<flag;
    //cout<<"Maximum="<<max(root);
    //cout<<"Minimun="<<min(root);]
    cout<<maxdepth(root,0);

}