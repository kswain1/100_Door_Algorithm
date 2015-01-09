//
//  main.cpp
//  100_Door_Algorithm
//
//  Created by kehlin swain on 11/3/14.
//  Copyright (c) 2014 Kehlin Swain. All rights reserved.
//

#include <iostream>
using namespace std;

bool door[100] = {false};
int main()
{
    for(int a = 1; a < 101; a++)
    {
        for (int x = 1; x < 101; x = x + a)
        {
            if (door[x] == false)
                door[x] = true;
            else
                door [x] = false;
        }
    }
    
    for (int a = 1; a < 101; a++)
    {
        cout << a << " Door is: ";
        if (door[a+1] == false)
            cout << "false" << endl;
        else
            cout << "Open" << endl;
    }
    return 0;
}