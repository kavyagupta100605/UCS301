// Develop a menu driven program demonstrating the following operations on Circular Queues:
// enqueue(), dequeue(), isEmpty(), isFull(), display(), and peek().
#include<iostream>
using namespace std;
class circularqueue
{
    int f=-1,r=-1;
    int num,n=5;
    int arr[5];
    public:
    void enqueue(int num);
    void dequeue();
    bool isEmpty();
    bool isFull();
    void display();
    int peek();
};
void circularqueue::enqueue(int num)
{
    if(f==0 && r==n-1 || f==r+1)
    {
        cout<<"Queue is overflowed";
    }
    else{
        if(f==-1 && r==-1)
        {
            f=0;
            r=0;
        }
        else if(r==n-1){
            r=0;
        }
        else{
            r++;
        }
        arr[r]=num;
    }
}
void circularqueue::dequeue(){
    if(f==-1 || f==r)
    {
        cout<<"Queue is underflown";
    }
    else
    {
        f++;
    }
}
void circularqueue::display(){
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
}
int main(){
    circularqueue q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.enqueue(5);
    q.dequeue();
    q.enqueue(9);
    q.display();
    return 0;
}