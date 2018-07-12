#include<iostream>
using namespace std;

class Shape
{
public:
	Shape(){cout<<"Shape"<<endl;}
	virtual float getPerim()=0;
	virtual ~Shape(){cout<<"~Shape"<<endl;}
};

class Rectangle:public Shape
{
public:
	Rectangle(float i=0,float j=0):m_i(i),m_j(j)
	{
		cout<<"Rectangle"<<endl;
	}
	float getPerim()
	{
		return 2*(m_i+m_j);
	}
	~Rectangle(){cout<<"~Rectangle"<<endl;}
private:
	float m_i;
	float m_j;
};

class Circle:public Shape
{
public:
	Circle(int i=0):m_k(i)
	{
		cout<<"Circle"<<endl;
	}
	float getPerim()
	{
		return 3.14*2*m_k;
	}
	~Circle(){cout<<"~Circle"<<endl;}
private:
	float m_k;
};


int main()
{
	Shape *p;
	p=new Rectangle(4,7);
	cout<<(*p).getPerim()<<endl;
	delete p;
	p=new Circle(9);
	cout<<(*p).getPerim()<<endl;
	delete p;
	p=NULL;
	return 0;
}
