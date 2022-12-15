#include<iostream>																																			
using namespace std;
class area
{
	float radius,a,pi;
public:
area()
{
	pi=3.14f;
	}	
	void setrad(float r)
	{
		radius=r;
	}
	void showarea()
	{
		cout<<"area of circle = "<<radius*radius*pi;
	}
};

int main()
{
	area a1;
	a1.setrad(3);
	a1.showarea();
}
