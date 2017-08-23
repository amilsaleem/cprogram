#include<iostream.h>
using namespace std;

class raksha
{
	int money;
	public:
		void input();
		void output();
	
		void getgift();
		
};
void raksha::input()
{
	cout << "Enter money";
	cin >>money;
}
void raksha::output()
{
		
			cout<<money;
			
		
}
void raksha::getgift(raksha &e1,raksha &e2)

{
	money=e1.money+e2.money;
	e1.money=0;
	e2.money=0;
	
	
}
int main()
{
	raksha s,e1,e2;
	e1.input();
	e2.input();
	s.getgift(e1,e2);
	s.output();
}
