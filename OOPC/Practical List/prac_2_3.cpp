//
// Created by Prince Jagani Local on 24-02-2023.
//
#include<iostream>
using namespace std;

class _swap
{
public:
    void doSwap(int, int);
    void display(int a1, int b1)
    {
        cout<<endl<<"Values after swapping...."<<endl;
        cout<<"a: "<<a1<<endl<<"b: "<<b1;
    }
};

void _swap::doSwap(int a, int b) {
    cout<<"Values before swapping...."<<endl;
    cout<<"a: "<<a<<endl<<"b: "<<b;
    a = a + b;
    b = a-b;
    a = a-b;
    display(a, b);
}

int main()
{
    int n1, n2;
    cout<<"Enter a: ";
    cin>>n1;
    cout<<"Enter b: ";
    cin>>n2;
    cout<<endl;
    _swap _swap;
    _swap.doSwap(n1, n2);

    return 0;
}