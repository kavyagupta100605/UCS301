// 1. Develop a menu driven program for the following operations on a Singly Linked
// List.
// (a) Insertion at the beginning.
// (b) Insertion at the end.
// (c) Insertion in between (before or after a node having a specific value, say 'Insert a
// new Node 35 before/after the Node 30').
// (d) Deletion from the beginning.
// (e) Deletion from the end.
// (f) Deletion of a specific node, say 'Delete Node 60').
// (g) Search for a node and display its position from head.
// (h) Display all the node values.
#include<iostream>
using namespace std;
class LinkedList{
    int data;
    LinkedList* next;
    public:
    LinkedList(int data)
    {
        this->data=data;
        next=nullptr;
    }
    LinkedList(){
        data=0;
        next=nullptr;
    }
    void add(int x,LinkedList head){
        LinkedList temp;
        temp.data=x;

    }
};
int main()
{
    LinkedList head(1);
    head.add(9);
}