#include <iostream>
using namespace std;

class Student
{
    public:
    string name;
    int roll_no;
    float marks;

    void accept()
    {
        cout<<"Enter name:";
        cin.ignore();
        getline(cin, name);

        cout<<"Enter roll number:";
        cin>>roll_no;

        cout<<"Enter marks:";
        cin>>marks;
    }

    void calculate_result()
    {
        if(marks>=40)
        {
            cout<<"Result is Pass"<<endl;
        }
        else
        {
            cout<<"Result is Fail"<<endl;
        }
    }

    void display()
    {
        cout<<"-------Result Declaration-------"<<endl;
        cout<<"The name of the student is: "<<name<<endl;
        cout<<"The roll number of the student is: "<<roll_no<<endl;
        cout<<"The marks of the student are:"<<marks<<endl;

        calculate_result();
    }   
};

int main()
{
    Student s;
    s.accept();
    s.display();
    return 0;   
}   