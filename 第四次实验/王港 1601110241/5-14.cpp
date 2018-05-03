#include<iostream>
using namespace std;
class Car;
class Boat;
class Boat{
	public:
	int getBoatWeight(){
		return weight;
	}
	//得到Boat的重量 
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
	//得到Car的重量 
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
	cout<<"Boat 的重量为:"<<b.getBoatWeight()<<endl;
	cout<<"Car 的重量为:"<<c.getCarWeight()<<endl;
	cout<<"Boat 和 Car 总的重量为:"<<getWeight(b, c);
} 




