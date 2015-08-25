//
//  main.cpp
//  3.14 typecast
//
//  Created by OrangeLife on 15/8/24.
//  Copyright (c) 2015年 Shenme Studio. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    
    using namespace std;
    
    int auks, bats, coots;
    auks = 19.99 + 11.99;
    
    bats = int(19.99) + int(11.99);
    coots = (int)19.99 + (int)11.99;
    
    cout << "auks = " << auks << ", bats = " << bats << ", coots = " << coots << endl;
    char ch = 'Z';
    cout << "The code for " << ch << " is " << int(ch) << endl;
    cout << "Yes, the code is " << static_cast<int>(ch) << endl;
    
    return 0;
}
