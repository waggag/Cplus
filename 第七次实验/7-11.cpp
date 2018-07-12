#include <iostream>
using namespace std;
class BaseClass
{
	public:
		void fn1();
		void fn2();
};

void BaseClass::fn1(){
	cout<< "调用基类的函数fn1()" << endl;
}

void BaseClass::fn2(){
	cout<< "调用基类的函数fn2()" << endl;
}

class DerivedClass : public BaseClass{
	public:
		void fn1();
		void fn2();
};

void DerivedClass::fn1(){
	cout << "调用派生类的函数fn1()" << endl;
}

void DerivedClass::fn2(){
	cout << "调用派生类的函数fn2()" << endl;
}
int main()
{
	DerivedClass aDerivedClass;
	DerivedClass *pDerivedClass = &aDerivedClass;
	BaseClass *pBaseClass = &aDerivedClass;
	cout<<"使用对象调用函数：" <<endl;
	aDerivedClass.fn1();
	aDerivedClass.fn2();
	cout<<"使用基类指针调用函数：" <<endl;
	pBaseClass->fn1();
	pBaseClass->fn2();
	cout<<"使用指针调用函数："<<endl; 
	pDerivedClass->fn1();
	pDerivedClass->fn2();
	return 0;
}

