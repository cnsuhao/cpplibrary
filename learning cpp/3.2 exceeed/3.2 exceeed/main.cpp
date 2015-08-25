//
//  main.cpp
//  3.2 exceeed
//
//  Created by OrangeLife on 15/8/19.
//  Copyright (c) 2015年 Shenme Studio. All rights reserved.
//

#include <iostream>
#include <climits>

#define ZERO 0

int main(int argc, const char * argv[]) {
    
    using namespace std;
    short sam = SHRT_MAX;
    unsigned short sue = sam;
    
    cout << "Sam has " << sam << " dollars and Sue has " << sue << "dollars deposited." << endl;
    cout << "Add $1 to each account ." << endl;
    cout << "Now ";
    sam = sam + 1;
    sue = sue + 1;
    cout << "Sam has " << sam << " dollars and Sue has " << sue << " dollars desposited. \n Poor Sam!" << endl;
    
    sam = ZERO;
    sue = ZERO;
    cout << "Sam has " << sam << " dollars and Sue has " << sue << "dollars deposited." << endl;
    cout << "Take $1 from each account ." << endl;
    cout << "Now ";
    sam = sam - 1;
    sue = sue - 1;
    cout << "Sam has " << sam << " dollars and Sue has " << sue << " dollars desposited. Lucky Sue!"<< endl;

    
    return 0;
}
