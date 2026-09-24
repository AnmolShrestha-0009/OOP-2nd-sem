#include<iostream>
using namespace std;
template <class t>
class stack{
private:
    t arr[10];
    int top;
public:
    stack();
    void push(t data);
    t pop();
    int size();
};
template <class t>
stack<t>:: stack(){
top=-1;
}

template <class t>
void stack<t> ::push(t data){
arr[++top]=data;
}

template <class t>
t stack<t> ::pop(){
return arr[top--];
}

template <class t>
int stack<t>::size(){
return top+1;
}
int main(){
stack<int> s1;
cout<<"The size of array is "<<s1.size()<<endl;
s1.push(10);
s1.push(20);
s1.push(30);
s1.pop();
cout<<"The size of array is "<<s1.size()<<endl;


stack<float> s2;
cout<<"The size of array is "<<s2.size()<<endl;
s2.push(1.10);
s2.push(3.30);
s2.pop();
cout<<"The size of array is "<<s2.size()<<endl;
return 0;
}
