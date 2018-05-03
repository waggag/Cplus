#include<iostream>
using namespace std;

void change(int& a){
	a = 5;
}
int main()
{
	int a = 1;
	//定义一个指针，让其指向a 
	int *p = &a;
	*p = 10;
	cout<<"用指针改变a的值:"<<a<<endl;
	//引用改变a的值 
	change(a);
	cout<<"引用改变a的值:"<<a<<endl;
}

