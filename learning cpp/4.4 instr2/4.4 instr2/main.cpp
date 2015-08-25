//
//  main.cpp
//  4.4 instr2
//
//  Created by OrangeLife on 15/8/24.
//  Copyright (c) 2015年 Shenme Studio. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    
    using namespace std;
    
    const int ArSize = 20;
    char name[ArSize];
    char dessert[ArSize];
    
    cout << "Enter your name: " << endl;
    cin.getline(name, ArSize);
    cout << "Enter your favorite dessert:" << endl;
    cin.getline(dessert, ArSize);
    cout << "I have some delicious " << dessert << " for you, " <<  name << endl;
    
    return 0;
}
