#include<iostream>
using namespace std;
class Car;
class Boat;
class Boat{
	public:
	int getBoatWeight(){
		return weight;
	}
	//�õ�Boat������ 
	Boat(int _weight){
		weight = _weight;
	}
	
	friend int getWeight(Boat boat,Car car);
	private:
		int weight;
};

class Car{
	public: 
	Car(int _weight){
		weight = _weight;
	}
	//�õ�Car������ 
	int getCarWeight(){
		return weight;
	}
	
	friend int getWeight(Boat boat,Car car);
	
	private: 
		int weight;
};

int getWeight(Boat boat,Car car){
	return boat.getBoatWeight()+car.getCarWeight();
}
int main()
{	
	Boat b(10);
	Car c(20);
	getWeight(b, c); 
	cout<<"Boat ������Ϊ:"<<b.getBoatWeight()<<endl;
	cout<<"Car ������Ϊ:"<<c.getCarWeight()<<endl;
	cout<<"Boat �� Car �ܵ�����Ϊ:"<<getWeight(b, c);
} 




