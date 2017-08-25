#include<iostream>
using namespace std;
class Date
{
	int date,month,year;
	int d,m,y;
	public:
		void dob()
		{
			cout<<"Enter dob day";
			cin>>date>>month>>year;
			
		}
		void today()
		{
			cout<<"Enter today";
			cin>>d>>m>>y;
		}
		void compare()
		{
			
			if(date>d && month>m)
			{
				
				
					date=d+30-date;
					month=(m+11)-month;
					year=y-1-year;
				}
	              	
		else if(month>m)
		{
			date=d-date;
			month=(m+12)-month;
			year=(y-1)-year;
		}
				else if (date>d)
				
				{
					date=(d+30)-date;
					month=(m-1)-month;
					year=y-year;
				}
				else
			{
				date=d-date;
				month=m-month;
				year=y-year;
			}
		}
		void output()
		{
			cout<<date<<"day"<<month<<"month"<<year<<"Year";
		}
};
int main()
{
	Date d;
	d.dob();
	d.today();
	d.compare();
	d.output();
}
