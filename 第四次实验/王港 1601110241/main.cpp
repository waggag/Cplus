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
 			cout<<"ful����10�κ��ֵ"<<fu1()<<endl;
		 } 
 	} 
 	//���������fu1()�������ֵ 
	 cout<<"������fu1()��ĺ���ֵ: "<<n; 
	 return 0;
 }
