#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAX 20
struct node {
	char* data;
	struct node* next;
} ;
void display(struct node *p);
void insert_tail(struct node** p,char* x);
void main()
{
	struct node* head=NULL;
	int c,count=0,cn=1;
	char s[MAX][MAX];
	for(int i=0;i<MAX;i++)
	{
		for(int j=0;j<MAX;j++)
		{
		 c=(rand() % (26))+65;
		 s[j][i]=(char)c;
	    }
    }
	for(int i=0;i<MAX;i++)
	{
		for(int j=0;j<MAX;j++)
		{
			printf("%c | ",s[i][j]);
		}
		printf("\n");
	}
while(cn){
	char str[100];
	printf("Enter the string you want to enter\n");
	scanf("%s",str);
	int l=strlen(str);
	printf("%c ",s[1][20]);
	for(int j=0;j<MAX;j++){
		for(int i=0;i<MAX;i++){
			if(s[j][i]==str[0]){
				int k=0;int h=0;
				while(k<l){
					if(((i%20)==i || i%20==19)&& ((i+1)%20 == 0) && (h!=l))
					  break;
					if(s[j][i]==str[k]){
					  i++;
					  h++;
				}
					if(h==l){
						printf("Word is present");
						count=1;
						insert_tail(&head,str);
						break;
					}
					k++;
				}
			}
		}
	}

for(int j=0;j<MAX;j++){
		for(int i=0;i<MAX;i++){
			if(s[i][j]==str[0]){
				int k=0;int h=0;
				while(k<l){
					if(((j%20)==j || j%20==19)&& ((j+1)%20 == 0) && (h!=l))
					  break;
					if(s[i][j]==str[k]){
					  i++;
					  h++;
				}
					if(h==l){
						printf("Word is present");
						count=1;
						insert_tail(&head,str);
						break;
					}
					k++;
				}
			}
		}
	}
//printf("%d",h);
if(count!=1)
 printf("Word is not present");

printf("Enter Zero to exit: ");
scanf("%d",&cn);
}
printf("The words you found out are:");
display(head);
}

void insert_tail(struct node** p,char* x)
    {
      struct node* temp;
      struct node* q;
      temp=(struct node*)malloc(sizeof(struct node));
      temp->data=x;
      temp->next=NULL;

      //empty list, first node being inserted
      if(*p==NULL)
         *p=temp;//copy the address of the first node into first
      else
      {
        //list present, go to the end of the list
       q=*p;//copy address of first node into q;
       while(q->next!=NULL)
         q=q->next;
       q->next=temp;
    }
}
	
void display(struct node *p)
   {
     if(p==NULL)
      printf("Empty List\n");
    else
    { 
        while(p!=NULL)
     {
        printf("%s->",p->data);
        p=p->next;
     }
   }
  }



