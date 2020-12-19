//
//  4_4_1_Instructions_in.cpp
//  Part_4
//
//  Created by German on 15/12/2020.
//  Copyright © 2020 German. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
    int a = 0;
    int b = 0;
    cout << "Please, write two integers:\n";
    cin >> a >> b;
    if(a<b) //Условие 1-я альтернатива (выбирается, если условие истинно)
        cout << "max(" << a << "," << b
        << ") equally to " << b <<"\n";
    else
        //2-я альтернатива (выбирается, когда условие ложно)
        cout << "max(" << a << "," << b
        << ") equally to" << a <<"\n";
    return 0;
}
