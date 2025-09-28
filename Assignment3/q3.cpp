
#include<iostream>
using namespace std;
const int n=6;
class circularqueue
{
    int f=-1,r=-1;
    int num;
    int arr[n];
    public:
    void enqueue(int num);
    void dequeue();
    bool isEmpty();
    bool isFull();
    void display();
    int peek();
};
int circularqueue::peek(){
    if(f==-1)
    {
        cout<<"Queue is underflown";
        return -1;
    }
    else
        return arr[f];
}
void circularqueue::enqueue(int num)
{
    if(f==0 && r==n-1 || f==r+1)
    {
        cout<<"Queue is overflowed";
        return;
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
    if (f == -1) {   // only when truly empty
    cout << "Queue is underflown\n";
    return;
}
    if (f==r)
    {
        f=r=-1;
    }
    else if(f==n-1)
    {
        f=0;
    }
    else
        f++;
}
void circularqueue::display(){
    if(f==-1)
    {
        cout<<"Queue is empty";
        return;
    }
    int i=f;
    while (true)
    {
        cout<<arr[i]<<" ";
        if(i==r)
            break;
        i=(i+1)%n; 
    }
    
}
int main()
{
    circularqueue q1;
    q1.enqueue(4);
    q1.enqueue(7);
    q1.enqueue(11);
    q1.enqueue(20);
    q1.enqueue(5);
    q1.enqueue(9);
    circularqueue q2;
    for(int i=1;i<=n/2;i++)
    {
        q2.enqueue(q1.peek());
        q1.dequeue();
    }
    

    for(int i=0;i<n/2;i++)
    {
        
       
            q1.enqueue(q2.peek());
            q2.dequeue();
        
        
            q1.enqueue(q1.peek());
            q1.dequeue();
        
    }
    q1.display();
}