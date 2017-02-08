//
//  main.cpp
//  COMP 235 Homework 02 Problem 02
//
//  Created by ax on 2/7/17.
//  Copyright © 2017 COMP235. All rights reserved.
//

#include "pairTemplate_H.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
    Pair<int, double> pair1;
    Pair<double, char> pair2(111, 'A');
    Pair<long long, string> pair3(11122233344455, "milliseconds");
    Pair<int, string> ssnPerson[] = {	{123341234, "Mike"},
        {321455432, "Mary"}		};
    
    cout << "Pair 1, constructed with default values...\n";
    cout << "First value = " << pair1.first() << endl;
    cout << "Second value = " << pair1.second() << endl;
    
    cout << "\nPair 2, constructed with int and char types...\n";
    cout << "First value = " << pair2.first() << endl;
    cout << "Second value = " << pair2.second() << endl;
    
    cout << "\nPair 3, constructed with long and string types...\n";
    cout << "First value = " << pair3.first() << endl;
    cout << "Second value = " << pair3.second() << endl;
    
    cout << "\nArray of two persons...\n";
    cout << "Social Security number: " << ssnPerson[0].first() << "\t";
    cout << "Name: " << ssnPerson[0].second();
    cout << "\nSocial Security number: " << ssnPerson[1].first() << "\t";
    cout << "Name: " << ssnPerson[1].second();
    
    cout << endl;
    return 0;
}
