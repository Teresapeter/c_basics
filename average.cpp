# include <iostream>
# include <string> // Kama Kuna error hii line delete this line
using namespace std ;
int main () {
  string Name ;
  int AdmNo ;
  int HCI ;
  int Networks ;
  int Database ;
  int Ethicalhacking ;
  int Total ;
  int Average ;
  
   cout << "Enter student name\n";
   cin >> Name ;
   cout << "Enter Admission number\n";
   cin >> AdmNo ;
   cout << "Enter HCI marks\n";
   cin >> HCI ;
   cout << "Enter Networks marks\n";
   cin >> Networks;
   cout << "Enter Database marks\n";
   cin >> Database;
   cout << "Enter Ethical hacking marks\n";
   cin >> Ethicalhacking;
   Total = Networks + Database + Ethicalhacking + HCI ;
   Average = Total/4 ;
   cout <<"Student Name :" <<Name <<"\n";
cout << "Admission number :" <<AdmNo << "\n";
cout << "HCI :" << HCI << "\n";
cout << "Networks :" << Networks << "\n";
cout << "Database :" << Database << "\n";
cout << "Ethical hacking :" << Ethicalhacking << "\n";
cout << "Total marks :" << Total << "\n";
cout << "Average :" << Average << "\n" ;
   cout << "\nGrade = " ;
if ( Average >= 70)
   cout <<"First class" ;
else if ( Average >= 65)
   cout <<"Second class Upper";
else if ( Average >= 60)
   cout <<"Second class Lower";
else if ( Average >= 50)
   cout <<"Pass";
else cout << "Fail";
cout <<endl;

return 0;
}


