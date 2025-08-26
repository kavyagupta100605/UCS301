// Given an array arr[ ] of integers, the task is to find the Next Greater Element for each element of the
// array in order of their appearance in the array. Note: The Next Greater Element for an element x is
// the first greater element on the right side of x in the array. Elements for which no greater element
// exist, consider the next greater element as -1.
// Next Greater Element (NGE) for every element in given Array - GeeksforGeeks
#include<iostream>
#include<stack>
using namespace std;
void nextgreatestelement(int arr[])
{   
    stack<int> s;
    int result[4];
    for(int i=3;i>=0;i--)
    {
        while(!s.empty() && arr[i]>=s.top())
            s.pop();
        if(!s.empty() && s.top()>arr[i])
        {
            result[i]=s.top();
        }
        else{
            result[i]=-1;
        }
        s.push(arr[i]);
    }
    for (int i = 0; i < 4; i++)
    {
        cout<<result[i];
    }
    
}
int main()
{
    int arr[]={1,3,2,4};
    nextgreatestelement(arr);
    return 0;
}
