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

// Print the linked list
void Print(clsNode* head)
{
    while (head != NULL)
    {
        cout << head->value << "  ";
        head = head->next;
    }
}

int main()
{
    clsNode* head = NULL;

    InsertAtBeginning(head, 10);
    InsertAtBeginning(head, 20);
    InsertAtBeginning(head, 30);
    InsertAtBeginning(head, 40);
    InsertAtBeginning(head, 50);

    Print(head);

    clsNode* N1 = Find(head, 2);

    if (N1 != NULL)
    {
        cout << "\nNode is Found :-)\n";
        cout << N1->value << endl;
    }
    else
    {
        cout << "\nNode is NOT Found :-(\n";
    }

    system("pause>0");
    return 0;
}


