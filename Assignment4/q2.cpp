//chat gpt way
// Initialize a counter count = 0.

// Remove key nodes from the head: while the head exists and head->data == key, delete the node, move head forward, and increment count.

// Traverse the list with a pointer current. For each step, check current->next.

// If current->next->data == key, unlink and delete it, and increment count; otherwise, move current forward.

// Return the updated head and the total count. 

//my way
#include<iostream>
using namespace std;
class Node {
public:
    int data;
    Node* next;

    Node(int new_data) {
        data = new_data;
        next = nullptr;
    }
};
Node* delete1(Node *head,int key,int &count){
    int diff=0;
    Node *temp=head;
    Node *prev=head;
    while(temp!=nullptr)
    {
        if(temp->data!=key)
        {
            diff++;
            prev=temp;
            if(diff==1)
            {
                head=prev;
            }
        }
        else
        {
            prev->next=temp->next;
            count++;
        }
        temp=temp->next;
    }
    prev->next=nullptr;
    return head;
}
void display(Node* head)
{
    Node* temp=head;
    while(temp!=nullptr)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

int main() {

    // Create a hard-coded linked list:
    // 2 -> 2 -> 1 -> 8 -> 2 -> NULL
    Node* head = new Node(1);
    head->next = new Node(1);
    head->next->next = new Node(2);
    head->next->next->next = new Node(3);
    
    int key =1;
    int count=0;
    head=delete1(head,key,count);
    cout<<"C="<<count<<endl;
    display(head);
}