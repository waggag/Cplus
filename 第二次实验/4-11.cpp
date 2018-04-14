#include<iostream>
using namespace std;
class Matrix{
	public :
		Matrix(int _longs=0,int _width=0);
		~Matrix();
		void GetArea();		//get matrix area
		void setlongs(double _longs) {longs = _longs;} //set matrix  long value 
		void setwidth(double _width) {width = _width;}	//set matrix  width value
	private :
		double longs;
		double width;
}; 
Matrix::Matrix(int _longs,int _width)
{
	longs = _longs;
	width = _width;
}
Matrix::~Matrix(){
}
void Matrix::GetArea(){
	cout<<"	The Maxtri Area is "<<longs*width<<endl;
}

int main()
{
	Matrix matrix;
	cout<<"使用默认的值!"<<endl; 
	matrix.GetArea();
	matrix.setlongs(10);
	matrix.setwidth(10);
	cout<<"使用设置的值!"<<endl; 
	matrix.GetArea();
	
	
}
