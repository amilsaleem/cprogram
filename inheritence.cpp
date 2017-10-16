#include<iostream>
using namespace std;
class person
{
	int id,age;
	char name[20];
	public:
		getPerson(){
			cout<<"Enter id and age"<<endl;
			cin>>id>>age;
			cout<<"Enter name"<<endl;
			cin>>name;
		}
		putPerson(){
			cout<<"Id : "<<id<<endl;
			cout<<"Age : "<<age<<endl;
			cout<<"Name : "<<name<<endl;
		}
};
class student : protected person
{
	int marks1,marks2,total,per;
	public:
		void getStudent(){
			getPerson();
			cout<<"Enter marks of two subject"<<endl;
			cin>>marks1>>marks2;
			
			
		}
		void cal(){
			total=marks1+marks2;
			per=(total*100)/40;
		}
		void show(){
			putPerson();
			if(per>40)
			{
				cout<<"Pass"<<endl;
			}
			else
			{
				cout<<"Fail"<<endl;
			}
			cout<<"Total marks : "<<total<<endl;
			cout<<"Percentage : "<<per<<"%";
			
		}
};
int main()
{
	student a;
	a.getStudent();
	a.cal();
	cout<<"Result"<<endl;
	a.show();
}
