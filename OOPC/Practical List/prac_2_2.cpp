//
// Created by Prince Jagani Local on 20-02-2023.
//
#include<iostream>
using namespace std;
class student
{
public:
    char name[50];
    int Roll_No;
    char _class[10];
    char Divison;

    void read()
    {
        cout<<"Enter Name :"<<endl;
        cin>>name;
        cout<<"Enter Roll_No :"<<endl;
        cin>>Roll_No;
        cout<<"Enter Class :"<<endl;
        cin>>_class;
        cout<<"Enter Divison :"<<endl;
        cin>>Divison;
    }

    void display()
    {
        cout<<name<<"\t| ";
        cout<<Roll_No<<"\t| ";
        cout<<_class<<"\t| ";
        cout<<Divison<<endl;
    }
};

int main()
{
    int i;
    student s1;
    student s2;
    student s3;
    student s4;
    student s5;

    s1.read();
    s2.read();
    s3.read();
    s4.read();
    s5.read();

    cout<<"Name\t| Ro.No\t| Class\t| Division"<<endl;
    cout<<"------------------------------------"<<endl;
    s1.display();
    s2.display();
    s3.display();
    s4.display();
    s5.display();
    return 0;
}