#include <iostream>
#include <math.h>
#include <string>
using namespace std;
main()
{

	float m1,m2,m3,m4,m5,m6,percentage,total;
	char grade;
	string name;
	cout<<"enter the student name \n";
	
	cin>>name;
	cout<<"enter the number of maths \n";
	cin >> m1;
	cout<<"enter the number of english\n";
	cin >>m2;
	cout<<"enter the number of pps with practicle\n";
	cin >>m3;
	cout<<"enter the number of bee with practicle\n";
	cin >>m4;
	cout<<"enter the number of EGD practicle\n";
	cin >>m5;
	cout<<"enter the number of physics with practicle\n";
	cin >>m4;
	cout<<endl<<"total number are : ";
	cin>>total;
	percentage=(m1+m2+m3+m4)/total*100;
	if(percentage>=85)
	grade='A';
	else if(percentage>=70 && percentage<85)
	grade='B';
	else if (percentage>=55 &&percentage<70)
	grade='C';
	else if(percentage>=40 && percentage<55)
	grade='D';
	else
	grade='e';
	cout<<name<<" got grade : "<<grade<<"  with percentage : "<<percentage<<"%";
	
	return 0;
}
