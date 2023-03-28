#include<iostream>
using namespace std;
struct node{
    int data;
    node* next;
};
node* head;
void insert(int x,node* head)
{
    node *temp=new node;
    (*temp).data=x;
    (*temp).next=head;
    head=temp;
}
void print()
{
    node *temp=head;
    while(temp!=NULL)
    {
        cout<<(*temp).data;
        temp=(*temp).next;

    }
    cout<<endl;
}
int main()
{
    int n,x;
    head=NULL;
    cout<<"how many number?"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cout<<"enter the number"<<endl;
        cin>>x;
        insert(x,head);
        print();
    }
    return 0;
}