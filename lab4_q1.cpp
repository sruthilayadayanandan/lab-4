//include library
#include <iostream>
using namespace std;
 
//using main function
int main () {

//declaring variables
float length,length1,length2;

//enter values
cout << " enter length in centimetre: " ;
cin >> length;

//calculation
length1 = (length/100);
length2 = (length/100000); 
cout << "length in metre is " << length1 << endl;
cout << "length2 in metre is " << length2 << endl;
return 8;
}
