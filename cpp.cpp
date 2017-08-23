#include <iostream.h>


class person

{
	char name[20];
	int age,marks;
	public:
		void data();
		void out();
}; 
void data()
	{
		cout << " Enter a name";
		cin >>name;
		cout << " enter age";
		cin >>age;
		cout << "enter mark";
		cin>> marks;
	}
	void out()
	{
		cout<<name;
		cout<<age;
		cout<< mark;
	}
};
int main()
{
	person e1;
	e1.data();
	e1.out();
return 0;
}
