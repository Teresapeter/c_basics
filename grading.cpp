#include <iostream>
using namespace std;
int main() {
	string studentname="studentname";
	cout<<"Enter student name";
	cin>>studentname;
	int AdmNo;
	cout<<"Enter Admissionnumber";
	cin>>AdmNo ;
	int HCImarks,Networksmarks,Databasemarks,Ethicalhackingmarks,total,average;
	cout<<"Enter HCImarks";
	cin>>HCImarks;
	cout<<"Enter Networksmarks";
	cin>>Networksmarks;
	cout<<"Enter Databasemarks";
	cin>>Databasemarks;
	cout<<"Enter Ethicalhackingmarks";
	cin>>Ethicalhackingmarks;
	total=HCImarks+ Networksmarks + Databasemarks+ Ethicalhackingmarks;
	cout<<"Total marks="<<total<<endl;
	average=total/4;
	cout<<"Average="<<average<<endl;
	cout<<"\nGrade =";
	if(average>=70)
	 cout<<"First class";
	else if (average>=65)
	 cout<<"Second class upper";
	else if (average>=60)
	 cout<<"Second class lower";
	else if (average>=50)
	 cout<<"Pass";
	else cout<<"fail";
	return 0;
	
}
