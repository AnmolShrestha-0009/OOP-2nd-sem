#include<iostream>
using namespace std;
class grandparent{
public:
    grandparent(){
    cout<<"constructor from grandparent"<<endl;
    }
    ~grandparent(){
    cout<<"destructor from grandparent"<<endl;
    }
};
class parent:public grandparent{
public:
    parent(){
    cout<<"constructor from parent"<<endl;
    }
    ~parent(){
    cout<<"destructor from parent"<<endl;
    }
};
class child:public parent{
public:
    child(){
    cout<<"constructor from child"<<endl;
    }
    ~child(){
    cout<<"destructor from child"<<endl;
    }
};

int main(){
child c;
return 0;
}
