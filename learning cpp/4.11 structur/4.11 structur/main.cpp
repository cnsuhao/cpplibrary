//
//  main.cpp
//  4.11 structur
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
    
    inflatable guest =
    {
        "Glorious Gloria",
        1.88,
        29.99
    };
    
    inflatable pal =
    {
      "Audacious Arthur",
        3.12,
        32.99
    };
    
    cout << "Expand your guest list with " << guest.name << " and " << pal.name << "!\n";
    cout << "You can have both for $" << guest.price + pal.price << endl;
    
    return 0;
}
