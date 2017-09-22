#include<iostream>
using namespace std;
struct Node
{
    int no;
    Node *next;
};
int main()
{
    int m,n,s,remainder;
    cout<<"Input m,n,s: ";
    cin>>m>>n>>s;
    Node *first,*last;
    first=last=new Node;
    first->no=1;
    for(int i=1;i<n;i++)
    {
        Node *p=new Node;
        p->no=i+1;
        last->next=p;
        last=p;
    }
    last->next=first;
    for(int i=1;i<s;i++)
    {
        first=first->next;
        last=last->next;
    }
    remainder=n;
    while(remainder>1)
    {
        for(int count=1;count<m;count++)
        {
            first=first->next;
            last=last->next;
        }
        last->next=first->next;
        cout<<first->no<<"\t";
        delete first;
        first =last->next;
        remainder--;
    }
    cout<<endl<<"The winner is No."<<first->no;
    delete first;
    return 0;
}
