
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
}#include<iostream>
#include<list>
#include<iterator>
using namespace std;

void printList(list<int>ll){
    list<int>::iterator iter;
    for(iter = ll.begin();iter != ll.end();iter++){
        cout << (*iter) << "->";
    }
    cout << "NULL" << endl;
}

int main(){
    list <int>ll;

    ll.push_front(2);
    ll.push_front(1);

    ll.push_back(3);
    ll.push_back(4);
    
    printList(ll);
    cout << ll.size() << endl;

    cout << "head=" << ll.front()<<"\n";
    cout << "tail=" << ll.back()<<"\n";

    ll.pop_front();
    printList(ll);
    
    ll.pop_back();
    printList(ll);

    return 0;
}


