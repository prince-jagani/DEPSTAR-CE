//
// Created by Prince Jagani Local on 20-02-2023.
//
#include <iostream>
using namespace std;

struct Students {
    char collegeName[30];
    char collegeCode[20];
    char department[30];
    int intake;
};

int main()
{
    struct Students st{};
    cout<<endl<<"22DCE035"<<endl;
    cout<<"Enter College Name: ";
    cin>>st.collegeName;
    cout<<"Enter College Code: ";
    cin>>st.collegeCode;
    cout<<"Enter Department: ";
    cin>>st.department;
    cout<<"Enter Intake: ";
    cin>>st.intake;

    cout<<endl<<"***** Student Information *****"<<endl;
    cout<<"College Name: "<<st.collegeName<<endl;
    cout<<"College Code: "<<st.collegeCode<<endl;
    cout<<"Department: "<<st.department<<endl;
    cout<<"Intake: "<<st.intake<<endl;
}