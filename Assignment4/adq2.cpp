// sort_queue_no_extra.cpp
#include <iostream>
#include <queue>
#include <climits>
using namespace std;

// Find minimum among first 'upto' elements, while preserving queue order
int findMin(queue<int>& q, int upto) {
    int s = q.size();
    int minVal = INT_MAX;
    for (int i = 0; i < s; ++i) {
        int val = q.front(); q.pop();
        if (i < upto && val < minVal) minVal = val;
        q.push(val);
    }
    return minVal;
}

void moveMinToRear(queue<int>& q, int minVal) {
    int s = q.size();
    bool removed = false;
    for (int i = 0; i < s; ++i) {
        int val = q.front(); q.pop();
        if (!removed && val == minVal) {
            removed = true;
            continue; // skip push of this first occurrence
        }
        q.push(val);
    }
    q.push(minVal);
}

void sortQueue(queue<int>& q) {
    int n = q.size();
    for (int i = 0; i < n; ++i) {
        int minVal = findMin(q, n - i);
        moveMinToRear(q, minVal);
    }
}

int main() {
    queue<int> q;
    q.push(11);
    q.push(5);
    q.push(4);
    q.push(21);

    sortQueue(q);

    cout << "Sorted Queue: ";
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
    return 0;
}
