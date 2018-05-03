#include<iostream>
using namespace std;
class Cat{
	public:
		Cat(int _i){
			i = _i;
			//在构造函数中对numOfCats进行累加 
			numOfCats++;
		}
		
		static int getNumOfCats(){
		 	cout<<"总创建对象的个数为："<<numOfCats;
		}
		
		Cat(Cat &p){
			numOfCats++;
		}
		
		~Cat(){
			numOfCats--;
		} 
		int geti(){
			return i;
		}
		
	private:
		int i;
		static int numOfCats;
};
//对静态变量的初始化 
int Cat::numOfCats=0;

int main()
{
	Cat cat(2);
	Cat cat2(3);
	cat.getNumOfCats();
}




