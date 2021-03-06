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
bool detectcycle(node* &head){
    node* slow = head;
    node* fast = head;
    while(fast!=NULL && fast->next!=NULL){
        slow = slow->next;
        fast = fast->next->next;
        if(fast==slow){
            return true;
        }
    }
    return false;
}
void makecycle(node* &head, int pos){
    node* temp = head;
    node* startnode;
    int count = 1;
    while(temp->next!=NULL){
        if(count==pos){
            startnode = temp;
        }
        temp = temp->next;
        count++;
    }
    temp->next = startnode;
}
void printlist(node* head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
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
    return 0;
}