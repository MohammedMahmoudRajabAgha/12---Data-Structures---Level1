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

void InsertAtBeginning(clsNode*& head, int value)
{

    /*
      1-Create a new node with the desired value.
      2-Set the next pointer of the new node to the current head of the list.
      3-Set the previous pointer of the current head to the new node.
      4-Set the new node as the new head of the list.
  */

    clsNode* new_node = new clsNode();

    new_node->value = value;
    new_node->next = head;
    new_node->prev = NULL;

    if (head != NULL)
    {
        head->prev = new_node;
    }

    head = new_node;


    //My Solution

    //clsNode* new_node = new clsNode();
    // 
    //if (head == NULL)
    //{
    //    new_node->value = value;
    //    /////////////////////////////////
    //    new_node->next = NULL;
    //    new_node->prev = NULL;
    //    ////////////////////////////////
    //    head = new_node;
    //    return;
    //}
    //
    //new_node->value = value;
    //new_node->next = head;
    ////////////////////////
    //new_node->prev = NULL;
    ///////////////////////
    //head->prev = new_node;
    //head = new_node;
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

void InsertAfter(clsNode* current, int value)
{
    /*  
         1 - Create a new node with the desired value.
         2-Set the next pointer of the new node to the next node of the current node.
         3-Set the previous pointer of the next node to the new node(if it exists).
         4-Set the next pointer of the current node to the new node.
         5-Set the previous pointer of the new node to the current node.
    */

    if (current == NULL)
    {
        cout << "\nThe given previous node cannot be NULL";
        return;
    }
    
    clsNode* new_node = new clsNode();
    new_node->value = value;
    
    new_node->next = current->next;
    
    if (current->next != NULL)
    {
        current->next->prev = new_node;
    }
    
    current->next = new_node;
    
    new_node->prev = current;
}

void PrintclsNodeDetails(clsNode* head)
{

    if (head->prev != NULL)
        cout << head->prev->value;
    else
        cout << "NULL";

    cout << " <--> " << head->value << " <--> ";

    if (head->next != NULL)
        cout << head->next->value << "\n";
    else
        cout << "NULL";

}
// Print the linked list
void PrintListDetails(clsNode* head)

{
    cout << "\n\n";
    while (head != NULL) {
        PrintclsNodeDetails(head);
        head = head->next;
    }
}
// Print the linked list
void PrintList(clsNode* head)

{
    cout << "NULL <--> ";
    while (head != NULL) {
        cout << head->value << " <--> ";
        head = head->next;
    }
    cout << "NULL";

}



int main()
{
    clsNode* head = NULL;

    InsertAtBeginning(head, 5);
    InsertAtBeginning(head, 4);
    InsertAtBeginning(head, 3);
    InsertAtBeginning(head, 2);
    InsertAtBeginning(head, 1);

    cout << "\nLinked List Contenet:\n";
    PrintList(head);
     
    clsNode* N1 = Find(head, 5);   
    InsertAfter(N1, 2007);
     
    cout << "\nLinked List Contenet:\n";
    PrintList(head);

    system("pause>0");
    return 0;
}


