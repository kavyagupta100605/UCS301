// Write a program to implement a stack using (a) Two queues and (b) One Queue.
#include<iostream>
#include<queue>
using namespace std;
int pop1(queue<int> q1)
{
    int temp;
    queue<int> q2;
    while(!q1.empty())
    {
        temp=q1.front();
        q2.push(temp);
        q1.pop();
    }
    while(!q2.empty())
    {
        if(q2.front()!=temp)
        {
            int temp1=q2.front();
            q1.push(temp1);
            q2.pop();
        }
        else{
            q2.pop();
            break;
        }
    }
    return temp;
}
int main(){
    queue<int> q1;
    q1.push(10);
    q1.push(25);
    q1.push(35);
    q1.push(60);
    int t=pop1(q1);
    q1.pop();
    q1.pop();
    q1.pop();
    cout<<q1.front();
}