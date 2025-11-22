#include <iostream>
#include <queue>
using namespace std;

class stack{
    queue<int> q;

public:
    bool isEmpty(){
        return q.empty();
    }

    void spush(int a){
        int size = q.size();
        q.push(a);

        for(int i = 0; i < size; i++){
            q.push(q.front());
            q.pop();
        }
    }

    void spop(){
        q.pop();
    }

    int stop(){
        return q.front();
    }
};

int main(){
    stack s;
    s.spush(2);
    s.spush(22);
    s.spush(33);
    s.spush(44);
    s.spush(267);

    cout << s.stop() << " Top" << endl;

    s.spush(208);
    s.spush(222);
    s.spop();

    cout << s.stop() << " Top" << endl;

    return 0;
}
// stack_two_queues.cpp
#include <iostream>
#include <queue>
using namespace std;

class StackTwoQueues {
    queue<int> q1, q2;
public:
    void push(int x) {
        // push to q2, move all q1 to q2, swap
        q2.push(x);
        while (!q1.empty()) {
            q2.push(q1.front());
            q1.pop();
        }
        swap(q1, q2);
    }

    void pop() {
        if (!q1.empty()) q1.pop();
    }

    int top() {
        if (q1.empty()) throw runtime_error("empty");
        return q1.front();
    }

    bool empty() {
        return q1.empty();
    }
};

int main() {
    StackTwoQueues s;
    s.push(10);
    s.push(20);
    s.push(30);
    cout << s.top() << endl;
    s.pop();
    cout << s.top() << endl;
    return 0;
}
