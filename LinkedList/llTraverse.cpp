#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
};
void printLl(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << "->";
        head = head->next;
    }
    cout << "NULL";
}
//As head is basically a pointer to the Node, so we need to pass the pointer that points to the head in this case. Here head_ref means head reference and it is doing that particular thing
//In this function, first of all we are passing the pointer to the head or basically the head reference and the data that needs to be passed on to the linkedlist
void pushAtBeg(Node **head_ref, int nData)
{
    //Here we are decalring a new pointer to the node and creating a node class object that holds a data and a pointer to the next
    Node *new_node = new Node();
    //We are assigning the data passed as an argument to the newnode's data
    new_node->data = nData;
    //Here we are assigning the new-node's next to the address of the head reference or &(**head_ref) which drills down to *head_ref
    new_node->next = &(**head_ref);
    //Here are similarly asssigning the headref to the new_node that was passed
    *head_ref = new_node;
    return;
}
//Here we are pushing a new node at the end of the LinkedListm same types of parametyres are passed in the fucntion parametres
void pushAtEnd(Node **head_ref, int nData)
{
    //We are creasting a new object of the node class new_node
    Node *new_node = new Node();
    //The below line is option we can can either write (*head_ref) or we can create a pointer object of the Node calss tmp that will point to the head_ref
    Node *tmp = *head_ref;
    new_node->data = nData;
    //We are assigning the next part of the new node to NULL as we have not traveresed the LinkedlISt yet
    new_node->next = NULL;
    //if the head ref is null, then we dont need to do anyuthingm, we just assign the head_ref to the new node and return the fucntion
    if (tmp == NULL)
    {
        tmp = new_node;
        return;
    }
    //but if that is not the case, then we check the while loop for until the (*head_ref) or the tmp's next part is NULL
    while ((tmp)->next != NULL)
    {
        //We traverse by carryforwarding the pointer
        (tmp) = (tmp)->next;
    }
    //Assginign the (*head_ref)'s [now it is in the last part of the LinkedlISt] next part to the new node
    (tmp)->next = new_node;
    return;
}
void inserAfterNode(Node **head_ref, int prev_node_data, int new_data)
{
    if (*head_ref == NULL)
    {
        cout << "The Linkedlist seems to be empty";
    }
    Node *tmp = *head_ref;
    while (tmp->next != NULL)
    {
        if (tmp->data == prev_node_data)
        {
            Node *new_node = new Node();
            new_node->data = new_data;
            new_node->next = tmp->next;
            tmp->next = new_node;
            return;
        }
        else
            tmp = tmp->next;
    }
}
int main()
{
    Node *head = NULL;
    Node *second = NULL;
    Node *third = NULL;

    head = new Node();
    second = new Node();
    third = new Node();

    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = NULL;

    pushAtBeg(&head, 23);
    pushAtEnd(&head, 34);
    inserAfterNode(&head, 3, 33);
    printLl(head);
}