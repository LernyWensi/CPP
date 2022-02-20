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

bool valueInList(Node* node, int value)
{
    while(node != NULL)
    {
        if (node -> value == value) return true;
        
        node = node -> next;
    }
    
    return false;
}

void filterLists(Node* firstListHead, Node* secondListHead, Node* &filteredListHead, Node* &filteredListTail)
{   
   while (firstListHead != NULL)
   {  
       int valueToAdd = firstListHead -> value;
       
       bool usedInSecondList = valueInList(secondListHead, valueToAdd);
       bool alreadyUsed = valueInList(filteredListHead, valueToAdd);;
        
       if (!alreadyUsed && !usedInSecondList)
           insertValue(filteredListHead, filteredListTail, valueToAdd);
       
       firstListHead = firstListHead -> next;
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
    
    Node* filteredListHead = NULL;
    Node* filteredListTail = NULL;
    
    int listLength = 5;
    int randomStart = 1;
    int randomEnd = 10;
    
    for (int i = 0; i < listLength; i++)
    {
        insertValue(firstListHead, firstListTail, rand() % randomEnd + randomStart);
        insertValue(secondListHead, secondListTail, rand() % randomEnd + randomStart);
    }
    
    cout << "First list: ";
    printList(firstListHead);
    cout << "\nSecond list: ";
    printList(secondListHead);
    
    filterLists(firstListHead, secondListHead, filteredListHead, filteredListTail);
    
    cout << "\n\nFiltered list: ";
    printList(filteredListHead);
}
