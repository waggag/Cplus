#include<iostream>
using namespace std;
int main()
{	
	/*��ʹ��ָ���ʱ��Ӧ������ָ��ָ�����ĵ�ַ���ڶ��丳ֵ
	����ָ������ʹ�ÿ�ָ�룬����ָ���ָ�븳ֵ������� 
	int *p;
	*p = 9;
	cout << "The value at p: " << *p;
	return 0;
	*/
	int a = 10;
	int *p = &a;
	*p = 9;
	cout << "The value at p: " << *p;
	return 0;
	
}

