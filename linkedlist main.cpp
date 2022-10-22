//
//  main.cpp
//  linked list
//
//  Created by Amal Fouda on 15/10/2022.
//

#include <iostream>
#include <vector>
#include "linkedlist.h"

using namespace std;

vector<int>v1;

void setvector(int n)
{
    v1.push_back(n);
}
void insertAfter(int first, int second)
{
    for (int i=0;i<v1.size();i++)
    {
        if(v1[i]==first)
        {

            v1.insert(begin(v1)+i+1, second);
            
        }
    }
   
}
void display()
{
    for(int i=0;i<v1.size();i++)
        cout<<v1[i]<<endl;
}

    list creatlist(vector<int>v2)
    {
       
        list l1;
        l1.insertfirst(v2[0]);
        for(int i=1;i<v2.size();i++)
        {
            if(l1.increaseocc(v2[i])==false)
                l1.insertend(v2[i]);
        }
      
        return l1;

    }
int main() {
    list l2;
    setvector(1);
    setvector(2);
    setvector(3);
    setvector(2);
    setvector(4);
    setvector(5);
    setvector(2);
    setvector(1);
    setvector(2);
    insertAfter(2, 9);
    
    l2=creatlist(v1);
    l2.displaylist();
    cout<<"----------------"<<endl;
    l2.sum();
    return 0;
}
