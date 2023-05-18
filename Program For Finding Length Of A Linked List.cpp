#include <bits/stdc++.h>
using namespace std;
 
// Link list node
class Node
{
    public:
    int data;
    Node* next;
};
 

void push(Node** head_ref, int new_data)
{
    // Allocate node
    Node* new_node =new Node();
 
    // Put in the data
    new_node->data = new_data;
 
    // Link the old list of the
    // new node
    new_node->next = (*head_ref);
 
    (*head_ref) = new_node;
}
 
// Counts no. of nodes in linked list
int getCount(Node* head)
{
    // Initialize count
    int count = 0;
 
    // Initialize current
    Node* current = head;
    while (current != NULL)
    {
        count++;
        current = current->next;
    }
    return count;
}
 
// Driver code
int main()
{
    // Start with the empty list
    Node* head = NULL;
 
    // Use push() to construct list
    // 1->2->1->3->1
    push(&head, 1);
    push(&head, 3);
    push(&head, 1);
    push(&head, 2);
    push(&head, 1);
 
    // Check the count function
    cout << "count of nodes is " <<
             getCount(head);
    return 0;
}
 
