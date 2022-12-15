#include<iostream>
using namespace std;
class a
{
	public:
		void show()
		{
			cout<<"this is default constructor of a\n";
		}
	
};
class c:public a
{

};
class b:public a
{
	public:
		void show()
		{
			cout<<"this is default constructor of b\n";
		}
		
};
int main()
{
	a b1;
    b1.show();
    b b2;
    b2.show();
}