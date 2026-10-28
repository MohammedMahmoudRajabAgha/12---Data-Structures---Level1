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

clsNode* Find(clsNode* head, int value)
{
    while (head != NULL)
    {
        if (head->value == value)
            return head;

        head = head->next;
    }

    return NULL;

}

void InsertAfer(clsNode* prev_node, int Value)
{
    if (prev_node == NULL)
    {
        cout << "\nThe given previous node cannot be NULL";
        return;
    }

    clsNode* new_node = new clsNode();
    new_node->value = Value;
    new_node->next = prev_node->next;

    prev_node->next = new_node;
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

    system("pause>0");
    return 0;
}


