#include<iostream>
#include<malloc.h>
using namespace std;
struct data
{
	int a;
	int b;
	struct data *next;
};
struct data * creat()
{
	struct data *head,*p1,*p2;
	head=NULL;
	p1=p2=(struct data * )malloc(sizeof(struct data));
	p1->next=NULL;
	p2->next=NULL;
	int A,B;
	while(cin>>A>>B){
		p1->a=A;
		p1->b=B;
		if(head==NULL) head=p1;
		else p2->next=p1;
		p2=p1;
		p1=(struct data * )malloc(sizeof(struct data));
		p1->next=NULL;
	}
	return head;
}
void print(struct data *head)
{
	struct data *p;
	p=head;
	while(p->next!=NULL){
		if(p->b==0) cout<<"error"<<endl;
		else 
		cout<<(p->a)/(p->b)<<endl;
		p=p->next;
	}
}
int main()
{
	struct data *head;
	head=creat();
	print(head);
}
