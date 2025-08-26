//Daily Temperatures
#include<iostream>
#include<stack>
using namespace std;
void nextgreatestelement(int temperatures[])
{   
    stack<int> s;
    int result[8];
    for(int i=7;i>=0;i--)
        {
            
            while(!s.empty() && temperatures[i]>=temperatures[s.top()])
            {
                s.pop();
            }
            if(!s.empty())
            {
                result[i]=(s.top()-i);
            }
            else
            {
                result[i]=0;
            }
            s.push(i);
        }
    for (int i = 0; i < 8; i++)
    {
        cout<<result[i];
    }
    
}
int main()
{
    int arr[]={73,74,75,71,69,72,76,73};
    nextgreatestelement(arr);
    return 0;
}

    


