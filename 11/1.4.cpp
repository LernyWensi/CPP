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

void mergeLists(Node* &firstListTail, Node* &secondListHead)
{   
    while (secondListHead != NULL)
    {   
        firstListTail -> next = secondListHead;
        firstListTail = secondListHead;
        secondListHead = secondListHead -> next;
    }
}

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

int main()
{
    srand(time(NULL));
    
    Node* firstListHead = NULL;
    Node* firstListTail = NULL;
    
    Node* secondListHead = NULL;
    Node* secondListTail = NULL;
    
    int listLength = 5;
    int randomStart = 1;
    int randomEnd = 30;
    
    for (int i = 0; i < listLength; i++)
    {
        insertValue(firstListHead, firstListTail, rand() % randomEnd + randomStart);
        insertValue(secondListHead, secondListTail, rand() % randomEnd + randomStart);
    }
    
    cout << "First list: ";
    printList(firstListHead);
    cout << "\nSecond list: ";
    printList(secondListHead);
    
    mergeLists(firstListTail, secondListHead);
    cout << "\n\nList after merge: ";
    printList(firstListHead);
}
