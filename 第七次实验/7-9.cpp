#include<iostream>
using namespace std;
class Base{
	public:
		void fn1();
		void fn2();
};
void Base::fn1(){
	cout<<"Base��fn1"<<endl; 
}
void Base::fn2(){
	cout<<"Base��fn2"<<endl;
}

class Derived: private Base{
	public:
		void fn1(){
			Base::fn1();
		}
		void fn2(){
			Base::fn2();
		}
};

int main()
{
	Derived d;
	d.fn1();
	d.fn2();
}
