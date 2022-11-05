//
//  hashdynamic_h.h
//  ass4
//
//  Created by Amal Fouda on 30/10/2022.
//

#ifndef hashdynamic_h_h
#define hashdynamic_h_h
#include <iostream>
#include "employee.h"
using namespace std;

class HashArray
{
private:
    employee * e1;
    int size;
    int count;
    int collisionCount;
public:
    HashArray(int s)
    {
        count=0;
        collisionCount = 0;
        size=s;
        e1 = new employee [size];
        for(int i =0;i<size;i++)
            e1[i].name = "";
        
    }
    int HF(string key)
    {
        return key[0]-65;
    }
    
    void insert(string employeename, int employeeage,int employeesalary,int employeeexp)
    {
        if(count==size)
        {
            cout<<"hash is full\n";
            return;
        }
        
        int hashIndex=HF(employeename);
        bool f = false;
        while(f == false)
        {
            if(e1[hashIndex].name == "") {
                employee e(employeename,employeeage,employeesalary,employeeexp);//this will substiute //writing e1[index].name=sd.
                e1[hashIndex] = e;
                count++;
                f = true;
            } else
            //collision
            {
                hashIndex=(hashIndex+1)%size;
                collisionCount++;
            }
        }
        
    }
   
    void display()
    {
        for (int i = 0; i < size; i++) {
            if(e1[i].name != "") {
                cout << "[" <<i << "] : "<< endl;
                e1[i].displayEmployee();
            }
        }
    }
    
    void remove(string employeename) {
        int hashIndex=HF(employeename);
        int iterations = 0;
        
        
            bool f = false;
            while(f == false)
            {
                if(e1[hashIndex].name == employeename) {
                    
                    e1[hashIndex].clear();
                    count--;
                    f = true;
                } else {
                    hashIndex=(hashIndex+1)%size;
                    iterations++;
                    if(iterations == size)
                    {
                        f = true;
                    }
                }
            }
        
    }
    
    double collisionRate() {
        return (double)collisionCount / count;
    }
};

#endif /* hashdynamic_h_h */
