/*wap  class name as parent with constructor and accept the single parameter of type int and create the class name as the child ith single
 parameter with constructor pass the value child constrctor to paraent constructor.*/

 #include<iostream>
 using namespace std;
 class parent
 {
     public:
     parent(int a,int b)
     {
cout<<"sum of constructor is:\n"<<a+b;
     }
 };
 class child:public parent
 {
     public:
     child(int x,int y):parent(x,y)
     {
         cout<<"this is child class inheritance\n";
     }
 };
 int main()
 {
     child c(50,60);
 }

