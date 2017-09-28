#include<iostream>
using namespace std;
class nm
{
	int i,r;
	public:
		nm()
		{
			i=0;
			r=0;
		}
		void input()
		{
			cout<<"enter i and r"<<endl;
			cin>>i>>r;
		}
		void output()
		{
			cout<<i<<" + "<<r<<"i";
		}
		nm operator+(nm obj)
		{
			nm d;
			d.i=i+obj.i;
			d.r=r+obj.r;
			return d;
		
		}
};
int main()
{
	nm a,b,c;
	a.input();
	b.input();
	c=a+b;
	c.output();
}
