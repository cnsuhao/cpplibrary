//
//  main.cpp
//  2.4 sqrt
//
//  Created by OrangeLife on 15/8/19.
//  Copyright (c) 2015年 Shenme Studio. All rights reserved.
//

#include <iostream>
#include <cmath>

int main(int argc, const char * argv[]) {
    using namespace std;
    
    double area;
    cout << "Enter the floor area, in square feet, of you home:";
    cin >> area;
    double side;
    side = sqrt(area);
    cout << "That's the equivalent of a square " << side
    << " feet to side" << endl;
    cout << "How fascinating ! " << endl;
    
    return 0;
}
