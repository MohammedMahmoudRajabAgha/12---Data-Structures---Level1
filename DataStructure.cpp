#include<iostream>
using namespace std;

//Doubly Linked List
// Creating a node
class clsNode
{
public:
    int value;
    clsNode* next;
    clsNode* prev;
};

int main()
{
    clsNode* head = NULL;

    clsNode* Node1 = NULL;
    clsNode* Node2 = NULL;
    clsNode* Node3 = NULL;

    // allocate 3 nodes in the heap
    Node1 = new clsNode();
    Node2 = new clsNode();
    Node3 = new clsNode();

    // Assign value values
    Node1->value = 1;
    Node2->value = 2;
    Node3->value = 3;

    // Connect nodes
    Node1->next = Node2;
    Node1->prev = NULL;

    Node2->next = Node3;
    Node2->prev = Node1;

    Node3->next = NULL;
    Node3->prev = Node2;

    // print the linked list value
    head = Node1;

    while (head != NULL)
    {
        cout << head->value << " ";
        head = head->next;
    }

    system("pause>0");
    return 0;
}


