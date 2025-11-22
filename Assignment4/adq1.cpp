// generate_binary_numbers.cpp
#include <iostream>
#include <queue>
#include <string>
using namespace std;

void generateBinary(int n) {
    queue<string> q;
    q.push("1");
    for (int i = 0; i < n; ++i) {
        string s1 = q.front(); q.pop();
        cout << s1 << (i + 1 == n ? "" : "\n");
        string s2 = s1;
        q.push(s1 + "0");
        q.push(s2 + "1");
    }
    cout << endl;
}

int main() {
    int n = 10; // example
    generateBinary(n);
    return 0;
}
