#include<iostream>
using namespace std;
class Cat{
	public:
		Cat(int _i){
			i = _i;
			//�ڹ��캯���ж�numOfCats�����ۼ� 
			numOfCats++;
		}
		
		static int getNumOfCats(){
		 	cout<<"�ܴ�������ĸ���Ϊ��"<<numOfCats;
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
//�Ծ�̬�����ĳ�ʼ�� 
int Cat::numOfCats=0;

int main()
{
	Cat cat(2);
	Cat cat2(3);
	cat.getNumOfCats();
}




