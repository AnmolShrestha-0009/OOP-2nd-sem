#include<iostream>
// basic to user defined
using namespace std;
class number{
private:
    int n;
public:
    number(int x){
    n=x;
    }
    void display(){
    cout<<"the private number "<<n<<endl;
    }
};
int main(){
int a=5;
number n1=a;
n1.display();
return 0;
}
//Output:
//the private number 5
