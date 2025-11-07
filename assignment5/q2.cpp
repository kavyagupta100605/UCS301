#include <iostream>
using namespace std;

// Node class (represents each element in the circular linked list)
class Node {
public:
    int val;
    Node* next;

    Node(int v) {
        val = v;
        next = nullptr;
    }
};

// LinkedList class (manages the circular linked list)
class LinkedList {
private:
    Node* head;

public:
    LinkedList() {
        head = nullptr;
    }

    // Function to insert a node at the end of the circular linked list
    void insert(int value) {
        Node* newNode = new Node(value);

        if (head == nullptr) {  // If list is empty
            head = newNode;
            head->next = head;  // Point to itself (circular)
        } else {
            Node* temp = head;
            while (temp->next != head) {
                temp = temp->next;
            }
            temp->next = newNode;
            newNode->next = head;  // Maintain circular link
        }
    }

    // Function to display the circular linked list (repeating head value at end)
    void display() {
        if (head == nullptr) {
            cout << "List is empty." << endl;
            return;
        }

        Node* temp = head;
        do {
            cout << temp->val << " ";
            temp = temp->next;
        } while (temp != head);

        cout << head->val << endl;  // repeat head value at end
    }
};

int main() {
    LinkedList cll;

    // Inserting values
    cll.insert(20);
    cll.insert(100);
    cll.insert(40);
    cll.insert(80);
    cll.insert(60);

    // Displaying circular linked list
    cll.display();  // Output: 20 100 40 80 60 20

    return 0;
}
