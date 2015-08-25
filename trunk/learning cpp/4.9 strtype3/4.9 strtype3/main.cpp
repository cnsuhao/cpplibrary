//
//  main.cpp
//  4.9 strtype3
//
//  Created by Vaith on 15/8/24.
//  Copyright (c) 2015年 Shenme Studios. All rights reserved.
//

#include <iostream>
#include <cstring>

int main(int argc, const char * argv[]) {
    
    using namespace std;
    
    char charr1[20];
    char charr2[20] = "jaguar";
    string str1;
    string str2 = "panther";
    
    
    str1 = str2;
    strcpy(charr1, charr2);
    
    str1 += " paste";
    strcat(charr1, " juice");
    
    
    long len1 = str1.size();
    long len2 = strlen(charr1);
    
    cout << "The string " << str1 << " contains " << len1 << " characters.\n";
    cout << "The string " << charr1 << " contains " << len2 << " characters.\n";
    
    return 0;
}
