#include<iostream>
using namespace std;

class clsNode
{
public:
    int value;
    clsNode* next;

};

void InsertAtBeginning(clsNode*& head, int value)
{
    // Allocate memory to a node
    clsNode* new_node = new clsNode();

    // insert the data
    new_node->value = value;
    new_node->next = head;
   
    // Move head to new node
    head = new_node;
}

void InsertAtEnd(clsNode* &head, int value)
{
    clsNode* new_node = new clsNode();
    new_node->value = value;
    new_node->next = NULL;

    if (head == NULL)
    {
        head = new_node;
        return;
    }

    clsNode* LastNode = head;
    while (LastNode->next != NULL)
    {
        LastNode = LastNode->next;
    }

    LastNode->next = new_node;
    return;
}

//void DeleteAllNode(clsNode*& head)
//{
//    while (head != NULL)
//    {
//        clsNode* temp = head;
//        head = head->next;
//
//        delete temp;
//    }
//}

void DeleteNode(clsNode*& head, int value)
{
    if (head == NULL)//Linked List is Empty
    {
        return;
    }

    clsNode* prev_node = head;
    clsNode* curr_node = head;

    if (head->value == value)
    {
        head = head->next;

        delete prev_node;//free from memory
        return;
    }

    //Find the key to be deleted
    while (curr_node != NULL && curr_node->value != value)
    {
        prev_node = curr_node;
        curr_node = curr_node->next;
    }

    //To Prevent This Status -> Prev->next = NULL->Next   ??? Error!! 
    //if the value is not found->prev_node = LastNode, Curr_Node = NULL
    if (curr_node == NULL) return;

    //Remove the node
    prev_node->next = curr_node->next;
    delete curr_node;//free from memory
}

void DeleteFirstNode(clsNode* &head)
{
    if (head == NULL)
        return;

    clsNode* Curr_Node = head;

    head = head->next;

    delete Curr_Node;//free from memory
}

// Print the linked list
void Print(clsNode* head)
{
    while (head != NULL)
    {
        cout << head->value << "  ";
        head = head->next;
    }

    cout << endl;
}

int main()
{
    clsNode* head = NULL;

    InsertAtEnd(head, 1);
    InsertAtEnd(head, 2);
    InsertAtEnd(head, 3);
    InsertAtEnd(head, 4);
    InsertAtEnd(head, 5);

    Print(head);

    InsertAtBeginning(head, 0);

    Print(head);

    cout << "\n\n*****************************\n";
    
    DeleteFirstNode(head);
    Print(head);
    
    cout << "\n\n*****************************\n";

    DeleteFirstNode(head);
    Print(head);

    cout << "\n\n*****************************\n";

    DeleteFirstNode(head);
    Print(head);

    cout << "\n\n*****************************\n";

    system("pause>0");
    return 0;
}


