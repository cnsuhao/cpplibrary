//
//  main.cpp
//  3.1 limits
//
//  Created by OrangeLife on 15/8/19.
//  Copyright (c) 2015年 Shenme Studio. All rights reserved.
//

#include <iostream>
#include <climits>

int main(int argc, const char * argv[]) {
    
    using namespace std;
    
    int n_int = INT_MAX;
    short n_short = SHRT_MAX;
    long n_long = LONG_MAX;
    long long n_llong = LLONG_MAX;
    
    cout << "int is " << sizeof(n_int) << endl;
    cout << "short is " << sizeof(n_short) << endl;
    cout << "long is " << sizeof(n_long) << endl;
    cout << "long long is " << sizeof(n_llong) << endl;
    cout << endl;
    
    cout << "Maximum values:" << endl;
    cout << "int: " << n_int << endl;
    cout << "short: " << n_short << endl;
    cout << "long is " << n_long << endl;
    cout << "long long is " << n_llong << endl;
    
    
    cout << "Miniumu int value = " << INT_MIN << endl;
    cout << "Bits per byte = " << CHAR_BIT << endl;
    
    return 0;
}
