//
//  main.cpp
//  3.11 divide
//
//  Created by OrangeLife on 15/8/24.
//  Copyright (c) 2015年 Shenme Studio. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    
    using namespace std;
    
    cout.setf(ios_base::fixed, ios_base::floatfield);
    
    cout << "Integer division: 9/5 = " << 9/5 << endl;
    cout << "Floating-point division : 9.0/5.0 = " << 9.0/5.0 << endl;
    cout << "Mixed division: 9.0 /5 = " << 9.0/5 << endl;
    cout << "double constants: 1e7/9.0 = " << 1e7/9.0 << endl;
    cout << "float constants: 1e7f/9.0f = " << 1e7f / 9.0f << endl;
    
    return 0;
}
