#include<iostream>
using namespace std;
void kpol(int arr[2][3][4]){
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            for(int k=0;k<4;k++){
                cin>>arr[i][j][k];
            }
        }
    }
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            for(int k=0;k<4;k++){
                cout<<" "<<arr[i][j][k]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
    }
}

int main(){
int a[2][3][4];
kpol(a);



    return 0;
}