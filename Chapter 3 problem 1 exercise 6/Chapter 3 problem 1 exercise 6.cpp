/* This is a program that asks you how many cookies you want to make then tells you
 how much of your ingredients you will need.
 Bishop Brandstetter
 3/15/2026
 Chapter 3 Problem 1 Exercise 6
 */


#include <iostream>
using namespace std;

int main()
{
    double sugar=1.5; // This line defines sugar as a decimal as well as giving it a value of 1.5
    double butter=1; // This line defines butter as decimal as well as giving it a value of 1. Same reasoning for batch why its double.
    double flour=2.75; // This line defines flour as a decimal as well as giving it the value of 2.75
    double batch; /* This line assigns batch as a double.I chose to use double just incase someone
     decides they may only want 72 cookies which is 1.5 times the material usage.*/



        cout << "This recipe can make 1 batch of 48 cookies. \nHow many batches would you like to make?" << endl;
        cin >> batch; // This line allows the user to give value to the variable batch
        sugar = batch * sugar;
        butter = batch * butter;
        flour = batch * flour;
        cout << "You will need:\n";
        cout << "Sugar: " << sugar << endl;
        cout << "Butter: " << butter << endl;
        cout << "Flour: " << flour << endl;
        
return 0;

}

