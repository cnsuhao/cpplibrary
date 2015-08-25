//
//  main.cpp
//  4.10 strtype4
//
//  Created by Vaith on 15/8/24.
//  Copyright (c) 2015年 Shenme Studios. All rights reserved.
//

#include <iostream>
#include <cstring>

int main(int argc, const char * argv[]) {
    
    using namespace std;
    
    char charr[20];
    string str;
    
    cout << "Length of string in charr before input: " << strlen(charr) << endl;
    cout << "Length of string in str before input: " << str.size() << endl;
    
    cout << "Enter a line of text:\n";
    cin.getline(charr, 20);
    cout << "You entered: " << charr << endl;
    cout << "Enter another line of text:\n";
    getline(cin, str);
    cout << "You enterd: " << str << endl;
    cout << "Length of string in charr after input:" << strlen(charr) << endl;
    cout << "Length of string in str after input:" << str.size() << endl;
    
    return 0;
}
