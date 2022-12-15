#include<iostream>
using namespace std;
class RBI
{int irate;
	public:
		void show()
		{
			irate=16;
		}
	
};
class CENTRALISE:public RBI
{
    
	public:
		void show()
		{
			cout<<"this is default constructor of b\n";
		}
		
};
class INTERNATIONAL:public RBI
{
	public:
		void show()
		{
			cout<<"this is default constructor of b\n";
		}
		
};
int main()
{
	RBI b1;
    b1.show();
    INTERNATIONAL b2;
    b2.show();
}