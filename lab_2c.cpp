/*
Program name: lab_2c.cpp
Author: Liam Rivers
Description: Lab 2c
Date 5/25/2023
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    string month;
    float gameOne;
    float gameTwo;
    float gameThree;
    float totMonthOne;
    float totMonthTwo;
    float totMonthThree;
    float totAllMonth;
    float gameAvg;

    // retrieves month, and prices of three games
    cout << "Enter the first month: ";
    cin >> month;
    cout << "Price of game 1: $";
    cin >> gameOne;
    cout << "Price of game 2: $";
    cin >> gameTwo;
    cout << "Price of game 3: $";
    cin >> gameThree;

    //gets the total cost of games for month one
    totMonthOne = gameOne + gameTwo + gameThree;
    cout << "Total cost of all three games for " << month << ": $" << totMonthOne << endl;
    cout << endl;

    //retrieves second month and price of three games
    cout << "Enter the second month: ";
    cin >> month;
    cout << "Price of game 1: $";
    cin >> gameOne;
    cout << "Price of game 2: $";
    cin >> gameTwo;
    cout << "Price of game 3: $";
    cin >> gameThree;

    //gets total cost of games for month two
    totMonthTwo = gameOne + gameTwo + gameThree;
    cout << "Total cost of all three games for " << month << ": $" << totMonthTwo << endl;
    cout << endl;

    //retrieves month three and cost of three games
    cout << "Enter the third month: ";
    cin >> month;
    cout << "Price of game 1: $";
    cin >> gameOne;
    cout << "Price of game 2: $";
    cin >> gameTwo;
    cout << "Price of game 3: $";
    cin >> gameThree;

    //gets total cost of games for month three
    totMonthThree = gameOne + gameTwo + gameThree;
    cout << "Total cost of all three games for " << month << ": $" << totMonthThree << endl;
    cout << endl;

    //gets the total of all months and uses it to find average of cost of game
    totAllMonth = totMonthOne + totMonthTwo + totMonthThree;
    gameAvg = totAllMonth / 9.0;
    cout << "Total amount spent over the three months : $" << totAllMonth << endl;
    cout << "Average price per game: $";
    cout << fixed <<setprecision(2) << gameAvg;

    return 0;
}