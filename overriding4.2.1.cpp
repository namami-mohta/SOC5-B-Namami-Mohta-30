#include <iostream>
using namespace std;

class Person
{
private:
int age;
public:
void eat()
{
cout<<"The person is eating his food"<<endl;
}
};

class Doctor:public Person
{
public:
void eat()
{
cout<<"The doctor eats healthy food"<<endl;
}
};

int main()
{
Person p;
Doctor d;
p.eat();
d.eat();
return 0;
}
