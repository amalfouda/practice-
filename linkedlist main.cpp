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

void setvector(vector<int>&v1,int n)
{
    v1.push_back(n);
}
void insertAfter(vector<int>&v1,int first, int second)
{
    for (int i=0;i<v1.size();i++)
    {
        if(v1[i]==first)
        {

            v1.insert(begin(v1)+i+1, second);
            
        }
    }
   
}
void display(vector<int>v1)
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
    vector<int>v;
    setvector(v,1);
    setvector(v,2);
    setvector(v,3);
    setvector(v,2);
    setvector(v,4);
    setvector(v,5);
    setvector(v,2);
    setvector(v,1);
    setvector(v,2);
    insertAfter(v,2, 9);
    //display(v);
    l2=creatlist(v);
    l2.displaylist();
    cout<<"----------------"<<endl;
    l2.sum();
    return 0;
}
