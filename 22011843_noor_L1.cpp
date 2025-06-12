/*
ID = 22011843
Name = Noor Hidayatul Nabila binti Kamarudin
*/

#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
    struct Student {
        int id;
        string name;
        string contact;
        string email;
    };
    
    Student student[5];
    for (int i=0; i<5; i++){
        cout<<"Enter your ID number: "; cin>>student[i].id;
        cin.ignore();
        cout<<"Enter your name: "; getline(cin,student[i].name);
        
        cout<<"Enter your contact number: "; cin>>student[i].contact;
        cout<<"Enter your email: "; cin>>student[i].email;
        cout<<endl;
    };
    
    for (int i=0; i<5; i++){
        cout<<"Name: "<<student[i].name<<endl;
        cout<<"ID number: "<<student[i].id<<endl;
        cout<<"Contact number: "<<student[i].contact<<endl;
        cout<<"Email: "<<student[i].email<<endl;
        cout<<endl;
    };


    return 0;
}