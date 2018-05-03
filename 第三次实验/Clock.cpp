#include<iostream>
using namespace std;

class Clock{  //时钟类的定义 
	public:
		Clock();
		Clock(Clock &p);
		void setTime(int newH, int newM, int newS);
		void showTime();
	private: //私有数据成员 
		int hour, minute, second;
};
//时钟类成员函数的实现
//构造函数 
Clock::Clock() : hour(0), minute(0), second(0){}

Clock::Clock(Clock &p)
{
	hour = p.hour;
	minute = p.minute;
	second = p.second;
}
void Clock::setTime(int newH, int newM, int newS)
{
	hour = newH;
	minute = newM;
	second = newS;
}

void Clock::showTime()
{
	cout<<hour<<":"<<minute<<":"<<second<<":"<<endl;
}

Clock globClock;   //声明对象globClock,具有静态生存期 
//有默认构造函数初始化为 0：0：0 
int main()
{
	cout<<"First time output"<<endl;
	//引用具有命名空间作用域的对象 
	globClock.showTime();
	globClock.setTime(8, 30, 30);
	
	Clock myclock(globClock);	//调用复制构造函数 

	cout<<"Second time output"<<endl;
	myclock.showTime();
	return 0;
	
	
	
 } 








