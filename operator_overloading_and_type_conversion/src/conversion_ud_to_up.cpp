#include<iostream>
#include<cmath>
using namespace std;
//in destination from cartesian to polar
class cartesian{
public:
    int x;
    int y;
    cartesian(int a,int b): x(a),y(b){}
};
class polar{
private:
    float angle;
    float radius;
public:
    polar(cartesian &c){
    radius=sqrt(pow(c.x,2)+pow(c.y,2));
    angle=atan2(c.y,c.x);
    }
    void display(){
    cout<<"radius is :"<<radius<<endl
    <<"angle is : "<<angle;
    }
};
int main(){
cartesian c1(4,3);
polar p=c1;
p.display();
return 0;
}
//output:
//radius is :5
//angle is : 0.643501

