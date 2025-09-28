// Develop a menu driven program demonstrating the following operations on simple
// Queues: enqueue(), dequeue(), isEmpty(), isFull(), display(), and peek().
#include<iostream>
using namespace std;
class queues{
    int num;
    int f=-1,r=-1;
    int arr[5];
    public:
    void enqueue(int num1);
    void dequeue();
    // void isempty();
    // void isfull();
    void display();
    // void peek1();
};
void queues::enqueue(int num1){
    if(r==4)
        cout<<"Overflow"<<endl;
    else {
        if(f==-1 && r==-1)
        {
            f=0;
            r=0;
        }
        else{
            r++;
        }
        arr[r]=num1;
    }
}
void queues::display()
{
    int t=r;
    for(int i=f;i<=t;i++)
    {
        cout<<arr[i];
    }
}
void queues::dequeue()
{
    if(f==-1||f>r)
    {
        cout<<"underflow";
    }
    else{
        f++;
    }
}
int main()
{
    queues q1;
    q1.enqueue(8);
    q1.enqueue(9);
    q1.enqueue(1);
    q1.enqueue(2);
    q1.enqueue(3);
    q1.enqueue(4);
    q1.enqueue(5);
    q1.display();
    q1.dequeue();
    q1.dequeue();
    q1.dequeue();
    q1.dequeue();
    q1.dequeue();
    q1.dequeue();
    q1.display();
    return 0;
}