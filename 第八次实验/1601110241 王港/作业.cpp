#include<iostream>
using namespace std;

class Shape
{
	public:
		Shape(){}
		~Shape(){}
		virtual float GetPerim()=0;
};
float Shape::GetPerim(){
	return 0.0; 
}

class Rectangle:public Shape{
	public:
		Rectangle(float _height, float _weight){
			height = _height;
			weight = _weight;
		}
		float GetPerim();
	private:
		float height;	
		float weight;
};
float Rectangle::GetPerim(){
	cout<<"Rectangle���ܳ�:"<<(height+weight)*2<<endl;
}

class Circle:public Shape{
	public:
		Circle(float _bj){
			bj = _bj;
		}
		float GetPerim();
	private:
		float bj;	
};
float Circle::GetPerim(){
	cout<<"Circle���ܳ�:"<<bj*2*3.14<<endl;
}

void fun(Shape *ptr) { //����Ϊָ���������ָ��
	ptr->GetPerim();	    //"����ָ��->��Ա��"
}

int main()
{
	Shape * s;
	Rectangle r(3.0, 4.0);
	Circle c(2);
	s = &r; 
	fun(&r);
	fun(&c);
	fun(s); 
	return 0;
} 
