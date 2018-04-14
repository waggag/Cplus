#include<iostream>
using namespace std;

class Dog
{
	public:
		Dog(int Age = 0,int Weight = 5);	//构造方法 
		~Dog();		//析构方法 
		//四个方法 
		int GetAge(){
			return age;
		}
		int GetWeight(){
			return weight;
		}
		int SetAge(int _age){
			age = _age;
		}
		int SetWeight(int _weight){
			weight = _weight;
		}
		void show();	//显示Dog的属性 
	private:
		int age;
		int weight; 
} ;

Dog::Dog(int _Age, int _Weight)	//构造函数 
{
	age = _Age;
	weight = _Weight;
}

Dog::~Dog(){			//空构造函数 
}

void Dog::show(){		//show method 具体实现 
	cout<<"The Dog age is " <<age<<",weight is "<<weight<<endl;
}
 int main()
 {
 	Dog myDog;    //使用默认构造函数 
 	cout<<"First Dog:"<<endl;
 	myDog.show();
 	cout<<"Second Dog:"<<endl;
 	Dog myDog2(2, 20);	 
 	myDog2.show();
 	
 }
 
