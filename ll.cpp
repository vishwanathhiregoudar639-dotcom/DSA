
// #include<iostream>
// using namespace std;

// // void print(int n){
// //     if(n==0){
// //         return;
// //     }
// //     print(n-1);
// //     cout<< n << " ";
    
// //     }

// //     int main(){
// //         print(5);
// //         return 0;
// //     }

// void print(int n){
//     if(n == 0){
//         return;
//     }
//     cout<< n << " ";
//     print(n-1);

// }
// int main(){
//     print(5);
//     return 0;
// }

// #include<iostream>
// #include<vector>
// using namespace std;

// int sum(int n){
//     if(n==1){
//         return 1;
//     }
//     return n+sum(n-1);

// }
// int main(){
//     cout << sum(6) << endl;
//     return 0;
// }

// int sum(int n){

//     if(n==1){
//         return 1;
//     }
//     return n + sum(n-1);
// }
// int main(){
//     cout << sum(7) << endl;
//     return 0;
// }


// int fibonacci(int n){
//     if(n==0 || n==1){
//         return n;
//     }
//     return fibonacci(n-1) + fibonacci(n-2);
// }

// int main(){
//     cout << fibonacci(7) << endl;
//     return 0;
// }

// int fibonacci(int n){
//     if(n==0 || n==1){
//         return n;
//     }
//     return fibonacci(n-1) + fibonacci(n-2);
// }
// int main(){
//     cout << fibonacci(7)<< endl;
//     return 0;
// }

// bool isSorted(int arr[],int n,int i){
//     if(i==n-1){
//         return true;
//     }
//     if(arr[i] > arr[i+1]){
//         return false;
//     }
//     return isSorted(arr,n,i+1);
// }
// int main(){
//     int arr1[5] ={1,2,3,4,5};
//     int arr2[5] ={1,4,2,3,5};

//     cout << isSorted(arr2,5,0);
//     return 0;
// }

// int firstOccur(vector<int>arr,int i,int target){
//     if(i== arr.size()){
//         return -1;
//     }
//     if(arr[i] == target){
//         return i;
//     }
//     return firstOccur(arr,i+1,target);
// }
// int main(){
//     vector<int>arr = {1,2,3,3,3,4};
//     cout << firstOccur(arr,0,3) << endl;
//     return 0;
// }

// #include<iostream>
// #include<climits>
// using namespace std;

// // int main(){
// //     int marks[] = {5,6,73,64,74,35};
// //     int size = 6;
// //     int largest = INT_MIN;

// //     for(int i=0;i<size;i++){
// //         if(marks[i] > largest){
// //             largest = marks[i];
// //         }
// //     }
// //     cout << "largest = " << largest << endl;
// //     return 0;

// // }

// int main(){
//     int n = 5;
//     int arr[5] ;
//     // int n = sizeof(arr)/sizeof(int);

//     for(int i=0;i<n;i++){
//         cin >> arr[i];
//     }

//     for(int i=0;i<n;i++){
//         cout << arr[i] << " ,";
//     }
//     cout << endl;

//     return 0;

// }

// #include<iostream>
// #include<climits>
// using namespace std;

// int main(){
//     int marks[] = {3,5,6,7,8};
//     int size = 6;
//     int smallest = INT_MAX;

//     for(int i=0;i<size;i++){
//         if(marks[i] < smallest){
//             smallest = marks[i];

//         }
//     }
//     cout << "Smallest = " << smallest << endl;
//     return 0;

// }


// #include<iostream>
// using namespace std;

// void reverseArray(int arr[],int sz){
//     int start =0,end = sz-1;

//     while(start < end){
//         swap(arr[start], arr[end]);
//         start++;
//         end--;
//     }
// }

// int main(){
//     int arr[] = {5,4,3,9,2};
//     int sz = 5;

//     reverseArray(arr,sz);

//     for(int i=0;i<sz;i++){
//         cout <<arr[i] << " ";
//     }

//     cout << endl;
//     return 0;
// }

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

