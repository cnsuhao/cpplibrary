//
//  main.cpp
//  4.12 assgn_st
//
//  Created by Vaith on 15/8/24.
//  Copyright (c) 2015年 Shenme Studios. All rights reserved.
//

#include <iostream>

struct inflatable
{
    char name[20];
    float volume;
    double price;
};

int main(int argc, const char * argv[]) {
    
    using namespace std;
    
    inflatable bouquet = {"sunflowers", 0.20, 12.49};
    inflatable choice;
    cout << "bouquest: " << bouquet.name << " for $" << bouquet.price << endl;
    
    choice = bouquet;
    cout << "choice: " <<choice.name << " for $" << choice.price << endl;
    return 0;
}
