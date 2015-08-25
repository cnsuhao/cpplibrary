//
//  main.cpp
//  3.4 hexoct2
//
//  Created by OrangeLife on 15/8/24.
//  Copyright (c) 2015年 Shenme Studio. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    
    using namespace std;
    
    int chest = 42;
    int waist = 42;
    int inseam = 42;
    
    cout << "Monsieur cuts a striking figure!" << endl;
    cout << "chest = " << chest << "(decimal for 42)" << endl;
    cout << hex;
    cout << "waist = " << waist << "(hexadecimal for 42)" << endl;
    cout << oct;
    cout << "inseam = " << inseam << "(octal for 42)" << endl;;
    
    return 0;
}
