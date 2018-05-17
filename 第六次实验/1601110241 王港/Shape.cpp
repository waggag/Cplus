#include<iostream>
using namespace std;
class Shape{
	public:
		double GetArea();
};

class Rectangle: public Shape{
	public:
		void initRectangle(float _weight = 0, float _height = 0){
			weight = _weight;
			height = _height;
		}
		double GetArea(){
			cout<<"The Rectangle area is: "<<(weight*height)<<endl;
		}
		
	protected:
		float weight;
		float height;
};

class Circle: public Shape{
	public:
		Circle(float _radius){
			radius = _radius;
		}
		double GetArea(){
			cout<<"The Circle area is: "<<(radius*radius*3.14)<<endl;
		}
	private:
		float radius;
};

class Square: public Rectangle{
	public:
		Square(float _length){
			initRectangle(_length, _length);
		}
		double GetArea(){
			cout<<"The Square area is: "<<(weight*height)<<endl;
		}

};

int main(){
	Circle c(2);
	c.GetArea();
	Square square(5);
	square.GetArea();
} 
