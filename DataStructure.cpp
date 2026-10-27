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

    InsertAtBeginning(head, 1);
    InsertAtBeginning(head, 2);
    InsertAtBeginning(head, 3);
    InsertAtBeginning(head, 4);
    InsertAtBeginning(head, 5);

    Print(head);

    clsNode* N1 = Find(head, 2);

    InsertAfer(N1, 500);

    Print(head);

    system("pause>0");
    return 0;
}


