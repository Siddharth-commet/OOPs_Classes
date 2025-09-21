#include<bits/stdc++.h>
using namespace std;
struct student
{
    char name[50];
    int rollNum;
    char degree[20];
    char hostel[10];
    float currentCG;
    void addDetails(){
        cout<<"Enter Name: ";
        cin.getline(name,50);
        cout<<"Roll Number: ";
        cin>>rollNum;
                cin.ignore();
        cout<<"Degree: ";
        cin.getline(degree, 20);
        cout<<"Hostel: ";
        cin.getline(hostel,10);
        cout<<"Enter CGPA";
        cin>>currentCG;  
    }
    void update(){
        int Usercase;
        cout<<"1: update name";
        cout<<"2: update degree";
        cout<<"3: update Hostel";
        cout<<"4: update CGPA";
        cin.ignore();
        cout<<"what you want to update: ";
        cin>>Usercase;
        switch (Usercase)
        {
        case 1:
            cout<<"Update name: ";
            cin.ignore();
            cin.getline(name,50);
            cout<<name;
            break;
        case 2:
            cout<<"Update degree: ";
            cin.ignore();
            cin.getline(degree,20);
            cout<<degree;
            break;
        case 4:
            cout<<"Update CGPA: ";
            cin.ignore();
            cin>>currentCG;
            cout<<currentCG;
            break;
        case 3:
            cout<<"Update Hostel: ";
            cin.ignore();
            cin.getline(hostel,10);
            cout<<hostel;
            break;
        
        default:
            break;
        }
    }
    void displayDetails(){
        cout<<"THe name is"<<name<<"\n";
        cout<<"THe roll number is"<<rollNum<<"\n";
        cout<<"The Hostel is"<<hostel<<"\n";
        cout<<"The CGPA is"<<currentCG<<"\n";
        cout<<"The Degree is"<<degree<<"\n";
    }
};

int main (){
    student S1;
    S1.addDetails();
    S1.update();
    S1.displayDetails();
    return 0;
}