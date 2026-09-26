#include<iostream>
/*
design
                employee
             /       |       \
                     |        \
            /         |        \
          manager     teacher   software_engineer
*/

using namespace std;
class employee{
protected:
    string name;
    double salary;
public:
    employee(string n,double  s){
    name=n;
    salary=s;
    }
    void display(){
    cout<<"Name is : "<<name<<endl;
    cout<<"Salary is : "<<salary<<endl;
    }

};
class manager: public employee{
private:
    string hidegree;
public:
    manager(string n,double s):employee(n,s){}
    void getdata(){
        cout<<"Enter highest degree :";
        cin>>hidegree;
    }
    void display(){
         employee::display();
         cout<<"The highest degree of manager is : "<<hidegree;
    }
};
class teacher: public employee{
private:
    int nperiods;
public:
    teacher(string n,double s):employee(n,s){}
    void getdata(){
        cout<<"Enter no of periods :";
        cin>>nperiods;
    }
    void display(){
         employee::display();
         cout<<"The no of periods are : "<<nperiods;
    }
};
class software_engineer: public employee{
private:
    string planguage;
public:
    software_engineer(string n,double s):employee(n,s){}
    void getdata(){
        cout<<"Enter programming language :";
        cin>>planguage;
    }
    void display(){
         employee::display();
         cout<<"The programming language is: "<<planguage;
    }
};

int main(){
manager m("X",120000);
m.getdata();
cout<<"---manager info----"<<endl;
m.display();
cout<<endl<<endl;

cout<<"---teacher info----"<<endl;
teacher t("Y",80000);
t.getdata();
t.display();
cout<<endl<<endl;

cout<<"---software_engineer info----"<<endl;
software_engineer se("Z",100000);
se.getdata();
se.display();
cout<<endl<<endl;

return 0;

}
