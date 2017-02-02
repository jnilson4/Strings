//
//  StringController.cpp
//  Strings
//
//  Created by Nilson, Jake on 2/2/17.
//  Copyright © 2017 Nilson. All rights reserved.
//

#include <iostream>
#include <string>
#include "StringController.hpp"

using namespace std;

void StringController :: start()
{
    string myName = "Jake";
    
    //sizelength
    cout << "My name is: " << myName << endl;
    cout << "The length of my name is: " << myName.length() << endl;
    
    //[]
    cout << "The fourth character is: " << myName[3] << endl;
    
    //at(int)
    cout << "The letter at spot 3 is: " << myName.at(3) << endl;
    
    //empty
    cout << "The string is empty: " << myName.empty() << endl;
    
    //substr
    cout << "The letters from 1 to 3 are: " << myName.substr(1, 3) << endl;
    
    //substr(start)
    cout << "The letters from the 2 to the end are: " << myName.substr(2) << endl;
    
    //compare(start)
    cout << "My name compared to my last name: " << myName.compare("Nilson") << endl;
}
