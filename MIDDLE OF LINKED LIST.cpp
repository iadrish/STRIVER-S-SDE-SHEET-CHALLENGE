/*
Following is the class structure of the Node class:

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
    }
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
};
*/

Node *findMiddle(Node *head) {
    // Write your code here
    if(head==NULL )
    return NULL;

    if(head->next==NULL)
    return head;

    Node *slow=head;
    Node *fast=head;

    while(slow!=NULL && slow->next!=NULL)
    {
        slow=slow->next->next;
        fast=fast->next;
    }
    return fast;


}

