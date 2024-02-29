// private function
// nested functions using classes
#include<iostream>
using namespace std;
class ek{
private:
    int a, b;
    void crack();
    void jolo();
    void polo();
public:
    void kolo(int a1, int b1);
};
void ek::kolo(int a1, int b1){
    a = a1;
    b = b1;
    polo();
}
void ek::polo(){
    crack();
    jolo();
}
void ek::crack(){
    int c;
    c = a + b;
    cout << c << endl;
}
void ek::jolo(){
    cout << a * b;
    
}
int main(){
    ek k;
    k.kolo(5, 90);
    return 0;
}
