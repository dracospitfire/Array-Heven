//  main.cpp
//  Array-Heven
//
//  Created by Austin Flores on 2/22/14.
//  Copyright (c) 2014 Austin Flores. All rights reserved.


#include <iostream>

using namespace std;       //requred to access entities with namespace std

void averageNUM(int total, double NUMS[])
{
    double average;
    double sum = 0;
    
    for (int n = 0; n < (total-1); n++)
        sum = NUMS[n] + sum;
    cout << sum;
    cout << "\n\n";
    average = sum / (total-1);
    cout << average;
    cout << "\n\n";
}

void printNumgreater() {
}
 
int main() {
    int const SIZE = 100 ;
    double nums[SIZE];
    
    int sentinel = 0;
    int i = 0;
    
    while (sentinel != -1) {
        cout << "enter number:\n>";
        cin >> nums[i];
        if (nums[i++] == -1)
            sentinel = -1;
    }
    
    cout << "\n\n";
    
    averageNUM(i, nums);
    
    for ( int n = 0; n < (i - 1); n++)
        cout << nums[n] << " ";
    
    cout << "\n\n\t";
    return 0;
}
