//operator overloading 
#include<iostream>
using namespace std;

class complex
{	
	public:
		float real,imag;
		complex()//constructor
		{
			real=0;
			imag=0;
		}
		complex(float real,float imag)
		{
			this->real=real;
			this->imag=imag;
		}
		
		void display()
		{
			cout<<real<<"+"<<imag<<"i"<<endl;
		}
		complex operator+(complex c2)
		{
			complex c3;
			c3.real=real+c2.real;
			c3.imag=imag+c2.imag;
			return c3;
		}
		
		complex operator*(complex c2)
		{
			complex c4;
			c4.real=(real*c2.real)-(imag*c2.imag);
			c4.imag=(real*c2.imag)+(c2.real*imag);
			return c4;
			
		}
};
int main()
{
	float real,imag;
	cout<<"For 1st complex number";
	cout<<"Enter real and imaginary part:";
	cin>>real>>imag;
	complex c1(real,imag);
	c1.display();
	cout<<"For 2nd complex number";
	cout<<"Enter real and imaginary part:";
	cin>>real>>imag;
	complex c2(real,imag);
	c2.display();
	
	complex c3;
	c3=c1+c2;
	cout<<"ADDITION :";
	c3.display();
	
	complex c4;
	c4=c1*c2;
	cout<<"MULTIPLICATION :";
	c4.display();
	
	return 0;
	
}
