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
void insert_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if(head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail= newNode;
}
void is_same(Node *head)
{
    vector<int> v;

    Node *tmp = head;
    while(tmp!=NULL)
    {
        v.push_back(tmp->val);
        tmp= tmp->next;
    }
    vector
}
int main()
{
    Node *head = NULL; 
    Node *tail = NULL;
    int val;
    while(true)
    {
        cin>>val;
        if(val == -1)
        break;
        insert_tail(head, tail, val);
    } 
    is_same(head);
    return 0;
}