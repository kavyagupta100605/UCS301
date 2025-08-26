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
