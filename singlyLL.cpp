#include<bits/stdc++.h>
using namespace std;

class Node{

public:
	int data;
	Node* next;
	Node(int data){
	this->data = data;
	this->next = NULL;

}
};
void printLinkedList(Node* head){
  if(head==NULL ) return;
	Node* temp = head;
	while(temp!=NULL){
	cout<<temp->data<<"-> ";
	temp = temp->next;	

	}

}
void insertAtHead(int data,Node* &head){
	Node* newNode  = new Node(data);
	newNode->next = head;
	head  = newNode;	

}
void insertAtEnd(int data,Node* & head){
      Node* newNode  = new Node(data);
      Node* temp = head;
      while(temp->next!=NULL){
        temp = temp->next;
      }
      temp->next = newNode;
}
void insertAnyWhere(int data, Node* &head,int pos){
  Node * temp = head;
  int count = 1;
  while(count!=pos-1){
    temp = temp->next;
    count++;
  }
  Node* newNode = new Node( data);
  newNode->next = temp->next;
  temp->next = newNode;
}
void deleteAtHead(Node* &head){
  if(head->next==NULL) head = NULL;
  Node* temp = head->next;
  head->next = NULL;
  head = temp;

}
void deleteAtTail(Node* &head){
  Node* temp = head;
  Node* prev = NULL;
  while(temp->next!=NULL){
    prev  =temp;
    temp = temp->next;
  }
  prev->next = NULL;
}
void deleteAnyWhere(Node* &head, int pos){
int count = 1;
if(count==pos) {
head = NULL;
return;
}
Node* curr = head;
Node* prev = NULL;
while(count!=pos){
  prev = curr;
  curr=curr->next;
  count++;
}  
prev->next = curr->next;


  
}


int main(){
Node* myNode = new Node(100);

Node* head = myNode;

// printLinkedList(head);
insertAtHead(500,head);
insertAtEnd(500,head);
insertAnyWhere(1500,head,2);


printLinkedList(head);
cout<<endl;

// deleteAtHead(head);
// deleteAtTail(head);
deleteAnyWhere(head,2);
printLinkedList(head);
return 0;
}