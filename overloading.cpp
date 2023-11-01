#include<iostream>
using namespace std;

class Overloading
{
   public:
      int Add(int a , int b)
	  {
	      cout<<"Addition of integer\n";  
	  }
	  
	  float Add(float a , float b)
      {
	      cout<<"Addition of floats\n";
	  }
	  
	  double Add(double a, double b)
      {
	      cout<<"Addition of double\n";
	  }
	  
	  int Add(int a , int b , int c)
	  {
	      cout<<"Addition of 3 integers\n";
	  }
	  
	  void fun(int a, float b)
	  {}
	  
	  void fun(float x, int y)
	  {}
};
int main()
{
    Overloading obj;
	
	obj.Add(11,12);       
	obj.Add(11,21,51);
	obj.Add(10.1,89.5);
	obj.Add(20.11f,50.26f);
    
    return 0;
}