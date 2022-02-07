#include <iostream>
#include <math.h>
using namespace std;


double sum (int a, int b)
{
    double sum = a+b;
    return sum;
}
double sub (int a, int b)
{
    double sum = a-b;
    return sum;
}
double mul (int a, int b)
{
    double sum = a*b;
    return sum;
}
double divi (int a, int b)
{
    double sum = a/b;
    return sum;
}


double pow (int a, int b)
{
  double po =  pow(a,b);
  return po;
}
double cub (int a)
{
    double c = cbrt(a);
    return c;
}
int sq (int a)
{
    int s = sqrt(a);
}
int main()
{
    int a,b,c;
    double d;
    cout << "Enter 2 numbers" << endl;
    cin >>a>>b;
    cout << "Please enter the required digit for specific calculation " <<"\n";
    cout << "Enter 1 for addition " << a<<"+" <<b <<"\n";
    cout << "Enter 2 for subtraction " << a<<"-"<<b <<"\n";
    cout << "Enter 3 for multiplication " << a<<"*" <<b <<"\n";
    cout << "Enter 4 for division " << a<<"/"<<b <<"\n";
    cout << "Enter 5 for the power function "<< a<<"^"<<b <<"\n";
    cout << "Enter 6 for the square-root function sqrt" <<a <<"\n";
    cout << "Enter 7 for the cube-root function cuberoot"<< a <<"\n";

    cin >>c;
    if (c==1)
       d = sum (a,b);
    else if (c==2)
    d = sub(a,b);
     else if (c==3)
    d = mul(a,b);
     else if (c==4)
        d = divi(a,b);
    else if (c==5)
        d = pow(a,b);
    else if (c==6)
        d = sq(a);
    else if (c==7)
        d = cub(a);
        else
            cout <<"Select valid option";

        cout <<"Your answer "<<d;
    return 0;
}
