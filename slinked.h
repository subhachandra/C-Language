typedef struct node
{
   int data;
   struct node* next;
}Node;

void insert(Node* head,int cnt);
void reverse(Node* head);
void display(Node* head);
