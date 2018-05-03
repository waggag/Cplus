#include<iostream>
#include <iomanip> 
using namespace std;
int main()
{
	int** data;
	data = new int *[5];
	for(int i;i<5;i++){
		data[i] = new int[5];
	}
	//赋初值 
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		{
			data[i][j] = (i+1)*(j+1);
		}	
	}
	//遍历二维数组 
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		{
			cout<<setw(5)<<data[i][j]<<"  ";
		}
		cout<<endl;
	}	
	return 0;	
} 
