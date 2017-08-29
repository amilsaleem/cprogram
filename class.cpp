#include<iostream>
using namespace std;
class wife;
class hus
{
	int income;
	public:
		void input();
		void output()
		{
			cout<<"Husband Money Left"<<endl;
			cout<<income<<endl;
			
		}
		friend class wife;
		
};
void hus::input()
{
	cout<< "Enter Husband Income"<<endl;
	cin>>income;
}
class wife
{
	int income ;
	public:
		void input()
		{
			cout<<"Enter wife Income"<<endl;
			cin>>income;
		}
		void output()
		{
			cout<<"Total Wife Money"<<endl;
			cout<<income<<endl;
		}
		void geti(hus &i,wife &ii)
		{
			ii.income = ii.income +i.income;
			i.income=0;
		}
};
int main()
{
	hus a;
	wife b;
	a.input();
	b.input();
	b.geti(a,b);
	a.output();
	b.output();
	
}
