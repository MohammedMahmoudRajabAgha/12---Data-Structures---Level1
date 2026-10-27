#include<iostream>
using namespace std;

class clsNode
{
public:
    int value;
    clsNode* next;

};

int main()
{
    clsNode* head;

    clsNode* Node1 = NULL;
    clsNode* Node2 = NULL;
    clsNode* Node3 = NULL;

    /*
    
    the diff between 
    
    when Declaration an Object in heap (Using new KeyWord), Wec Havw a concept is Initialization ->

    Don't Set Initial value for Members by Default Initialization
    1) Node1 = new clsNode; 
    
    Set Initial Value For Members By Zero Unitialization Concept
    2) Node1 = new clsNode();


    
    */

    Node1 = new clsNode();
    Node2 = new clsNode();
    Node3 = new clsNode();

    Node1->value = 10;
    Node2->value = 20;
    Node3->value = 30;

    Node1->next = Node2;
    Node2->next = Node3;
    Node3->next = NULL;

    head = Node1;

    while (head != NULL)
    {
        cout << head->value << endl;
        head = head->next;
    }

    system("pause>0");
    return 0;
}


/*#include <iostream>
using namespace std;

class clsNode
{
public:
    int Data;
    clsNode * Next;
};

int main()
{
    
    clsNode N1, N2, N3;
   
    N1.Data = 10;
    N2.Data = 20;
    N3.Data = 30;
    
    clsNode* Head = &N1;
    N1.Next = &N2;
    N2.Next = &N3;
    N3.Next = NULL;

    while (Head != NULL)
    {
        cout << Head->Data << endl;
        Head = Head->Next;
    }

    system("pause>0");

    return 0;


}*/