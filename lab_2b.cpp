/*
Program name: lab_2b.cpp
Author: Liam Rivers
Description: Lab 2b
Date 5/25/2023
*/

#include <iostream>
using namespace std;

int main(){

    int numPup;
    int numFoodDay;
    int numFoodWeek;
    int numFoodCost;

    cout << "Please enter the number of puppies: ";
    cin >> numPup;

    //food per day found by multiplying number of puppies by 2
    numFoodDay = numPup * 2;

    //food per week found by multiplying food per day by 7
    numFoodWeek = numFoodDay * 7;

    //uses food per week for easier calculation of food cost
    numFoodCost = numFoodWeek * 3;

    cout << "The amount of pet food needed per day: " << numFoodDay << endl;
    cout << "The total cost of pet food per week: $" << numFoodCost;

    return 0;
}