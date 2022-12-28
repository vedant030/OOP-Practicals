#include<iostream>
#include<stdlib.h>
using namespace std;

template<class t>
class sort
{	
	public:
	t a[10],temp;
	int i,j,k,n;
	
	void getdata()
	{
		cout<<"Enter number of elements:";
		cin>>n;
		for(i=0;i<n;i++)
		{
			cout<<"Enter"<<i+1<<" element"<<endl;
			cin>>a[i];
		}
		cout<<"\nY bour orignal array is :";
		for(i=0;i<n;i++)
		{
			cout<<a[i]<<" ";
		}
				
	}
	void process()
	{
		for(i=0;i<n-1;i++)
		{
			for(j=i;j<n;j++)
			{
				if(a[i]>a[j])
				{
					temp=a[i];
					a[i]=a[j];
					a[j]=temp;
				}
			}
			cout<<"\n Pass"<<i+1<<":";
			for(k=0;k<n;k++)
			{
				cout<<a[k]<<" ";
			}
		}
	}
	void display()
	{
		cout<<"\nYour sorted array :";
		for(i=0;i<n;i++)
		{
			cout<<a[i]<<" ";
		}
		cout<<endl;
	}
};
int main()
{
	int ch;
	do
	{
		cout<<"\n 1.Sorting for int";
		cout<<"\n 2.Sorting for float";
		cout<<"\n 3.EXIT";
		cout<<"\n Enter your choice :";
		cin>>ch;
		
		switch(ch)
		{
			case 1:
				{
					sort<int>obj1;
					obj1.getdata();
					obj1.process();
					obj1.display();
					break;
				}
			case 2:
				{
					sort<float>obj2;
					obj2.getdata();
					obj2.process();
					obj2.display();
					break;
					
				}
			case 3:
				{
					cout<<"program exited";
					exit(0);	
				}
			default:
				cout<<"invalid choice";
		}
	}
	while(ch!=3);
	return 0;
}
