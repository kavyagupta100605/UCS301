#include<iostream>
#include<stack>
#include<algorithm>
using namespace std;
int precedence(char ch)
{
    if(ch == '^')
        return 3;
    else if(ch == '/' || ch == '*')
        return 2;
    else if(ch == '+' || ch == '-')
        return 1;
    else
        return -1;

}
string prefix(string &str)
{
    stack<char> s;
    int i=0,j=0;
    string f;
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]>='a'&&str[i]<='z' || str[i]>='A' && str[i]<='Z' || str[i]>='0' && str[i]<='9')
        {
            f.push_back(str[i]);
        
        }
        else if(str[i]=='(')
        {
            s.push(str[i]);
        }
        else if(str[i]==')')
        {
            while(!s.empty()&&s.top()!=('('))
            {
                f.push_back(s.top());
                s.pop();
        
            }
            s.pop();
        }
        else 
        {
            while(s.top()!='(' && precedence(str[i])<precedence(s.top()))
            {
                f.push_back(s.top());
                s.pop();
            }
            s.push(str[i]);
        }
    }
    while(!s.empty()) {
        f.push_back(s.top());
        s.pop();
    }
    return f;
    
}
int  main()
{
    string str={"A+B*C/D+(E-F)"};
    reverse(str.begin(),str.end());
    int i=0;
    while(str[i]!='\0')
    {
        if(str[i]==')')
            str[i]='(';
        if(str[i]=='(')
            str[i]=')';
        i++;
    }
    string j=prefix(str);
    reverse(j.begin(),j.end());
    cout<<j;
}