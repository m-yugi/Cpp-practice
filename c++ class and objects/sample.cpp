#include<iostream>
#include<string.h>
using namespace std;

class me
{
	private:
		int age;
		string name;
	public:
		void getpass(string n,int a )
		{
			name=n;
			age=a;
		}
		void getname()
		{
			cout<<"enter name"<<endl;
			cin>>name;
			cout<<"enter age"<<endl;
			cin>>age;
		}
		void show()
		{
			cout<<"name is "<<name<<endl;
			cout<<"age is "<<age<<endl;
		}
		
};
int main()
{
	me d1,d2;
	d1.getname();
	d1.show();

}
