#include<iostream>
#include<string>
using namespace std;
/*
Implementing the postfix ,prefix  
prefix as friend function
post fix as memeber function
*/
class number{
private:
int count=0;
public:
number(int a){
    count=a;
}
int display(){
    return count;
}
friend number operator ++(number &n);
number operator ++(int){
    count++;
    return *this;
}
};
number operator ++(number &n){
    ++n.count;
    return n;
}
int main(){
    number n1(3);
    cout<<n1.display()<<endl;
    n1++;
    cout<<"After post-fix increment ";
    cout<<n1.display()<<endl;
    ++n1;
     cout<<"After pre-fix increment ";
    cout<<n1.display()<<endl;
    return 0;
}
/*
Output:
3
After post-fix increment 4
After pre-fix increment 5 
*/