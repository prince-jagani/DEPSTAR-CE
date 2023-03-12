//
// Created by Prince Jagani Local on 27-02-2023.
//
#include<iostream>

using namespace std;

class Division {
public:
    static void divide(int a, int b) {
        if (a % b == 0)
            cout << a << " is dividable with " << b << endl;
        else
            cout << a << " is not dividable with " << b << endl;
    }

    static void divide(int a) {
        int i;
        for (i = 2; i < a / 2 + 1; i++) {
            if (a % i == 0) {
                cout << a << " is not prime number " << endl;
                break;
            }
        }
        if (i == a / 2 + 2)
            cout << a << " is prime number " << endl;
    }

    static void divide(int a, int b, int c) {
        float ans;
        ans = (float )(a + b + c) / 3;
        cout << "Average of numbers is " << ans << endl;
    }
};

int main()
{
    int a, b, c;
    cout<<endl<<"22DCE035"<<endl;
    cout<<"Enter a: ";
    cin>>a;
    cout<<"Enter b: ";
    cin>>b;
    Division::divide(a, b);

    cout<<endl<<"Enter a: ";
    cin>>a;
    Division::divide(a);

    cout<<endl<<"Enter a: ";
    cin>>a;
    cout<<"Enter b: ";
    cin>>b;
    cout<<"Enter c: ";
    cin>>c;
    Division::divide(a, b, c);
}