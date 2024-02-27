#include<iostream>
using namespace std;
void polo(int *arr[]){
    cout<<*arr[0]<<*arr[1]<<endl;
}

int main(){
int p[]={2,3,4,5,6,7,8};
int *a[]={p,p+1,p+2,p+3,p+4,p+5,p+6};
int *b;
b=&p[0];
polo(a);
cout<<addressof(p[0])<<endl;
cout<<*(b)<<endl;
    return 0;
}