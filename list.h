//
//  list.h
//  exam
//
//  Created by Amal Fouda on 23/10/2022.
//

#ifndef list_h
#define list_h
#include <iostream>
using namespace std;
struct Node{
    int data;
    int  occurance=0;
    Node *next;
};
class list
{
    Node *head;
public:
    list()
    {
        head=NULL;
    }
    bool isempty()
    {
        return (head==NULL);
    }
    bool isfound(int n)
    {
        Node *temp=head;
        while(temp!=NULL)
        {
            if(temp->data==n)
                return true;
            else
                temp=temp->next;
        }
        return false;
    }
    bool increaseocc(int n)
    {
        Node *temp=head;
        while(temp!=NULL)
        {
            if(temp->data==n)
            {  temp->occurance++;
                return true;}
            else
                temp=temp->next;
        }
        return false;
    }
    void insertfirst(int n)//if i have elements in the list and i want to insert element in the begging
    {
       
            Node *newnode=new Node;
            newnode->data=n;
            newnode->next=head;
            head=newnode;
        
       
    }
    void insertend(int n)
    { if(isempty())
    {
        cout<<"empty list";
    }
    else
    {
        Node *newnode=new Node;
        newnode->data=n;
        Node *temp=head;
        while (temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=newnode;
        newnode->next=NULL;
            
    }
    }
    void insertmiddle(int item,int n)
        {
        Node *newnode=new Node;
        newnode->data=n;
        Node *temp=head;
        if(isfound(item))
        {
            while(temp->next->data!=item &&temp->next!=NULL)
            {
                temp=temp->next;
            }
            newnode->next=temp->next;
            temp->next=newnode;
        }
        else
            cout<<"item is not found";
        }

    void displaylist()
    {
        Node *temp=head;
        while(temp!=NULL)
        {
            cout<<temp->data<<endl;
            temp=temp->next;
        }
    }
   void deletefirst()
    {
       if(isempty())
           cout<<"empty";
       else{
       Node *delptr=head;
       head=head->next;
           delete delptr;
       }
       
    }
    void deleteitem(int item)
    {
        if(isempty())
            cout<<"empty";
        else
        {
            if(isfound(item))
            {
                Node *delptr=head;
                Node * prev=NULL;
                while(delptr->next->data!=item)
                {
                    delptr=delptr->next;
                    prev=delptr;
                }
                prev->next=delptr->next;
                delete delptr;
            }
            else
                cout<<"not found";
        }
    }
    void deleteend()
    {
        if (isempty())
            cout<<"empty list";
        else
        {
            Node *deltptr=head;
            Node *temp=NULL;
            while(deltptr->next!=NULL)
            {
                deltptr=deltptr->next;
                temp=deltptr;
            }
            temp->next=NULL;
            delete deltptr;
        }
    }
 void sum()
    {
      int s1=0;
      Node *temp=head;
      while(temp!=NULL)
      {
          s1+=temp->data;
          temp=temp->next;
      }
     
     
     cout<<"sum of list:"<<s1<<endl;
  }
};



#endif /* list_h */
