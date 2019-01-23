//this program append a node to the end of a linked list 


#include<stdio.h>
#include<stdlib.h>

//trying to build a program that will add node in the last position

struct Node {
int data;
struct Node* next;
};

void insert(int x);
void printList();
// define the head of all node
struct Node* head;

int main(void)
{
    head=NULL; //

    unsigned int n,i;
    int x;
    puts("---This program append item at the end of linked list---");
    puts("enter how many member you want your list be consists of ?");
    scanf("%u",&n);

    for (i=0;i<n;++i)
    {
        printf("%s","enter an integer:\n");
        scanf("%d",&x);
        insert(x);
        printList();
    }

}


void insert(int x)//must need two variables
    {
        Node* temp1=new Node();
        temp1->data=x;
        temp1->next=NULL;

        if (head==NULL)
        {
            head=temp1;
        }

        else
        {
          Node* temp2=head;

          while(temp2->next !=NULL)
          {
              temp2=temp2->next;
          }

          temp2->next=temp1;
        }

    }



void printList()
{
    Node* temp=head;
    printf("List is: ");
    while(temp!=NULL)
    {
        printf("%  d",temp->data);
        temp=temp->next;
    }
    printf("\n");
}
