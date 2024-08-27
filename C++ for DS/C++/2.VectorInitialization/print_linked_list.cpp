// #include<bits/stdc++.h>
// using namespace std;
// class Node
// {
//     public:
//         int val;
//         Node* next;
//     Node(int val)
//     {
//         this->val=val;
//         this->next=NULL;
//     }
// };
// int main()
// {
//     Node* head = new Node(10);
//     Node* a = new Node(20);
//     Node* b = new Node(30);
//     Node* c = new Node(40);
//     Node* d = new Node(50);

//     head->next =a;
//     a->next=b;
//     b->next=c;
//     c->next=d;

//     // cout<<head->val<<endl;
//     // cout<<head->next->val<<endl;
//     // cout<<head->next->next->val<<endl;
//     // cout<<head->next->next->next->val<<endl;
//     Node* tmp = head;
//     while(tmp!=NULL)
//     {
//         cout<<tmp->val<<endl;
//         tmp= tmp->next;
//     }
//     tmp = head;
//     while(tmp!=NULL)
//     {
//         cout<<tmp->val<<endl;
//         tmp= tmp->next;
//     }
//     return 0;
// }

#include <iostream>
using namespace std;

// Definition for singly-linked list node
struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

int main() {
    ListNode* head = nullptr;
    ListNode* tail = nullptr;
    int input;
    int size = 0;

    // Read inputs until -1 is encountered
    while (cin >> input && input != -1) {
        ListNode* newNode = new ListNode(input);
        if (!head) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
        size++;
    }

    // Print the size of the linked list
    cout << size << endl;

    // Clean up the memory
    ListNode* current = head;
    while (current) {
        ListNode* next = current->next;
        delete current;
        current = next;
    }

    return 0;
}

