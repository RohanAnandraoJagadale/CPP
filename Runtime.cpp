#include<iostream>
using namespace std;

class Base
{
	public:                        //Access specifier
		int A,B;
		
		void fun()                 //Function definition  1000
		{
			cout<<"Base fun";
		}
		void gun(int i)            // Function Definition  2000
		{
			cout<<"Base gun with one integer\n";
		}
		void gun(int i, int j)      //Overloaded function definition   3000
		{
			cout<<"Base gun with two integers\n";
		}
};

class Derived : public Base
{
	public:
		int X,Y;
		void sun()                  //Function definition     4000
		{
			cout<<"Derived sun\n";
		}
		void fun()                  //Function redefinition   5000
		{
		cout<<"Derived fun\n";
		}
	
};
int main()
{
	Derived dobj;
	dobj.fun();
	dobj.gun(11);
	dobj.gun(11,21);
	dobj.sun();
	return 0;
}