//
//  main.cpp
//  3.10 arith
//
//  Created by OrangeLife on 15/8/24.
//  Copyright (c) 2015年 Shenme Studio. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    using namespace std;
    
    float hats, heads;
    
    cout.setf(ios_base::fixed, ios_base::floatfield);
    
    cout << "Enter a number:";
    cin >> hats;
    cout << "Enter another number:";
    cin >> heads;
    
    cout << "hats = " << hats << "; heads = " << heads << endl;
    cout << "hats + heads = " << heads + hats << endl;
    cout << "hats - heads = " << hats - heads << endl;
    cout << "hats * heads = " << hats * heads << endl;
    cout << "hats / heads = " << hats / heads << endl;
    
    return 0;
}
