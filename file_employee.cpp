#include <iostream>
using namespace std;

class Employee
{
public:
string name;
int employid;
float basicsalary;
float bonus;
float totalsalary;

Employee()
{
name="unknown";
employid=0;
basicsalary=0;
bonus=0;
totalsalary=0;
}

Employee(string n,int id,float s,float b,float t)
{
name=n;
employid=id;
basicsalary=s;
bonus=b;
totalsalary=t;
}
void calculate()
{
totalsalary=basicsalary+bonus;
}


void display()
{
cout<<"The name of employee is:"<<name;
cout<<"Employ id is:"<<employid;
cout<<"Basic salary is:"<<basicsalary;
cout<<"Bonus is:"<<bonus;
cout<<"Total salary is:"<<totalsalary;
}
};

int main()
{
Employee e1;
e1.display();
Employee e2("John",1324,500000,10000, 510000);
e2.display();
return 0;
}
