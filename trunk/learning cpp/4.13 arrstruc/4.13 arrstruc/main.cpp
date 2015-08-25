//
//  main.cpp
//  4.13 arrstruc
//
//  Created by Vaith on 15/8/24.
//  Copyright (c) 2015年 Shenme Studios. All rights reserved.
//

#include <iostream>

struct inflatbale
{
    char name[20];
    float volume;
    double price;
};

int main(int argc, const char * argv[]) {
    using namespace std;
    
    inflatbale guests[2] = {{"Bambi", 0.5, 21.99}, {"Godzila", 200, 565.99}};
    cout << "The guests " << guests[0].name << " and " << guests[1].name << "\nhave a combined volume "
    << guests[0].volume + guests[1].volume << " cubic feet.\n";
    
    return 0;
}
