#include <iostream>
using namespace std;
int main()
{
   int a;

  
   cout<<"Introduce año:  "<<endl; 
   cin >> a;
  
   if(a%4==0 and a%100!=0 or a%400==0) 
      cout << "Bisiesto" << endl;
   else
      cout << "No es bisiesto" << endl;

   system("pause"); 
}
