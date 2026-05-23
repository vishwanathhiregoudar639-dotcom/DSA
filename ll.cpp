
#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};

// Function to detect cycle in linked list
bool detectCycle(Node* head) {
    Node* slow = head;
    Node* fast = head;

    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;           // move 1 step
        fast = fast->next->next;     // move 2 steps

        if (slow == fast) {
            return true; // cycle found
        }
    }

    return false; // no cycle
}

int main() {
    // Creating linked list
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);

    // Creating a loop
    head->next->next->next->next = head->next;

    if (detectCycle(head)) {
        cout << "Cycle detected";
    } else {
        cout << "No cycle found";
    }

    return 0;
}

