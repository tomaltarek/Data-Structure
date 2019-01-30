// this program build a binary tree and search that tree with efficiency


#include<stdio.h>
#include<stdlib.h>

// below is doubly linked list node
struct Node{
int data;
struct Node* left;
struct Node* right;
};
// to create the root node
struct Node* getNewNode(int data) ;
// inserting function
struct Node* Insert(struct Node* root, int data);
//searching function
bool Search(struct Node* root,int data);
// to show the entire list
void PrintList(struct Node* root);
struct Node* root=NULL; // root is same as head

int main(void)
{
  int n,l;
  puts("This program first builds a binary tree and therefore search on that tree with high efficiency");
  puts("Note: If a node is smaller than parent it will traverse left");
  printf("\n\n");
  puts("How many nodes you want your binary tree be made of?");
  scanf("%d",&n);

  for (int i=0;i<n;i++)
  {
      if (root==NULL) printf("give first node: \n");
      else printf("give next node: \n");
      scanf("%d",&l);
      root=Insert(root,l);
  }

  int number;

  puts("-----------------------");
  puts("Your binary tree is : ");
  PrintList(root);
  puts("-----------------------");

  puts("Search a number to see if it is on the binary tree :");
  scanf("%d",&number);

  if (Search(root,number)==true)
  {

     printf("Number found on the tree");
  }
  else printf("Sorry, No match found");
printf("\n\n");

}


struct Node* getNewNode(int data)
{
    Node* newNode=new Node();
    newNode->data=data;
    newNode->left=NULL;
    newNode->right=NULL;
    return newNode;
}

Node* Insert(Node* root,int data)
{
   if(root==NULL)
   {
     root=getNewNode(data);
   }
   else if (data<=root->data)
   {
       root->left=Insert(root->left,data); // recursive call
   }
   else
    {
       root->right=Insert(root->right,data); // recursive call
   }

   return root;

}

// search in the tree
bool Search(Node* root,int data)
{
    if (root==NULL)
    {
       return false;
    }
    else if (root->data==data)

    {
       return true;
    }

    else if ( data<=root->data)
    {
       return Search(root->left,data); // recursive call
    }
    else
    {
      return Search(root->right,data); // recursive call
    }
}

void PrintList(struct Node* root)
{
    if (root==NULL)
    {
        return;
    }
        printf("%  d",root->data);
        PrintList(root->left);
        PrintList(root->right);
        printf("\n");

}


