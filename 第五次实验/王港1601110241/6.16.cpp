#include<iostream>
using namespace std;

void change(int& a){
	a = 5;
}
int main()
{
	int a = 1;
	//����һ��ָ�룬����ָ��a 
	int *p = &a;
	*p = 10;
	cout<<"��ָ��ı�a��ֵ:"<<a<<endl;
	//���øı�a��ֵ 
	change(a);
	cout<<"���øı�a��ֵ:"<<a<<endl;
}

