#include<iostream>
using namespace std;
template <class T>
T find_max(T arr[], int size){
T max=arr[0];
for(int i=0; i<size; i++){
    if(max<arr[i]){
        max=arr[i];
    }
}
return max;
}
int main(){
    int a[10]={3,4,5,6,7,1,3,1,1};
    cout<<find_max(a,10)<<endl; //with interger datatype

    float b[4]={2.4,2.5,2.44,2.55};
    cout<<find_max(b,4)<<endl; //with floating data type

    char c[3]={'c','b','a'};
        cout<<find_max(c,3)<<endl; //with characters data type

    return 0;
}
