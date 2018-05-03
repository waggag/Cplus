#include<iostream>
#include"fu1.cpp" 
using namespace std;
 int n;
 int fu1();
int main()
{
 	int n = 5;
 	for(int i=0;i<10;i++)
 	{
 		if(i==9)
		 {
 			cout<<"ful调用10次后的值"<<fu1()<<endl;
		 } 
 	} 
 	//输出调用完fu1()函数后的值 
	 cout<<"调用完fu1()后的函数值: "<<n; 
	 return 0;
 }
