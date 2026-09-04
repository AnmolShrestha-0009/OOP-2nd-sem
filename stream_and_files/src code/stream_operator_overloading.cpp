// //overloading of <<(insertion) and >>(extertion) operator
#include<iostream>
#include<string>
using namespace std;
class student{
    string name;
    int roll;
    float gpa;
    public:
    student(){}
    friend istream &operator>>(istream &in, student &s){
             cout << "Enter name, roll, and GPA: ";
        in>>s.name;
        in>>s.roll;
        in>>s.gpa;
        return in;
    } 
      friend ostream &operator<<(ostream &out, student &s){
        out << "Name: " << s.name << "\nRoll: " << s.roll << "\nGPA: " << s.gpa << "\n";
        return out;
    } 
};
int main(){
student s;
cin>>s;
cout<<s;
return 0;
}