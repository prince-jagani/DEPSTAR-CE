//
// Created by Prince Jagani Local on 17-02-2023.
//
#include "iostream"
#include "iomanip"
using namespace std;

int main()
{
    for(int i=1; i<5; i++)
    {
        for(int j=1; j<5; j++)
        {
            cout<<setw(4)<<i*j;
        }
        cout<<endl;
    }
    return 0;
}
