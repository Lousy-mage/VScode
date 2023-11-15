#include "iostream"
using namespace std;
class Node
{
    public:
    int data;
    Node *next;
};
class LinkedList
{
    public:
    Node *head,*tail;
    LinkedList(){
        head=NULL;
        tail=NULL;
    }
    void insertAtFront(int value){
        Node *newNode= new Node;
        newNode->data = value;
        newNode->next = NULL;
        if (head==NULL){
            head=newNode;
            tail=newNode;
        }
        else {
            newNode->next = head;
            head=newNode;
        }
    }
};

int main()
{
    LinkedList l;
    l.insertAtFront(40);
    l.insertAtFront(30);
    l.insertAtFront(43);
    l.insertAtFront(25);

    return 0;
}