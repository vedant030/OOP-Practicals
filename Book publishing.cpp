#include<iostream>
#include<string.h>
using namespace std;

class publication
{
	private:
		string title;
		float price;
		
	public:
		publication()
		{
			title="";
			price=0;
		}
	void getdata()
	{
		cout<<"Enter the TITLE:";
		cin.ignore();
		getline(cin,title);
		cout<<"Enter the price:";
		cin>>price;
	}
	void putdata()
	{
		cout<<"\nInformation:"<<endl;
		cout<<"\n TITLE:"<<title;
		cout<<"\n Price:"<<price;	
	}
	
};

class book:public publication
{
	private:
		int page;
	public:
	book()
	{
		page=0;
	}
	void getdata()
	{	
		publication::getdata();
		cout<<" Enter Pages :";
		cin>>page;
	}
	void putdata()
	{
		publication::putdata();
		try
		{
			if(page<0)
			throw page;
		}
		catch(int f)
		{
			cout<<"\n error:pages invalid "<<f;
			page=0;
		}
		cout<<"\n Pages are :"<<page;
		
	}	
};
class tape:public publication
{
	private:
		float pt;
	public:
	tape()
	{
		pt=0;
	}
	void getdata()
	{	
		publication::getdata();
		cout<<"Enter Playtime(min) :";
		cin>>pt;
	}
	void putdata()
	{
		publication::putdata();
		try
		{
			if(pt<0.0)
			throw pt;
		}
		catch(float r)
		{
			cout<<"\n error:playtime invalid "<<r;
			pt=0.0;
		}
		cout<<"\n PLAYTIME(MIN) :"<<pt;
		
	}	
	
};
int main()
{
	book b[10];
	tape t[10];
	int ch=0,bookcount=0,tapecount=0;
	do 
	{
		cout<<"\n MENU \n";
		cout<<"\n 1.Add book";
		cout<<"\n 2.Add tape";
		cout<<"\n 3.Display book";
		cout<<"\n 4.Display tape";
		cout<<"\n 5.Exit";
		cout<<"\n Enter your choice:";
		cin>>ch;
		
		switch(ch)
		{
			case 1:
				{
					cout<<"\nADD BOOK :\n";
					b[bookcount].getdata();
					bookcount++;
					break;		
				}
			case 2:
				{
					cout<<"\nADD TAPE :\n";
					t[tapecount].getdata();
					tapecount++;
					break;	
				}
			case 3:
				{
					cout<<"\n BOOKS :"<<endl;
					for(int i=0;i<bookcount;i++)
					{
						b[i].putdata();
					}
					break;
					
				}
			case 4:
				{
					cout<<"\n TAPES  :"<<endl;
					for(int i=0;i<tapecount;i++)
					{
						t[i].putdata();
					}
					break;
					
				}
			case 5:
				{
					cout<<" \n program exited ";
					exit(0);
				}
			default:
				{
					cout<<"invalid choice";
				}
		}
	}
	while(ch!=5);
	return 0;
}
