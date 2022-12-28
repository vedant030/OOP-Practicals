/*Write a C++ program that creates an output file, writes information to it, closes the file, open it
again as an input file and read the information from the file.*/
#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	ofstream fout("Vedant.txt");
	
	
	char name[50];
	char add[50];
	char div;
	char DOB[10];
	int rno,phno;
	
	
	cout<<"Enter name :";
	//cin.ignore();
	cin.getline(name,50);
	fout<<name<<"\n";
	cout<<"Enter address :";
	//cin.ignore();
	cin.getline(add,50);
	fout<<add<<"\n";
	cout<<"Enter roll no.:";
	cin>>rno;
	fout<<rno<<"\n";
	cout<<"Enter ph no.:";
	cin>>phno;
	fout<<phno<<"\n";
	cout<<"Enter Div.:";
	cin>>div;
	fout<<div<<"\n";
	cout<<"Enter DOB :";
	cin>>DOB;
	fout<<DOB<<"\n";
	fout.close();
	
	
	ifstream inf;
	inf.open("Vedant,txt");
	inf>>rno;
	inf>>name;
	inf>>div;
	inf>>add;
	inf>>phno;
	inf>>DOB;
	
	cout<<rno<<"\n"<<name<<"\n"<<DOB<<"\n"<<add<<"\n"<<phno<<"\n"<<div;
	inf.close();
	return 0;
	
}

