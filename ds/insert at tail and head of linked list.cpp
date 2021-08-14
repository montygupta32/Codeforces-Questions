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
void insertathead(node* &head, int value){
    node* n = new node(value);
    n->next = head;
    head = n;
}
void printlist(node*head){
    node*temp = head;
    while(temp->next!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    } 
    cout<<endl;
}
bool search(node* head, int key){
    node* temp = head;
    while(temp->next!=NULL){
        if(temp->data==key){
            return true;
        }
        temp = temp->next;
    }
    return false;
}
void deletion(node* &head, int value){
    if(head==NULL){
        return;
    }
    if(head->next==NULL){
        deleteathead(head);
        return;
    }
    node* temp = head;
    while(temp->next->data!=value){
        temp = temp->next;
    }
    node* todelete = temp->next;
    temp->next = temp->next->next;
    delete todelete;
}
void deleteathead(node* &head){
    node* todelete = head;
    head = head->next;
    delete todelete;
}
int main(){
    node* head = NULL;
    insertatend(head,1);
    insertatend(head,2);
    insertatend(head,3);
    insertatend(head,4);
    printlist(head);
    insertathead(head,5);
    printlist(head);
    cout<<search(head,3)<<endl;
    deletion(head,2);
    printlist(head);
    deleteathead(head);
    printlist(head);

    return 0;
}