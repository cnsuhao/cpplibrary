//
//  main.cpp
//  3.8 floatnum
//
//  Created by OrangeLife on 15/8/24.
//  Copyright (c) 2015年 Shenme Studio. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    
    using namespace std;
    
    cout.setf(ios_base::fixed, ios_base::floatfield);
    
    float tub = 10.0 / 3.0;
    double mint = 10.0/3.0;
    const float million = 1.0e6;
    
    cout << " tub = " << tub;
    cout  << ", a million tubs = " << million * tub << endl;
    cout << "and ten million tubs = " << 10 *million * tub << endl;
    
    cout << "mint = " << mint << " and a million mints = " << million * mint << endl;
    
    return 0;
}
