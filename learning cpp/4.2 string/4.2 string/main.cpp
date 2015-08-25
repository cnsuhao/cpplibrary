//
//  main.cpp
//  4.2 string
//
//  Created by OrangeLife on 15/8/24.
//  Copyright (c) 2015年 Shenme Studio. All rights reserved.
//

#include <iostream>
#include <cstring>

int main(int argc, const char * argv[]) {
    
    using namespace std;
    const int Size = 15;
    char name1[Size];
    char name2[Size] = "C++owboy";
    
    cout << "Howdy! i'am " << name2 << "! What's your name?" << endl;
    cin >> name1;
    cout << "Well, " << name1 << ", your name has " << strlen(name1) << "letters and is stroed\n";
    cout << "in an array of " << sizeof(name1) << "bytes.\n";
    cout << "Your intial is " << name1[0] << ".\n";
    name2[3] = '\0';
    cout << "Here are the first 3 characters of my name:" << name2 << endl;
    
    
    return 0;
}
