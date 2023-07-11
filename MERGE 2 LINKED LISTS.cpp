#include <bits/stdc++.h>

/************************************************************

    Following is the linked list node structure.
    
    template <typename T>
    class Node {
        public:
        T data;
        Node* next;

        Node(T data) {
            next = NULL;
            this->data = data;
        }

        ~Node() {
            if (next != NULL) {
                delete next;
            }
        }
    };

************************************************************/

Node<int>* sortTwoLists(Node<int>* first, Node<int>* second)
{
    // Write your code here.
    Node<int>* dummy= new Node<int>(-1);
    Node<int>* head=dummy;

    if(first==NULL) return second;
    if(second==NULL) return first;

    while(first!=NULL && second!=NULL)
    {
        if((first->data)<(second->data))
        {
            Node<int>* newnode= new Node<int>(first->data);
            dummy->next=newnode;
            first=first->next;
        }
        else
        {
            Node<int>* newnode= new Node<int>(second->data);
            dummy->next=newnode;
            second=second->next;
        }
        dummy=dummy->next;
    }
    if(first!=NULL) dummy->next=first;
    if(second!=NULL) dummy->next=second;

    return head->next;
}
