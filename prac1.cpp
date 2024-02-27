#include<iostream>
using namespace std;
class etl{
private:
int a,b,c,d;
public:
int k;
void pl(int arr[]){
a=arr[0];
b=arr[1];
c=arr[2];
d=arr[3];
}
void dips(){
    cout<<a<<endl; cout<<b<<endl; cout<<c<<endl; cout<<d<<endl; cout<<k<<endl;
}
};
int main(){
    etl p;
    int l[]={2,3,4,5,6,7};
    p.pl(l);
  //  p.a=0;  --> won't work as a is private
    p.k=9;
    p.dips();
    return 0;
}