#include<iostream>
using namespace std;

class Clock{  //ʱ����Ķ��� 
	public:
		Clock();
		Clock(Clock &p);
		void setTime(int newH, int newM, int newS);
		void showTime();
	private: //˽�����ݳ�Ա 
		int hour, minute, second;
};
//ʱ�����Ա������ʵ��
//���캯�� 
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

Clock globClock;   //��������globClock,���о�̬������ 
//��Ĭ�Ϲ��캯����ʼ��Ϊ 0��0��0 
int main()
{
	cout<<"First time output"<<endl;
	//���þ��������ռ�������Ķ��� 
	globClock.showTime();
	globClock.setTime(8, 30, 30);
	
	Clock myclock(globClock);	//���ø��ƹ��캯�� 

	cout<<"Second time output"<<endl;
	myclock.showTime();
	return 0;
	
	
	
 } 








