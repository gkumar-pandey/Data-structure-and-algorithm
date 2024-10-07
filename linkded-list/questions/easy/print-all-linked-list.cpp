#include<stdio.h>
#include<iostream>
#include<stdlib.h>

using namespace std;

struct node {
    int value;
    struct node *next;
};

typedef struct node Node;

//** Create a Node */
Node *createNode(int val){
    Node *newNode = (Node*)malloc(sizeof(Node));
    newNode->value = val;
    newNode->next = NULL;
    return newNode;
}

//** Create a List from Array */
Node *createListFromArray(int arr[],int arrSize){
    Node *rootNodePtr = createNode(arr[0]);
    Node *lastNodePtr = rootNodePtr;

    for(int i=1; i<arrSize; i++){
        Node *nodePtr = createNode(arr[i]);
        lastNodePtr->next = nodePtr;
        lastNodePtr = lastNodePtr->next;
    }
    return rootNodePtr;
}

//** Print Linked list */
void printLL(Node *head){
    cout<<"Linked List are"<<endl;
    while(head != NULL){
        cout<<head->value<<" ";
        head = head->next;
    }
}

//** Print Length of LL */
int getLenghtOfLL(Node *head){
    
    //* count the list
    int count = 0;
    while(head != NULL)
    {
        count++;
        head = head->next;
    }
    return count;
}

int getMiddleEleOfLL(Node *head){
    int lenghtOfLL = getLenghtOfLL(head);
    for(int i=1; i<=lenghtOfLL/2; i++){
        head = head->next;
    }
    return head->value;
}

int main(){
    int arr[] = {3,4,9,6,7};
    int arrSize = sizeof(arr)/sizeof(arr[0]);

    //* Head pointer for Linked list 
    Node *head = createListFromArray(arr,arrSize);

    //* Print all linked list
    printLL(head);

    int lenght = getLenghtOfLL(head);
    cout<<"Lenght of LL : "<<lenght<<endl;

    int middleEle = getMiddleEleOfLL(head);
    cout<<"Middle Element of LL : "<<middleEle<<endl;

    return 0;
}