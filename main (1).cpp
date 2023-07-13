/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <string>
using namespace std;
/*Name:SURUTHI S
College name:Vivekanandha College of Engineering for women, Tiruchengode, Namakkal. 
datas used:location,temperature*/

int main() {
   string location;
   double weeklyTemp[5];
   double totalTemp = 0;
   double averageTemp;

   cout << "Enter location: ";
   getline(cin, location);

   for (int i = 0; i < 5; i++) 
   {
      cout << "Enter temperature for day " << i+1 << ": ";
      cin >> weeklyTemp[i];
      totalTemp += weeklyTemp[i];
   }

   averageTemp = totalTemp / 5;

   cout << "Weekly weather report for " << location << ":" << endl;
   for (int i = 0; i < 5; i++) {
      cout << "Day " << i+1 << ": " << weeklyTemp[i] << " degrees " << endl;
   }
   cout << "Average temperature: " << averageTemp << " degrees " << endl;

   return 0;
}

