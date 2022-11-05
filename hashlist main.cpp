//
//  main.cpp
//  ass4
//
//  Created by Amal Fouda on 29/10/2022.
//
#include "hashdynamic_h.h"
#include "hashlist_h.h"


int main() {
    
    hashlist h1;
    
    h1.insert("Mina", 30, 10000, 4);
    h1.insert("Fawzy", 45, 10000, 4);
    h1.insert("Yara", 19, 10000, 4);
    h1.insert("Mariam", 32, 10000, 4);
    h1.insert("Ali", 30, 10000, 4);
    h1.insert("Roshdy", 28, 10000, 4);
    h1.insert("Aya", 26, 10000, 4);
    h1.insert("Abdallah", 29, 10000, 4);
    h1.insert("Fatma", 21, 10000, 4);
    cout << "Chaining :" << endl;
    h1.display();
    
    HashArray h2(20);
    
    h2.insert("Mina", 30, 10000, 4);
    h2.insert("Fawzy", 45, 10000, 4);
    h2.insert("Yara", 19, 10000, 4);
    h2.insert("Mariam", 32, 10000, 4);
    h2.insert("Ayman", 33, 10000, 4);
    h2.insert("Roshdy", 28, 10000, 4);
    h2.insert("Aya", 26, 10000, 4);
    h2.insert("Abdallah", 29, 10000, 4);
    h2.insert("Fatma", 21, 10000, 4);
    cout << "Linear :" << endl;
    h2.display();
    
    cout << "Rate Of Collision (Chaining) : " << h1.collisionRate() << endl;
    cout << "Rate Of Collision (Linear)   : " << h2.collisionRate() << endl;
    
    return 0;
}
