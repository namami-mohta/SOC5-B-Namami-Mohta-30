#include <iostream>
using namespace std;

class Person
{
public:
virtual void speak()
{
cout<<"The person is speaking"<<endl;
}
};

class Student:public Person
{
public:
void speak()
{
cout<<"The student is speaking"<<endl;
}
};

int main()
{
Person *ptr;
Student s;
ptr=&s;
ptr->speak();
return 0;
}
