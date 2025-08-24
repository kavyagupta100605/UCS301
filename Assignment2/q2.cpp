#include<iostream>
#include<stack>
using namespace std;
void reverse(string str)
{
    stack<char> s;
    int i=0;
    while(str[i]!='\0')
    {
        s.push(str[i]);
        i++;
    }
    i=0;
    while(!s.empty())
    {
        str[i]=s.top();
        s.pop();
        i++;
    }
    cout<<str;
}
int main(){
    string str= {"DataStructure"};
    reverse(str);
}