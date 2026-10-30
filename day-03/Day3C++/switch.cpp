#include <iostream>
using namespace std;

int main()
{
char gender ;
string description;

cout << "Please enter your Gender "<< endl;
cin >> gender;

switch(gender)
{
 case 'f':
 case 'F':
   cout << "You are a female " <<endl;
break;
 case 'm':
  case 'M':
    cout << "You are a male " << endl;
    //cin >> gender;
break;
default:
cout << "Invalid gender" <<endl;


}
return 0;
}
