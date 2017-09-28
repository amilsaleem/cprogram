#include<iostream>
using namespace std;
class pic
{
	string name;
	int roll;
	static int person;
	static int group;
	public:
		void add()
		{
			person++;
			if(person==7)
			{
				group++;
				person=0;
				
			}
		}
		void input()
		{
			cout<<"Enter name";
			cin>>name;
			cout<<"Enter roll number";
			cin>>roll;
		}
		static void total()
		{
			cout<<"total student  gone by cycle : "<<person<<endl;
			cout<<"Total group gone by bus : "<<group;
		}
};
int pic::person=0;
int pic::group=0;
int main()
{
	pic a,b,c,d,e,f,g,h;
	a.add();
	a.input();
	b.add();
	b.input();
	c.add();
	c.input();
	d.add();
	d.input();
	e.add();
	e.input();
	f.add();
	f.input();
	g.add();
	g.input();
	h.add();
	h.input();
	h.total();
	
}
