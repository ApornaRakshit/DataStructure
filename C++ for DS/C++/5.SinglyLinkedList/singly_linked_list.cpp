#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int val;
        Node* next;
    Node(int val)
    {
        this->val=val;
        this->next=NULL;
    }
};

int main()
{
    // Node a,b;
    // a.val=10;
    // b.next=20;
    // a.next=&b;      Static way
 
    // Dynamic way
    Node *a= new Node(10);
    Node *b= new Node(20);
    a->next = b;  

    cout<<a->next->val <<endl;

    return 0;
}