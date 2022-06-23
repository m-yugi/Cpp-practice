#include<iostream>
using namespace std;
int main()
{
	int n,q;
	char c;
	cout<<"Number Name\tPrice \n 1 veg Sandwich\t80.0 \n 2.cheese sandwich\t130.0 \n 3.veg grilled sadwich\t100.0 \n 4 Sada Dosa\t80.0 \n 5.Masala dosa\t90.9 \n 6 onion rava sada dosa\t110.0 \n 7 onion rava masala dosa\t120.0 \n 8 spring dosa\t140.0 \n 9 plain utappam\t 70 \n 10 onion uttappam\t80.0 "<<endl;
	//cout<<"enter order";
	int sum=0;
	do
	{
		cout<<"enter order"<<endl;
		cin>>n;
		cout<<"enter quantity"<<endl;
		cin>>q;
		switch(n)
		{
		case 1: 
				sum+=80*q;
				break;
		case 2:sum+=130*q;
		break;
		case 3:
			sum+=100*q;
			break;
		case 4:
			sum+=80*q;
			break;
		case 5:
			sum+=90*q;
			break;
		case 6:
			sum+=110*q;
			break;
		case 7:
			sum+=120*q;
			break;
		case 8:
			sum+=140*q;
			break;
		case 9:
			sum+=70*q;
			break;
		case 10:
			sum+=80*q;
			break;
		case 11:
			sum+=130*q;
			break;
		case 12:
			sum+=160*q;
			break;
		case 13:
			sum+=70*q;
			break;
		case 14:
			sum+=60*q;
			break;
		case 15:
			sum+=40*q;
			break;
		case 16:
			sum+=50*q;
			break;
		case 17:
			sum+=30*q;
			break;
		case 18:
			sum+=40*q;
			break;
		case 19:
			sum+=160*q;
			break;
		case 20:
			sum+=150*q;
			break;
		default:
			cout<<"INVALID INPUT";
			break;
	}
	cout<<"Do you want to order more items?(y/n)";
	cin>>c;
	}while(c=='y');
	cout<<sum;
}



