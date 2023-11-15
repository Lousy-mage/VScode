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
    Node *head, *tail;
    LinkedList(){
        head=NULL;
        tail=NULL;

    }

    void insertAtEnd(int value){
        Node * newNode = new Node;
        newNode->data = value;
        newNode->next - NULL;

        if (head== NULL){
            head=newNode;
            tail=head;
            return;
        }
        else{
            tail->next= newNode;
            tail= tail->next;
            return;
        }
    }

};

int main()
{
    LinkedList l;

    l.insertAtEnd(20);
    l.insertAtEnd(30);
    
    return 0;
}