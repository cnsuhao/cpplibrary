//
//  main.cpp
//  4.8 strtype2
//
//  Created by Vaith on 15/8/24.
//  Copyright (c) 2015年 Shenme Studios. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    
    using namespace std;
    
    string s1 = "penguin";
    string s2, s3;
    
    cout << "You can assign one string object to anther s2 =s1.\n";
    s2 = s1;
    cout << "s1: " << s1 << ", s2: " << s2 << endl;
    cout << "Your can assign a C-style string to a string ojectc.\n";
    cout << "s2 = \"buzzard\"";
    s2 = "buzzard";
    cout << "s2: " << s2 << endl;
    cout << "You can concaternate strings: s3 = s1 + s2\n";
    s3 = s2 + s1;
    cout << "s3: " << s3 << endl;
    cout << "You can append string.\n";
    s1+=s2;
    cout << "s1 += s2 yields s1 = " << s1 << endl;
    s2 += "for a day";
    cout << "s2 += \"for a day\" yields s2 = " << s2 << endl;
    
    return 0;
}
