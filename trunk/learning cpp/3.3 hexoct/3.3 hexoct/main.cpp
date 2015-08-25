//
//  main.cpp
//  3.3 hexoct
//
//  Created by OrangeLife on 15/8/24.
//  Copyright (c) 2015年 Shenme Studio. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    
    using namespace std;
    int chest = 42;
    int waist = 0x42;
    int inseam = 042;
    
    cout << "Monsieur cuts a striking figure!\n";
    cout << "chest = " << chest << "(42 in decimal)\n";
    cout << "waist = " << waist << "(0x42 in hex)\n";
    cout << "inseam = " << inseam << "(042 in octal)\n";
    
    return 0;
}
