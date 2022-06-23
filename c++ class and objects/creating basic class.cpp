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
	 void show()
	 {
	 	cout<<"family members age is"<<father<<" "<<mother<<" "<<brother<<" "<<sister<<endl;
	 }
};
int main()
{
	family mem;
	mem.member(44,35,18,20);
	mem.age=100;
	cout<<mem.age;
	mem.show();
}
