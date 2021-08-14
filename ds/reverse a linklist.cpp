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
node* reverse(node* &head){
    node* previous = NULL;
    node* current = head;
    node* nextptr;
    while(current!=NULL){
        nextptr = current->next;
        current->next = previous;

        previous = current;
        current = nextptr;
    }
    return previous;
}
node* reverserecursive(node* &head){
    if(head==NULL || head->next==NULL){
        return head;
    }

    node* newhead = reverserecursive(head->next);
    head->next->next = head;
    head->next = NULL;
    return newhead;
}
int main(){
    node* head = NULL;
    insertatend(head,1);
    insertatend(head,2);
    insertatend(head,3);
    insertatend(head,4);
    insertatend(head,5);
	printlist(head);
	node* newhead = reverserecursive(head);
	printlist(newhead);
    
    return 0;
}