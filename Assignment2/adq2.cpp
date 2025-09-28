#include<iostream>
#include<stack>
using namespace std;
class SpecialStack
{
    stack<int> s;
    stack<int> m;
    public:
    void push(int num){
        if(s.empty())
        {
            s.push(num);
            m.push(num);
        }
        else if(s.top()<num)
        {
            s.push(num);
        }
        else{
            s.push(num);
            m.push(num);
        }
    }
    void pop()
    {
        if(s.top()==m.top())
        {
            s.pop();
            m.pop();
        }
        else{
            s.pop();
        }
    }
    int getMin()
    {
        return m.top();
    }
};
int main() {
    SpecialStack st;
    
    st.push(3);
    st.push(4);
    cout << st.getMin() << endl;
    st.push(2);
    cout << st.getMin() << endl;
    st.pop();



    return 0;
}
