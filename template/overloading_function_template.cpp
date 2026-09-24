#include<iostream>
using namespace std;
template <class T>
T find_max(T a ,T b){
    cout<<"[Template 1 two values]"<<endl;
if(a>b){
    return a;
}
else{
    return b;
}
}
template <class T>
T find_max(T a ,T b, T c){
        cout<<"[Template 2 three values]"<<endl;

   T max =a;
   if(b>max) max=b;
   if(c>max) max=c;
   return max;
}

template <class T>
T find_max(T arr[], int size){
cout<<"[Template 3 arrays]"<<endl;

T max=arr[0];
for(int i=0; i<size; i++){
    if(max<arr[i]){
        max=arr[i];
    }
}
return max;
}
int main(){
int a=1;
int b=3;
cout<<find_max(a,b)<<endl;
float x=4.3;
float y=1.1;
float z=33.3;
cout<<find_max(x,y,z)<<endl;

}
