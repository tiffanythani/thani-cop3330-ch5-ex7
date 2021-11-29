/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Tiffany Thani
 */



#include <iostream>
#include <vector>
#include <string>
#include <math.h>

using namespace std;

double discriminant(double, double, double);
void findRealRoots(double a, double b, double disc, double *x1, double *x2)
{
    *x1= (-b+sqrt(disc))/(2*a);
    *x2= (-b-sqrt(disc))/(2*a);
}

double discriminant(double a, double b, double c)
{
    double retVal = 0;

    retVal = (b*b) - (4*a*c);
    return retVal;
}

int main()
{
    //variables - local to main
    double a;
    double b;
    double c;
    double x1;
    double x2;
    double disc;
    cout<< "Enter values";
    
    
    

    
while (cin >> a >> b >> c){

    disc = discriminant(a,b,c); //call the discriminant function and get the value BACK

    if (disc >= 0)
    {
        findRealRoots(a, b, disc, &x1, &x2);
        if (disc == 0)
        {
            cout<<"There is only ONE REAL root, which is " <<x1<< endl;
        }
        else
        {
            cout<<"The two REAL roots, which are " << x1 << " and "  <<x2  << endl;
        }
    }
    else {
        cout<<"There are no real roots";
    }
    
}

}
