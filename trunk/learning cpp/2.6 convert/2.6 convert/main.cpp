//
//  main.cpp
//  2.6 convert
//
//  Created by OrangeLife on 15/8/19.
//  Copyright (c) 2015年 Shenme Studio. All rights reserved.
//

#include <iostream>

int stoneToLb(int);

int main(int argc, const char * argv[]) {
    
    using namespace std;
    
    int stone;
    cout << "Enter the weight in stone：";
    cin >> stone;
    int pounds = stoneToLb(stone);
    cout << stone << " stones = " << pounds << " pounds." << endl;
    
    return 0;
}

int stoneToLb(int stone)
{
    return 14*stone;
}