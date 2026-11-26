#include <iostream>
using namespace std;

class Calculator
{
private:
int num;
public:
int add(int a,int b)
{
return a+b;
}
int add(int a,int b, int c)
{
return a+b+c;
}
};

int main()
{
Calculator c;
cout<<"The addition of a&b is "<<c.add(4,5)<<endl;
cout<<"The addition of a,b&c is "<<c.add(1,2,3)<<endl;
return 0;
}

