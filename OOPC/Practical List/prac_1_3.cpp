//
// Created by Prince Jagani Local on 20-02-2023.
//
#include <iostream>
#include <iomanip>
using namespace std;

int _main13()
{
    double a, b, *p1, *p2;

    cout<<"Enter a:";
    cin>>a;
    cout<<"Enter b:";
    cin>>b;

    p1 = &a;
    p2 = &b;

    cout<<fixed<< *p1 + *p2 <<endl;
    cout<<scientific<< *p1 + *p2 <<endl;
    cout<<setprecision(2)<< *p1 + *p2 <<endl;

    cout<<endl;
    cout<<scientific<< *p1 + *p2 <<endl;
    cout<<fixed<< *p1 + *p2 <<endl;
    cout<<setprecision(2)<< *p1 + *p2 <<endl;
    return 0;
}