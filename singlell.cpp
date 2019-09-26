#include<bits/stdc++.h>
using namespace std;
class Node
{
    public: 
    int data ;
    Node *next;
};
class Linkedlist
{
    Node *head;
    public: 
        Linkedlist()
        {
            head = NULL;
        }
        void insertrear()
        {
            Node *nn = new Node;
            Node *t;
            cout<<"enter value";
            cin>>nn->data;
            nn->next = NULL;
           if(head==NULL)
           {
               head = nn;
               
           }
           else
           {
               t = head;
             while(t->next!=NULL)
             {
                 t=t->next;
             }
             t->next = nn;
           }
           
           
           return;
        }
        void display()
        {
           cout<<"\n";
            Node *h = head;
            if(h==NULL)
            {
            cout<<"empty list";
            return;
            }
           while(h!=NULL)
           {
               cout<<"->"<<h->data;
               h=h->next;
               
           }
            return;
        
        }
        void insertfront()
        {
            Node *nn = new Node;
             cout<<"enter value";
            cin>>nn->data;
            nn->next = NULL;
            Node *t;
            if(head==NULL)
            {
                head = nn;
            }
            else
            {
                t=head;
                head = nn;
                nn->next = t;
            }
            
        }
       void insertbefore(int value)
        {
            Node *nn = new Node;
             cout<<"enter value";
            cin>>nn->data;
            nn->next = NULL;
            Node *t,*p;
            if(head==NULL)
            {
                cout<<"inserted as the first element";
                head = nn;
            }
            else
            {
               t=head;
               p=head;
               while(t->data!=value)
               {
                   t=t->next;
               }
               while(p->next!=t)
               {
                   p=p->next;

               }
               p->next =nn;
               nn->next=t;
            }
            
        }
        void insertafter(int value)
        {
            Node *nn = new Node;
             cout<<"enter value";
            cin>>nn->data;
            nn->next = NULL;
            Node *t,*p;
            if(head==NULL)
            {
                cout<<"inserted as the first element";
                head = nn;
            }
             else
            {
               t=head;
               p=head;
               while(t->data!=value)
               {
                   t=t->next;
               }
               p=t->next;
               t->next =nn;
               nn->next=p;
            }

        }
        void delet(int value)
        {
            Node *t,*p;
            if(head==NULL)
            {
                cout<<"Nothing to delete";
                return;
            }
            t=head;
            while(t->data!=value)
            {
               t=t->next;
            }
            p=head;
            while(p->next!=t)
            {
                p=p->next;
            }
           p->next=t->next;
            delete t;
        }
        void deletealternate()
        {
            int count =0;
            Node *t,*p;
            if(head==NULL)
            {
                cout<<"nothing to delete";
            }
            else
            {
                t=head;
                while(t->next!=NULL)
                {
                    count++;
                    if(count%2==0)
                    {
                         p=head;
                         while(p->next!=t)
                        {
                           p=p->next;
                        }
                        p->next=t->next;
                        delete t;
                      
                    }
                    t=t->next;
                }
            }
            
        }
      

};
int main()
{
    Linkedlist ll;
    ll.insertrear();
    ll.insertrear();
    ll.insertrear();
    ll.insertafter(3);
    ll.insertrear();
    ll.display();
    ll.deletealternate();
    ll.display();
    return 0;
}
