/*
copy the content of one file to another file
*/
#include<iostream>
#include<fstream>
using namespace std;
int main(){
    char c;
    ofstream outfile;
    outfile.open("copy.txt",ios::out);
    ifstream infile;
    infile.open("data.txt");
    while(infile){
        infile.get(c);
        outfile.put(c);
    }
    infile.close();
    outfile.close();
    return 0;

}