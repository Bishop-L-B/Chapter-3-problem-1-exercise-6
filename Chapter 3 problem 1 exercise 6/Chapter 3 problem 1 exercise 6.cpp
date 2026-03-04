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
    double sugar=1.5;
    int butter=1;
    double flour=2.75;
    int batch;



        cout << "This recipe can make 1 batch of 48 cookies. \nHow many batches would you like to make?" << endl;
        cin >> batch;
        sugar = batch * sugar;
        butter = batch * butter;
        flour = batch * flour;
        cout << "You will need:\n";
        cout << "Sugar: " << sugar << endl;
        cout << "Butter: " << butter << endl;
        cout << "Flour: " << flour << endl;
        
return 0;

}

