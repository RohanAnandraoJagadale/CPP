#include<iostream>
using namespace std;

class Demo
{
	public:
		int i;
		const int j;           // Constant characteristics
		// Parametrised constructor with DEFAULT values
		Demo(int x = 10, int y = 20) : j(y)
		{
			i = x;
		}
		void fun()
		{
			int a = 10;
			const int b = 20;    // constant variable
			i++;
			j++; 			//NA
			a++;
			b++;            //NA
		}
		void gun() const         // constant behavior
		{
			int a = 10;
			const int b = 20;
			i++;                  //NA
			j++;                  //NA
			a++;                  //NA
			b++;                   //NA
		}
		
};

int main()
{
	Demo obj1(11,21);             //10  21
    const Demo obj2(11,21);         //11  21
	
	return 0;
}