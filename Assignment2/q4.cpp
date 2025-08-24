#include<iostream>
#include<stack>
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
string postfix(string &str)
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
            while(!s.empty() && precedence(str[i])<=precedence(s.top()))
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
int calculation(int ch1,int ch2,char f){
    int cal;
    if(f == '/')
        cal=ch2/ch1;
    if(f == '*')
        cal=ch2*ch1;
    if(f == '+')
        cal=ch2+ch1;
    if(f == '-')
        cal=ch2-ch1;
    return cal;
}
int evalution(string f)
{
    stack<int> s;
    int ch1,ch2;
    int cal;
    for(int i=0;f[i]!='\0';i++)
    {
        if(f[i]>='0' && f[i]<='9')
        {
            s.push(f[i]-'0');
        }
        else{
            ch1=s.top();
            s.pop();
            ch2=s.top();
            s.pop();
            cal=calculation(ch1,ch2,f[i]);
            s.push(cal);
        }
    }
    return s.top();
}
int main()
{   string str = {"(4+8)*(6-5)/((3-2)*(2+2))"};
    string f=postfix(str);
    cout<<"Answer is="<<evalution(f);
    return 0;
}
