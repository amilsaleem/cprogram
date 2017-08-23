#include<iostream>
using namespace std;

class raksha
{
	int money;
	public:
		void input();
		void output();
	
		void getgift(raksha &a,raksha &b);
		
};
void raksha::input()
{
	cout<< "Enter money";
	cin >>money;
}
void raksha::output()
{
		
			cout<<"money"<<money<<endl;
			
		
}
void  raksha::getgift(raksha &a,raksha &b)

{
	money=a.money+b.money;
	a.money=0;
	b.money=0;
	
	
}
int main()
{
	raksha s,e1,e2;
	e1.input();
	e2.input();
	s.getgift(e1,e2);
	s.output();
	e1.output();
	e2.output();
}
