#include <iostream>
using namespace std;

string name[100];
int id[100];
int salary[100];
int n=0;

void addEmployee() {
    cout<<"Enter ID: ";
    cin>>id[n];
    cin.ignore();

    cout<<"Enter Name: ";
    getline(cin,name[n]);

    cout<<"Enter Salary: ";
    cin>>salary[n];

    n++;
}

void displayEmployee() {
    cout<<"\nEmployee Details\n";

    for(int i=0;i<n;i++) {
        cout<<"ID: "<<id[i]<<endl;
        cout<<"Name: "<<name[i]<<endl;
        cout<<"Salary: "<<salary[i]<<endl;
        cout<<"-----------------\n";
    }
}

int main() {
    int ch;

    do {
        cout<<"\n1.Add Employee";
        cout<<"\n2.Display Employee";
        cout<<"\n3.Exit";
        cout<<"\nEnter Choice: ";
        cin>>ch;

        if(ch==1)
            addEmployee();
        else if(ch==2)
            displayEmployee();

    }while(ch!=3);

    return 0;
}