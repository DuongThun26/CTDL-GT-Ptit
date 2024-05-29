#include<bits/stdc++.h>
using namespace std;

struct node{
	int data;
	struct node *next;
	struct node *prev;
};

node *makeNode(int x){
	node *newNode = (node*) malloc (sizeof(node));
	newNode->data = x;
	newNode->next = NULL;
	newNode->prev = NULL;
	return newNode;
}

void pushback(node **head, int x){
	node *newNode = makeNode(x);
	if(*head == NULL){
		*head = newNode;
		return;
	}
	node *tmp = *head;
	while(tmp->next != NULL){
		tmp = tmp->next;
	} 
	tmp->next = newNode;
	newNode->prev = tmp;
}

void duyet(node *head){
	while(head != NULL){
		cout << head->data << " ";
		head = head->next;
	}
}
int main(){
	struct node *First = NULL;
	int n;
	cin >> n;
	for(int i = 0; i < n; i++){
		int x;
		cin >> x;
		pushback(&First, x);
	}
	node *tmp = First;
	while(tmp != NULL){
		int check = 1;
		node *p = tmp->prev;
		while(p != NULL){
			if(p->data == tmp->data){
				check = 0;
				break;
			}
			p = p->prev;
		}
		if(check) cout << tmp->data << " ";
		tmp = tmp->next;
	}
	return 0;
}
