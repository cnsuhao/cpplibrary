//
//  main.cpp
//  2.5 ourfunc
//
//  Created by OrangeLife on 15/8/19.
//  Copyright (c) 2015年 Shenme Studio. All rights reserved.
//

#include <iostream>

void simon(int);

int main(int argc, const char * argv[]) {
    using namespace std;
    
    simon(3);
    cout << "Pick an integer：";
    int count;
    cin >> count;
    simon(count);
    cout << "Done!" << endl;
    
    return 0;
}

void simon(int n)
{
    using namespace std;
    cout << "Simon says touch your toes " << n << " times" << endl;
}
