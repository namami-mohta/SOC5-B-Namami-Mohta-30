# include <iostream>
using namespace std;

class Rectangle
{
private:
float l,b;
public:
void getdata()
{
cout<<"Enter l:";
cin>>l;
cout<<"Enter b:";
cin>>b;
}

float area();
float perimeter();

void display()
{
cout<<"The area is:"<<area();
cout<<"The perimeter is:"<<perimeter();
}
};

float Rectangle::area()
{
return l*b;
}
float Rectangle::perimeter()
{
return 2*(l+b);
}

int main()
{
Rectangle r;
r.getdata();
r.display();
return 0;
}

