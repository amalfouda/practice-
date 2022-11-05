//
//  hashlist_h.h
//  ass4
//
//  Created by Amal Fouda on 30/10/2022.
//

#ifndef hashlist_h_h
#define hashlist_h_h
#include <iostream>
#include "employee.h"
using namespace std;

#define N 10

class hashlist
{
    employee* e1[N];
    int numberofemployee;
    int collisionCount;
public:
    hashlist()
    {
        numberofemployee=0;
        collisionCount = 0;
        for(int i=0;i<N;i++)
        {
            e1[i]=NULL;
        }
    }
    int HF(string key)
    {
        int sum=0;
        for(int i=0;i<key.length();i++)
        {
            sum+=key[i];
        }
        return sum%N;
    }
    
    void insert(string employeename, int employeeage,int employeesalary,int employeeexp )
    {
        employee * newnode=new employee;
        newnode->name=employeename;
        newnode->age=employeeage;
        newnode->salary=employeesalary;
        newnode->experience=employeeexp;
        newnode->next=NULL;
        
        int index=HF(employeename);
        if(e1[index]==NULL)
        {
            e1[index]=newnode;
            numberofemployee++;
        }
        else//collision
        {
            employee * cur=e1[index];
            int count = 0;
            while(cur!=NULL)
            {
                if(cur->name == employeename) {
                    cout << "Employee already exist" << endl;
                    return;
                }
                cur = cur->next;
                count++;
                //cout<<"counter"<<count<<endl;
            }
            newnode->next = e1[index];
            e1[index] = newnode;
            numberofemployee++;
            
            collisionCount = collisionCount + count;
            //cout<<"collision"<<collisionCount<<endl;
        }
    }
    
    void display() {
        for (int i = 0; i < N; i++) {
            if(e1[i] != NULL)//
            {
                cout << "[" <<i << "] : "<< endl;
                employee * cur=e1[i];
                
                while(cur!=NULL)
                {
                    cur->displayEmployee();
                    cur = cur->next;
                }
            }
        }
    }
    
    void remove(string employeename) {
        int index=HF(employeename);
        //if i will check only first index in e1 i wll use e1 to traverse, but if i will check nodes in
        //each inse i will use curr to traverse so ,i linh between index and nodes
        if(e1[index] != NULL)//this will check first index only
        {
            if(e1[index]->name == employeename) {
                e1[index] = e1[index]->next;
                numberofemployee--;
            } else//this will traverse all over the nodes in index if exist
            {
                employee * cur = e1[index];
                while (cur->next != NULL) {
                    if(cur->next->name == employeename) {
                        cur->next = cur->next->next;
                        numberofemployee--;
                        return;
                    }
                    cur = cur->next;
                }
            }
        }
    }
    
    double collisionRate() {
        return (double)collisionCount / numberofemployee;
    }
    
};
#endif /* hashlist_h_h */
