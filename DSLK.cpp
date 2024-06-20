#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node *next;
};

void duyet(node *head){
    while(head != NULL){
        cout << head->data;
        head = head->next;
    }
}

int size(node *head){
    int cnt = 0;
    while(head != NULL){
        cnt++;
        head = head->next;
    }
    return cnt;
}

node* makeNode(int x){
    node* newNode = new node();
    newNode->data = x;
    newNode->next = NULL;
    return newNode;
}
void PushFront(node **head, int x){
    node* newNode = makeNode(x);
    newNode->next = *head;
    *head = newNode;
}
void PushBack(node **head, int x){
    node* newNode = makeNode(x);
    if(*head == NULL){
        *head = newNode;
        return;
    }
    node *tmp = *head;
    while(tmp->next != NULL){
        tmp = tmp->next;
    }
    tmp->next = newNode;
}
void Push(node **head, int k, int x){
    int n = size(*head);
    if(k == 1) PushFront(head, x);
    else if(k == n) PushBack(head, x); 
    else{
        node *tmp = *head;
        for(int i = 1; i < k - 1; i++){
            tmp = tmp->next;
        }
        node *newNode = makeNode(x);
        newNode->next = tmp->next;
        tmp->next = newNode;
    }
}
void popFront(node **head){
    if(*head == NULL) return;
    node *tmp = *head;
    *head = (*head)->next;
    free(tmp);
}
void popBack(node **head){
    if(*head == NULL){
        return;
    }
    node *tmp = *head;
    if(tmp->next == NULL){
        *head = NULL;
        free(tmp);
        return;
    }
    while(tmp->next->next != NULL){
        tmp = tmp->next;
    }
    node *last = tmp->next;
    tmp->next = NULL;
    free(last);
}
void pop(node **head, int k){
    if(k < 1 || k > size(*head)) return;
    if(k == 1){
        popFront(head);
    }
    else{
        node *tmp = *head;
        for(int i = 1; i < k - 1; i++){
            tmp = tmp->next;
        }
        node *last = tmp->next;
        tmp->next = last->next;
        free(last);
    }
}
void selectionSort(node **head){
    for(node *i = *head; i != NULL; i = i->next){
        node *min = i;
        for(node *j = i->next; j != NULL; j = j->next){
            if(j->data < min->data){
                min = j;
            }
        }
        int tmp = min->data;
        min->data = i->data;
        i->data = tmp;
    }
}
int main(){
    struct node *head = NULL;
    PushFront(&head, 1);
    PushFront(&head, 2);
    PushFront(&head, 3);
    PushFront(&head, 4);
    PushFront(&head, 5);
    duyet(head);
    cout << endl;
    pop(&head, 4);
    duyet(head);
    cout << endl;
    PushBack(&head, 6);
    duyet(head);
    cout << endl;
    Push(&head, 3, 7);
    duyet(head);
    cout << endl;
    selectionSort(&head);
    duyet(head);
    return 0;
}
