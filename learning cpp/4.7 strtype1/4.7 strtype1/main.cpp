//
//  main.cpp
//  4.7 strtype1
//
//  Created by Vaith on 15/8/24.
//  Copyright (c) 2015年 Shenme Studios. All rights reserved.
//

#include <iostream>
#include <string>

int main(int argc, const char * argv[]) {
    
    using namespace std;
    
    char charr1[20];
    char charr2[20] = "jaguar";
    
    string str1;
    string str2 = "panther";
    
    cout << "Enter a kind of feline: ";
    cin >> charr1;
    cout << "Enter another kind of feline: ";
    cin >> str1;
    cout << "Here are some felines:\n";
    cout << charr1 << " " << charr2 << " " << str1 << " " << str2 << endl;
    
    cout << "The third letter in " << charr2 << " is " << charr2[2] << endl;
    cout << "The third letter in " << str2 << " is " << str2[2] << endl;
    
    
    return 0;
}
