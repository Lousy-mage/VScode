#include "iostream"
using namespace std;

class Node
{   public:
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

    void insAtPos(int pos, int value){
        Node *prev = new Node;
        Node *current = new Node;
        current=head;

        Node *newNode= new Node;
        newNode->data = value;
        newNode->next = NULL;

        if(pos < 1){
            cout<<"position less than 1 is not allowed"<<endl;
        }
        else if (pos == 1 ){
            newNode->next = head;
            head = newNode;
        }
        else{
            for(int i=1 ; i<pos ; i++){
                prev = current;
                current = current->next;
                if (current==NULL){
                    cout<<"invalid position"<<endl;
                    return;
                }
            }
            prev->next=newNode;
            newNode->next=current;
        }
            
    }

};
int main(){

    LinkedList l;
    l.insAtPos(1,29);
    l.insAtPos(2,4);
    l.insAtPos(0,9);

    return 0;
}