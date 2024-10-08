#include<iostream>
#include<stdlib.h>
using namespace std;

//* Node 
struct node{
    int value;
    node *next;
};

typedef struct node Node;

//* Create a node
Node *createNode(int val){
    Node *newNode = (Node*)malloc(sizeof(Node));
    newNode->value = val;
    newNode->next = nullptr;
    return newNode;
}

//* create a LL from Array */
Node *createLLfromArray(int arr[], int arrSize){
    Node *rootNodePtr = createNode(arr[0]);
    Node *lastNodePtr = rootNodePtr;
    for(int i=1; i<arrSize; i++){
        Node *nodePtr = createNode(arr[i]);
        lastNodePtr->next = nodePtr;
        lastNodePtr = lastNodePtr->next;
    }
    return rootNodePtr;
}

void printLL(Node *head){
    while(head != nullptr){
        cout<<head->value<<" ";
        head = head->next;
    }
    cout<<endl;
}

Node *reverseLinkedList(Node *head){
    Node *prevPtr = nullptr;
    Node *currPtr = head;
    Node *nextPtr ;

    while (currPtr != nullptr)
    {
        //* store next pointer
        nextPtr = currPtr->next;
        currPtr->next = prevPtr;

        prevPtr = currPtr;
        currPtr = nextPtr;
    }

    return prevPtr;
    
}


int main(){
    int arr[] = {4,5,8,7,3};
    int arrSize = sizeof(arr)/sizeof(arr[0]);

    Node *head = createLLfromArray(arr,arrSize);
    printLL(head);

    cout<<"Reverse Linked List"<<endl;
    head = reverseLinkedList(head);
    printLL(head);
    return 0;
}