#include<iostream>
using namespace std;
class Date
{
	int date,month,year;
	public:
		void set(int &a,int &b,  int &c);
		void output()
		{
			cout<<date<<"/"<<month<<"/"<<year;
		}
};
void Date::set(int &a,int &b,int &c)
{
	date=a;
	month=b;
	year=c;
	
}
int main()
{
	Date d;
	int a,b,c;
	cout<<"Enter Date";
	cin>>a>>b>>c;
	d.set(a,b,c);
	d.output();
	
}
