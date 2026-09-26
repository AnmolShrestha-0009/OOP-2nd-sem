#include <iostream>
#include <string>
using namespace std;

class person {
protected:
    string name;
    int age;
public:
    person(string n, int a) {
        name = n;
        age = a;
    }
    void display() {
        cout << "name is : " << name << endl;
        cout << "age is : " << age << endl;
    }
};

class student : public person {
protected:
    int roll;
    string course;
public:
    student(string n, int a, int r, string c) : person(n, a) {
        roll = r;
        course = c;
    }
    void display() {
        cout << "The roll no is : " << roll << endl;
        cout << "The course is : " << course << endl;
    }
};

class employee : public person {
protected:
    int emp_id;
    int salary;
public:
    // Fixed: constructor name changed from student to employee and parameters corrected
    employee(string n, int a, int e, int s) : person(n, a) {
        emp_id = e;
        salary = s;
    }
    void display() {
        cout << "The emp_id is : " << emp_id << endl;
        cout << "The salary is : " << salary << endl;
    }
};

class teaching_assistant : public student, public employee {
private:
    int teaching_hour;
public:
    // Fixed: properly pass parameters to person, student, and employee constructors
    teaching_assistant(string n, int a, int r, string c, int e, int s, int t)
        : person(n, a), student( r, c), employee( e, s) {
        teaching_hour = t;
    }
    void display() {
        person::display();
        student::display();
        employee::display();
        cout << "The teaching hour is : " << teaching_hour << endl;
    }
};

int main() {
    // Fixed: class name spelling and added missing comma between roll and course arguments
    teaching_assistant t("anmol", 18, 12, "BCT", 1001, 25000, 5);
    t.display();
    return 0;
}
