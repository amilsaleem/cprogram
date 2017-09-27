#include<iostream>
#include<string.h>
using namespace std;
class lab
{
	int qty[2];
	char name[2][20];
	char item[20];
	int price[2];
	int c;
	public:
		lab()
		{
			qty[0]=0;
			name[0][0]='\0';
			item[0]='\0';
			c=0;
			
		}
	void add()
	{
		int d=0;
		int i,f=d,d++;
		for(i=f;i<=f;i++)
		{
		
		cout<<"enter the item : "<<endl;
		cin>>name[i];
		cout<<"enter the quantity : "<<endl;
		cin>>qty[i];
		cout<<"Enter price"<<endl;
		cin>>price[i];
		
	}
	f++;
		input();
		
		
	
		
	}            
	void status()
	{
		cout<<"-------------------------------------------------------"<<endl;
		cout<<"Name"<<"\t";cout<<"quantity :"<<"\t";cout<<"Price"<<endl;
		cout<<"-------------------------------------------------------"<<endl;
	
		int i;
		
	//for(i=0;i<2;i++)
	//{
	//cout <<i<<"AWSE";cout<<c;
		cout<<name[0]<<"\t";cout<<qty[0]<<"\t\t";cout<<price[0]<<endl;
		cout<<name[1]<<"\t";cout<<qty[1]<<"\t\t";cout<<price[1]<<endl;
	  //}
		cout<<"-------------------------------------------------------"<<endl;
		//cout<<"Price :"<<price<<endl;
		input();
	}
	void issue()
	{
		//char a[20];
		cout<<"enter item"<<endl;
		cin>>item;
		
		for(int i=0;i<c;i++)
		if(strcmp(name[i],item)==0)
		{
			qty[i]=qty[i]-1;
			cout<<"item issued"<<endl;
			
			input();
		}
	    
		else
		{
			cout<<"Item not found"<<endl;
			input();
		}
	}

	void retun()
	{
		cout<<"item name"<<endl;
		cin>>item;
		for(int i=0;i<c;i++)
		if(strcmp(item,name[i])==0)
		{
			qty[i]+=1;
			cout<<"Thank for giving";
			input();
		}
		else
		{
			cout<<"item doesn't receive"<<endl;
			input();
		}
	}
		
	int exit()
	{
		cout<<"Thanks for Using";
		
		return 0;
	}	
	                                        
	

void input()
	{
		
	int b;
	cout<<"---------------Chouse an option---------------"<<endl;
	cout<<"---------------1. Add Item--------------------"<<endl;
	cout<<"---------------2. Issue item------------------"<<endl;
	cout<<"---------------3. return item-----------------"<<endl;
	cout<<"---------------4. status----------------------"<<endl;
	cout<<"---------------5. Exit------------------------"<<endl;
	cin>>b;
	if(b==1)
	{
		
		add();
		//c++;
		
	}
	else if(b==2)
	{
		issue();
	}
	else if(b==3)
	{
		retun();
	}
	else if(b==4)
	{
		status();
	}
	else if(b==5)
	{
		exit();
	}
}
};
int main()
{
	lab a;
	a.input();
}
