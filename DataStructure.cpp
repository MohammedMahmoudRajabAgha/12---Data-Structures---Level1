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

void InsertAtEnd(clsNode* &head, int value)
{
    /*
        1-Create a new node with the desired value.
        2-Traverse the list to find the last node.
        3-Set the next pointer of the last node to the new node.
        4-Set the previous pointer of the new node to the last node.
    */


    clsNode* new_node = new clsNode();
    new_node->value = value;
    new_node->next = NULL;

    if (head == NULL)
    {
        new_node->prev = NULL;
        head = new_node;
        return;
    }

    else
    {
        clsNode* Current = head;

        while (Current->next != NULL)
        {
            Current = Current->next;
        }

        Current->next = new_node;
        new_node->prev = Current;
    }
}

//My Solution For Delete Node...

//void DeleteNode(clsNode*& head, clsNode* &NodeToDelete)
//{
//
//    if (head == NULL || NodeToDelete == NULL) 
//    {
//        return;
//    }
//
//    if (NodeToDelete->next == NULL && NodeToDelete->prev == NULL)
//    {
//        head = NULL;
//        delete NodeToDelete;
//        return;
//    }
//    
//    if (NodeToDelete->next != NULL)
//    {
//        if (NodeToDelete->prev == NULL)
//        {
//            //NodeToDelete->next->prev = NodeToDelete->prev;
//            NodeToDelete->next->prev = NULL;
//            head = NodeToDelete->next;
//            delete NodeToDelete;
//            return;
//        }
//
//        NodeToDelete->next->prev = NodeToDelete->prev;
//        NodeToDelete->prev->next = NodeToDelete->next;
//        delete NodeToDelete;
//        return;
//    }
//
//    if (NodeToDelete->next == NULL)
//    {
//        //NodeToDelete->prev->next = NodeToDelete->next;
//        NodeToDelete->prev->next = NULL;
//        delete NodeToDelete;
//        return;
//    }
//    
//}
void DeleteNode(clsNode*& head, clsNode*& NodeToDelete)
{
    /*
        1-Set the next pointer of the previous node to the next pointer of the current node.
        2-Set the previous pointer of the next node to the previous pointer of the current node.
        3-Delete the current node.
    */


    if (head == NULL)
    {
        return;
    }

    if (head == NodeToDelete)
    {
        head = NodeToDelete->next;
    }

    if (NodeToDelete->next != NULL)
    {
        NodeToDelete->next->prev = NodeToDelete->prev;
    }

    if (NodeToDelete->prev != NULL)
    {
        NodeToDelete->prev->next = NodeToDelete->next;
    }

    delete NodeToDelete;
    NodeToDelete = NULL;
}

void DeleteFirstNode(clsNode*& head)
{
    /*
        1-Store a reference to the head node in a temporary variable.
        2-Update the head pointer to point to the next node in the list.
        3-Set the previous pointer of the new head to NULL.
        4-Delete the temporary reference to the old head node.
    */


    if (head == NULL)
    {
        return;
    }

    clsNode* Temp = head;
    head = head->next;

    if (head != NULL)
    {
        head->prev = NULL;
    }

    delete Temp;
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
    PrintListDetails(head);

    DeleteFirstNode(head);

    cout << "\n\n\nLinked List Contenet after Delete First Node :\n";
    PrintList(head);
    PrintListDetails(head);

    system("pause>0");
    return 0;
}