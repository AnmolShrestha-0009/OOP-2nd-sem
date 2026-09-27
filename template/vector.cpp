#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
template <class T>
void get_number(){
vector <T> v;
cout<<"Enter the number in container";
T a;
for(int i=0; i<5; i++){
        cin>>a;
        v.push_back(a);
}
reverse(v.begin(),v.end());
typename vector<T>::iterator it;
for(it=v.begin(); it!=v.end(); it++){
    cout<<*it<<endl;
}
}


int main(){
get_number<int>();
}
