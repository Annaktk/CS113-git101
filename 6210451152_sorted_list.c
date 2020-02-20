//6210451152 Nattatidra Wongchan
#include<stdio.h>
#include<stdlib.h>
struct node
{
  int data;
  struct node *past,*con;
};
int main()
{
  struct node *block ,*n,*ka,*head;
  int a,b,input,i=1,start,kep;
  while(scanf("%d",&input)==1)
  {
    if (input==-1)
    {
      start=input;
      break;
    }
    start=input;
    block=(struct node*)malloc(sizeof(struct node));
     if (i==1)
    {
      block->data=input;
      head =block;
      n=head;
    }
    else 
    {
      block->data=input;
      block->past=n;
      n->con=block;
      n=n->con;
      ka=block;
      while(ka->past!=NULL)
      {
        if(ka->data < (ka->past)->data)
        {
          kep=(ka->data);
          ka->data=(ka->past)->data;
          (ka->past)->data=kep;
        }
        ka=ka->past;
      }
   }
   i++;
  }
  if (i==1&&start==-1)
  {
  }
  else{
    while(head!=NULL)
    {
     printf("%d",head->data);
     head=head->con;
     printf("\n");
    }
  }
}