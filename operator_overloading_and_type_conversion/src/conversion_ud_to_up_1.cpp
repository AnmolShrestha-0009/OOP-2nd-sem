#include<iostream>
#include<cmath>
using namespace std;
// in source class cartesian into polar (code in cartesian)

class polar{
    private:
    double radius;
    double angle;
public:
    polar(double r, double a) : radius(r), angle(a) {}
    void display() const {
        std::cout << "Polar -> Radius: " << radius << ", Angle: " << angle << " rad\n";
    }
};
class cartesian{
int x;
int y;
public:
    cartesian(int a,int b){
    x=a;
    y=b;
    }
    operator polar() const{
     double m=sqrt(pow(x,2)+pow(y,2));
    double n=atan2(y,x);
    return polar(m,n);
    }

};
int main(){
cartesian c1(4,3);
polar p=c1;
p.display();
return 0;
}
//output:
//Polar -> Radius: 5, Angle: 0.643501 rad
