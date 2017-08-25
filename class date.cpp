#include<iostream>
using namespace std;
class Date
{
	int date,month,year;
    
	
	public:
	
			
		void set(int &a,int &b,int &c,int &d,int &e,int &f);
	
		void result();
};



void Date::set(int &a,int &b,int &c,int &d,int &e,int &f)
{
	if(a>d&&b>e)
	{
	
	date=d+30-a;
	month=(e+11)-b;
	year=f-1-c;
}
else if(b>e)
{
	date=c-a;
	month=(e+12) -b;
	year=(f-1)-c;
	
}
else if(a>d)
{
	date=(d+30)-a;
	month=(e-1)-b;
	year=f-c;
	
}
else
{
	date=d-a;
	month=e-b;
	year=f-c;
}
}
void Date::result()
{
cout<<date<<"day"<<month<<"month"<<year<<"year";
}
int main()
{
	Date dob;
	int a,b,c;
	int d,e,f;
	
	cout<<"Enter Date of birth";
	cin>>a>>b>>c;
	cout<<"Enter today date";
	cin>>d>>e>>f;

	dob.set(a,b,c,d,e,f);
	

	dob.result();
	
}
