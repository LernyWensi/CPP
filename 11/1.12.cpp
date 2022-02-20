#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

class Node
{
    public:
        int value;
        Node* next;
};

void insertValue(Node* &head, Node* &tail, int value)
{
    if (head == NULL)
    {
        Node* firstNode = new Node();
        firstNode -> value = value;
        firstNode -> next = NULL;
        head = firstNode;
        tail = firstNode;
    }
    else
    {
        Node* node = new Node();
        node -> value = value;
        node -> next = NULL;
        tail -> next = node;
        tail = node;
    }
}

void splitList(Node* node, Node* &oddListHead, Node* &oddListTail, Node* &evenListHead, Node* &evenListTail)
{   
    int index = 1;
    
    while(node != NULL)
    {
        if (index % 2 == 0)
            insertValue(evenListHead, evenListTail, node -> value);
        else
            insertValue(oddListHead, oddListTail, node -> value);
        
        node = node -> next;
        index += 1;
    }
}

void printList(Node* node)
{
    while(node != NULL)
    {
        cout << node -> value << " ";
        node = node -> next;
    }
}

int main()
{
    srand(time(NULL));
    
    Node* initialListHead = NULL;
    Node* initialListTail = NULL;
    
    Node* oddListHead = NULL;
    Node* oddListTail = NULL;
    
    Node* evenListHead = NULL;
    Node* evenListTail = NULL;
    
    int listLength = 10;
    int randomStart = 1;
    int randomEnd = 30;
    
    for (int i = 0; i < listLength; i++)
    {
        int value = rand() % randomEnd + randomStart;
        insertValue(initialListHead, initialListTail, value);
    }
    
    cout << "Initial list: ";
    printList(initialListHead);
    
    splitList(initialListHead, oddListHead, oddListTail, evenListHead, evenListTail);
    
    cout << "\n\nOdd list: ";
    printList(oddListHead);
    cout << "\nEven list: ";
    printList(evenListHead);
    
}
