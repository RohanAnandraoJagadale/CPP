#include<iostream>
using namespace std;

class Base
{
	public:
		int A,B;
	void fun()                         //1000
		{
			cout<<"Base fun\n";
		}
	virtual void gun()                 //2000
		{
			cout<<"Base gun\n";
		}
	virtual void sun()                //3000
		{
			cout<<"Base sun\n";
		}
	virtual void run()                //4000
		{
			cout<<"Base run\n";
		}
};

class Derived : public Base
{
	public:
		int X,Y;
	
	void gun()                       //5000
	{
		cout<<"Derived gun\n";
	}
	
	virtual void run()               //6000
	{
		cout<<"Derived run\n";
	}
	
	virtual void mun()              //7000
	{
		cout<<"Derived mun\n";
	}
};

int main()
{
	cout<<"Size of Base class : "<<sizeof(Base)<<"\n";
	cout<<"Size of Derived class : "<<sizeof(Derived)<<"\n";
	Base *bp = NULL;
	Derived dobj;
	bp = & dobj;			//upcasting
	
	bp->fun();
	bp->gun();
	bp->sun();
	bp->run();
	//bp->mun();
	
	return 0;
}
