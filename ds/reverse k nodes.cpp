#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node(int value){
        data = value;
        next = NULL;
    }
};
void insertatend(node* &head, int value){
    node* n = new node(value);
    if(head==NULL){
        head = n;
        return;
    }
    node* temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next=n;
}
void printlist(node* head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
node* reverseknodes(node*head, int k){
    node* previous = NULL;
    node* current = head;
    node* nextptr;
    int count = 0;
    while(current!=NULL && count<k){
        nextptr = current->next;
        current->next = previous;
        previous = current;
        current = nextptr;
        count++;
    }
    if(nextptr!=NULL){
    head->next = reverseknodes(nextptr,k);
    }
    return previous;
}
int main(){
    node* head = NULL;
    insertatend(head,1);
    insertatend(head,2);
    insertatend(head,3);
    insertatend(head,4);
    insertatend(head,5);    
    insertatend(head,6);    

	printlist(head);
    int k=3;
    node* newhead = reverseknodes(head,k);
    printlist(newhead);
    return 0;
}