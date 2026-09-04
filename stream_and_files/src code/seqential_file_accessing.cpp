// /*
// The sequential file accessing consist of :
// put()-->to write a single character
// get()--> to get the single character
// read()/write()--> for binary files
// */
#include<iostream>
#include<string>
#include<fstream>
using namespace std;

int main(){
//----writing using put--------- //
cout<<"writing in file"<<endl;
  ofstream outfile;
    outfile.open("alphabet.txt");
for(int i=97; i<97+26; i++){
    char a=i;
    outfile.put(a);
}
outfile.close();
//reading using get
ifstream infile;
infile.open("alphabet.txt");
  char d;
while(infile){
  
    infile.get(d);
    cout<<d<<"\t";
}
}