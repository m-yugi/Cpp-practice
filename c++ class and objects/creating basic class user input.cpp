#include<iostream>
#include<string.h>
using namespace std;
class family
{
private:
 int father;
 int mother;
 int brother;
 int sister;
 public:
 	int age;
 	void member(int f,int m,int b,int s)
 	{
 		father=f;
 		mother=m;
 		brother=b;
 		sister=s;
	 }
	 void usermember()
	 {
	 	cout<<"enter the age";
		cin>>father>>mother>>brother>>sister;
	 }
	 void show()
	 {
	 	cout<<"family members age is"<<father<<" "<<mother<<" "<<brother<<" "<<sister<<endl;
	 }
};
int main()
{
	family mem2;
	//mem.member(44,35,18,20);
	mem2.usermember();
	//mem.show();
	//cout<<endl;
	mem2.show();
	//mem.age=100;
	//cout<<mem.age<<endl;
}
