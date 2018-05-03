#include<iostream>
using namespace std;

class Complex{
	public :
		Complex(double _real, double _imag);
		Complex(double _real);
		void add(Complex &c);
		void show();
	private:
		double real;
		double imag;
}; 

Complex::Complex(double _real, double _imag)
{
	real = _real;   //定义实数部分 
	imag = _imag;	//定义虚数部分 
}
Complex::Complex(double _real)
{
	real = _real;
}

void Complex::add(Complex &c){
	real = real + c.real;
	imag = imag + c.imag;
}
void Complex::show(){
	cout<<real<<"+"<<imag<<"i"<<endl;
}
int main()
{
	Complex c1(3,5);
	Complex c2=4.5;
	c1.add(c2);
	c1.show();
	return 0;
}
	
	
	
