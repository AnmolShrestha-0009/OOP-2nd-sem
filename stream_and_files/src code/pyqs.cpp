/*
How random access of data in file can be handled? 
Write a program to store name, roll_no, address and batch of 'n' students
 in a file. Also add a feature to search the student information by roll_no.
*/
#include<iostream>
#include<fstream>
#include<string>
using namespace std;
class student{
public:
char name[50];
char address[50];
int roll;
int batch;
};
int main(){
    int n;
    cout<<"enter the number of the student";
    cin>>n;
    student s[n];
    //storing in file
    ofstream outfile("student.bin",ios::binary | ios::out);
    for(int i=0; i<n; i++){
        cout<<"enter the info for the nth student"<<endl;
        cin>>s[i].name>>s[i].address>>s[i].roll>>s[i].batch;
        outfile.write((char *)&s,sizeof(s));
    }
    outfile.close();
    ifstream infile("student.bin",ios::binary);
    int x;
    cout<<"enter the roll no";

    cin>>x;
    int flag=0;
   for (int i = 0; i < n; i++) {
      
        infile.seekg(i * sizeof(student), ios::beg);
        
        infile.read((char *)&s, sizeof(student));

        if (s[i].roll == x) {
            cout << "\n--- Record Found ---" << endl;
            cout << "Name: " << s[i].name << endl;
            cout << "Address: " << s[i].address << endl;
            cout << "Roll No: " << s[i].roll << endl;
            cout << "Batch: " << s[i].batch << endl;
            flag = 1; 
            break; 
        }
    }
    if(flag==0){
        cout<<"no record found";
    }
    infile.close();
}