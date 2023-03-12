//
// Created by Prince Jagani Local on 03-03-2023.
//
#include <iostream>

using namespace std;

void tonLarge(int &a, int &b) {
    if (a > b) a = 100;
    else b = 100;
}

int main() {
    int a, b;
    cout<<endl<<"22DCE035"<<endl;
    cout << "Enter a and b: ";
    cin >> a >> b;
    tonLarge(a, b);
    cout<<"After Change"<<endl<<"a = "<<a<<"  b = "<<b;
}