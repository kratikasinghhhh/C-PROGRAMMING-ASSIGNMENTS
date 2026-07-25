#include <stdio.h>

//define  the structure of a node
struct node{
    int data;
    struct node *next;
};

//function to create a new node
void insertatbeginning(struct node** head_ref , int new_data){

//1.allocate memory for new node dynamically
struct node* new_node = (struct node*)malloc(sizeof(struct node));

//check if memory allocation was successful
if(new_node==NULL){
    printf("memory alloation failed\n");
    return;
}

//2.assign the target data to new node 
new_node->data = new_data;

//3. link te new node's next to current head
new_node->next = *head_ref;

//4. move the head pointer so it points to the new node
*head_ref = new_node;

}

// helper function to print the linked list
void printlist(struct node* node){
    
    while(node!= NULL){
        printf("%d -> ", node->data);
        node = node->next;
    }

    printf("NULL\n");

}

int main(){

    struct node* head = NULL;

    insertatbeginning(&head, 10);
    insertatbeginning(&head, 20);
    insertatbeginning(&head, 30);

    printlist(head);

    return 0;

 //display the linked list after inserting nodes at the beginning
 printlist(head);

    return 0;

}