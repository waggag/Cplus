#include<iostream>
using namespace std;

class Object{
	public:
		Object(float _weight=0){
			weight = _weight;
			cout<<"This is Object 构造函数！"<<endl;
		}
		void initObject(float _weight){
			weight = _weight;
		}
		~Object(){
			cout<<"This is Object 析构函数！"<<endl;
		}
		void setWeight(float _weight){
			weight = _weight;
		}
		float getWeight(){
			return weight;
		}
	private:
		float weight;
};

class Box: public Object{
	public:
		Box(float _weight, float _height){
			
			this->setHeight(_weight);
			this->height = _height;
			cout<<"This is Box 构造函数!"<<endl;
		} 
		~Box(){
			cout<<"This is Box 析构函数！"<<endl; 
		}
		void setWeight(float _weight){
			this->setWeight(_weight);
		}
		float getWeight(){
			return this->getWeight();
		}
		void setHeight(float _height){
			height = _height;
		}
		float getHeight(){
			return height;
		} 
	private:
		float height;
		float weight;
};

int main()
{
	Box c(20.0, 30.0);
	cout<<"this box height:"<<c.getHeight()<<endl;
}
