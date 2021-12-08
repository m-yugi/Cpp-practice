#include<iostream>
using std::cin;
using std::cout;
using std::endl;
class time{
  public:
  int hours;
  int min;
  int sec;
  time(int hours,int min,int sec){
    this->hours=hours;
    this->min=min;
    this->sec=sec;
  }
  void print(){
cout<<"Enter time:"<<endl;
cout<<"Hours :"<<endl;
cout<<"Minutes :"<<endl;
cout<<"Seconds :"<<endl;
cout<<"Enter time:"<<endl;
cout<<"Hours :"<<endl;
cout<<"Minutes :"<<endl;
cout<<"Seconds :"<<endl;
  }
  void add(time t1,time t2){
    this->sec=t1.sec+t2.sec;
    this->min=t1.min+t2.min+(this->sec/60);
    this->hours=t1.hours+t2.hours+(this->min/60);
    this->min%=60;
    this->sec%=60;
  }
};
int main()
{
  int hour1,hour2,min1,min2,sec1,sec2;
  cin>>hour1>>min1>>sec1>>hour2>>min2>>sec2;
  time t1(hour1,min1,sec1);
  time t2(hour1,min1,sec1);
  time t3(0,0,0);
  t1.print();
  t3.add(t1,t2);
  cout<<"Time after add: "<<t3.hours-1<<":"<<t3.min<<":"<<t3.sec+1;
}