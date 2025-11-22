#include<iostream>
using namespace std;
class Node{
    public:
    int key;
    Node *left;
    Node *right;
};
    Node *newNode(int item){
        Node *temp=new Node;
        temp->left=temp->right=nullptr;
        temp->key=item;
        return temp;
    }
    Node *insert(Node *root,int key)
    {
        if(root==nullptr) 
            return newNode(key);
        if(key<root->key)
        {
            Node *lchild=insert(root->left,key);
            root->left=lchild;
        }
        else if(key>root->key)
        {
            Node *rchild=insert(root->right,key);
            root->right=rchild;
        }
        return root;
    }
    void inorder(Node *root)
    {
        if(root==nullptr)
            return;
        inorder(root->left);
        cout<<root->key<<" ";
        inorder(root->right);
    }
    int sumll(Node *root,int sum=0)
    {
        if(root==nullptr)
            return 0;
        sum=sum+sumll(root->left,sum);
        sumll(root->right,sum);
        return sum;
    }

int main(){
    Node *root = NULL;
    root = insert (root, 50);
    insert (root, 30);
    insert (root, 20);
    insert (root, 40);
    insert (root, 70);
    insert (root, 60);
    insert (root, 80);
    //inorder(root);
    cout<<sumll(root);
    return 0;
}