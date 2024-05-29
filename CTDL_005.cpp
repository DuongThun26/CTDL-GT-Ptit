#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node *next;
    struct node *prev;
};
node *makeNode(int x){
    node *newNode = (node*)malloc(sizeof(node));
    newNode->data = x;
    newNode->next = NULL;
    newNote->prev = NULL;
    return newNode;
}
void PushBack(node **head, int x){
    node *newNode = makeNode(x);
    if(*head == NULL){
        *head = newNode;
        return;
    }
    
}
int main(){
    int n;
    cin >> n;
    
    return 0;
}