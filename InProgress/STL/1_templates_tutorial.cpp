#include<iostream>

using namespace std;

void multiply(int a, int b){
    cout<<a*b<<endl;
}

//void multiply(int a, float b){
//    cout<<a*b<<endl;
//}

int main(){
    int x=1,y=2;
    float z=5.67;

    multiply(x,y); //2
    multiply(x,z); //5

    return 0;
}
