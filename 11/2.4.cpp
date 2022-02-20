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

void printList(Node* node)
{
    while(node != NULL)
    {
        cout << node -> value << " ";
        node = node -> next;
    }
}

void deleteElement(Node* node, int E)
{   
    while(node != NULL && node -> next != NULL)
    {
        if (node -> value == E && (node -> next) -> value != E)
            node -> next = (node -> next) -> next;
        
        node = node -> next;
    }
}

int main()
{
    srand(time(NULL));

    Node* initialListHead = NULL;
    Node* initialListTail = NULL;

    int listLength = 10;
    int randomStart = 1;
    int randomEnd = 3;
    int E;
    
    cout << "Enter E: ";
    cin >> E;
    cout << endl;

    for (int i = 0; i < listLength; i++)
    {
        int value = rand() % randomEnd + randomStart;
        insertValue(initialListHead, initialListTail, value);
    }

    cout << "Initial list: ";
    printList(initialListHead);
    cout << endl << endl;
    
    deleteElement(initialListHead, E);
    
    cout << "Initial list after deleting E: ";
    printList(initialListHead);
}