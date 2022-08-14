#include <stdio.h>
#include <stdlib.h>
struct Node {
int data;
struct Node* next;
};
void deleteNodeWithoutHead(struct Node* pos)
{
if (pos == NULL)
return;
else {
if (pos->next == NULL) {
printf("This is last node, require head, can't\n");
return;
}
struct Node* temp = pos->next;
pos->data = pos->next->data;
pos->next = pos->next->next;
free(temp);
}
}
void print(struct Node* head)
{
struct Node* temp = head;
while (temp) {
printf(" %d\t\n", temp->data);
temp = temp->next;
}
printf("NULL");
}
void push(struct Node** head_ref, int new_data)
{
struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
new_node->data = new_data;
new_node->next = (*head_ref);
(*head_ref) = new_node;
}
int main()
{
printf("Shubham Srivastava 200905152\n");
struct Node* head = NULL;
push(&head, 10);
push(&head, 3);
push(&head, 5);
push(&head, 39);
printf("Linked List Before Deletiom: \n");
print(head);
printf("\n");
struct Node* del = head->next;
deleteNodeWithoutHead(del);
printf("\nLinked List after deletion of 15:\n");
print(head);
return 0;
}