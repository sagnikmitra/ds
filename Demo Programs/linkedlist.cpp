#include<iostream>
using namespace std;
class Node
{
    friend class Linked_List;
public:
    int data;
    Node *link_node;
};
class Linked_List : public Node
{
    friend class Node;
private:
    Node *start_node;
public:
    Linked_List()
    {
        start_node = NULL;
    }
    //DECLARING LINKED LIST FUNCTIONS
    Node insert_new_node(int a);
    Node delete_existing_node(int &a);
    void Display_List();
};
//INSERTION
Node Linked_List :: insert_new_node(int a) //USING SCOPE RESOLUTION OPERATOR
{
    Node *new_node = new Node;
    new_node->data = a;
    new_node->link_node=start_node;
    start_node = new_node;
    return *this; //USING THIS POINTER TO REPRESENT THE CIO
}
//DELETION
Node Linked_List :: delete_existing_node(int &a) //DELETES FROM THE BEGINNING
{
    Node *del = start_node;
    start_node = start_node -> link_node;
    delete del;
    return *this; //USING THIS POINTER TO REPRESENT THE CIO
}
//DISPLAY
void Linked_List::Display_List()
{
    Node *Traversing_Node = start_node;
    while(Traversing_Node!=NULL)
    {
        cout<<Traversing_Node->data<<" -> ";
        Traversing_Node = Traversing_Node -> link_node;
    }
}
int main()
{
    Linked_List List;
    List.insert_new_node(1);
    List.insert_new_node(2);
    List.insert_new_node(3);
    List.insert_new_node(4);
    List.Display_List():
   List Display_List();
    List Display();
    Disokay():
    isplay();
    Disply();
    
    return 0;
    return 0;
}
