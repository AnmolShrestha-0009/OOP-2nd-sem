// //the unformatted input output are
// /*
// width()-->represent total field widht to be display
// fill()-->represent the character to be filled in the unused space
// precision()-->used to represent the total felid width as whole for floating points.(interger part+floating part) 
// setf()-->

// */
#include<iostream>
#include<string>
using namespace std;
int main(){
int a=92;
float b=3.90;
cout.width(10);
cout.fill('*');
cout<<a;

cout<<"\n\n";

cout.precision(2);
cout<<b;

}