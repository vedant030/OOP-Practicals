#include<iostream>
#include<map>
#include<string.h>
using namespace std;
int main()
{
	map<string,int>state;
	state.insert(pair<string,int>("GOA",1000));
	state.insert(pair<string,int>("FF",2000));
	state.insert(pair<string,int>("GG",3000));
	
	string c;
	cout<<"Enter State Name"<<endl;
	cin>>c;
	map<string,int>::iterator k;
	int f=0;
	for(k=state.begin();k!=state.end();k++)
	{
		if(c==k->first)
		{
			f++;
			cout<<"The Popultion Of "<<k->first<<" = "<<k->second<<endl;
			
		}
	}
	if(f==0)
	
	{
		cout<<"State not found"<<endl;
		return 0;
	}
		
		
}

