#include<iostream>
using namespace std;
int main()
{	
	/*在使用指针的时候应该先让指针指向具体的地址，在对其赋值
	书上指明可以使用空指针，让其指向空指针赋值程序出错 
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

