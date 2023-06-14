/*
Program name: lab_2a.cpp
Author: Liam Rivers
Description: Lab 2a
Date 5/25/2023
*/

#include <iostream>
using namespace std;

int main(){
    double numHouseNematode;
    double numNematode;

    //5 houses are assumed, takes number of nematodes tamed and divides by 5. Use double to stop from possible nematode erasure
    cout << "Enter number of nematodes tamed: ";
    cin >> numNematode;
    numHouseNematode = numNematode / 5.0;
    cout << endl;
    cout << "Number of nematodes that will be assigned to each of the 5 houses : "; 
    cout << numHouseNematode;

    return 0;
}