#include<iostream>
#include<string.h>

using namespace std;

class student
{
	public:
		int rn,ph;
		char bg[5],name[10],dob[10];
		char div;
		static int count; // static data member
		
		void getdata();
		friend void display(student&obj);
		
		student() //constructor
		{
			rn=0;
			cout<<" constructor \n";
			rn=count;
			count++;
		}
		
		~student() //destructor
		{
			cout<<"Destructor \n";
			cout<<"Destroying object \n";
			count++;
		}
		
		
		static void getcount() //static access
		{
			cout<<"\nConstructor count is:"<<count<<endl;
		}
		student(student&obj) // copy costructor
		{
			rn=obj.rn;
			strcpy(name,obj.name);
			strcpy(dob,obj.dob);
			strcpy(bg,obj.bg);
			div=obj.div;
			ph=obj.ph;
		}
};
	int student::count=0;
	void student::getdata() // function for input
	{
		cout<<"\nEnter roll no:";
		cin>>rn;
		cout<<"\nEnter div:";
		cin>>div;
		cout<<"\nEnter name :";
		cin>>name;
		cout<<"\nEnter phone no.:";
		cin>>ph;
		cout<<"\nEnter blood group:";
		cin>>bg;
		cout<<"\nEnter DOB:";
		cin>>dob;
			
	}
	void display(student&obj) // display using friend function
	{
		cout<<"\n"<<obj.rn;
		cout<<"\t"<<obj.name;
		cout<<"\t"<<obj.bg;
		cout<<"\t"<<obj.dob;
		cout<<"\t"<<obj.div;
		cout<<"\t"<<obj.ph;
		
		
	}
int main()
{
	student s1;
	student s2(s1);// parameter passing 
	student::getcount;// static variable access
	
	student *s[50];
	
	int i,n;
	cout<<"\nHOW MANY OBJECT DO YOU WANT TO CREATE:";
	cin>>n;
	
	for(i=0;i<n;i++) //allocating memory 
	{
		s[i]=new student();
		s[i]->getdata();	
	}
	cout<<"\nROLLNO\tNAME\tBLOOD GROUP\tDOB\tDIV\tPHNO.";
	for(i=0;i<n;i++)
	{
		display(*s[i]);
	}
	student::getcount();
	for(i=0;i<n;i++) // delocating memory
	{
		delete(s[i]);
	}
	return 0;
	
}
