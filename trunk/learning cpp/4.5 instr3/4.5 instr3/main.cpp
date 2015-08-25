//
//  main.cpp
//  4.5 instr3
//
//  Created by Vaith on 15/8/24.
//  Copyright (c) 2015年 Shenme Studios. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {

    using namespace std;
    
    const int ArSize = 20;
    
    char name[ArSize];
    char dessert[ArSize];
    
    cout << "Enter your name:\n";
    cin.get(name, ArSize).get();
    cout << "Enter your favorite dessert:\n";
    cin.get(dessert, ArSize).get();
    cout << "I have some delicious " << dessert << " for you, " << name << ".\n";
    
    return 0;
}
