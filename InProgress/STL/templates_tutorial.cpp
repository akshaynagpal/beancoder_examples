#include<iostream>

using namespace std;

template<class TYPE,class TYPE2>

void multiply(TYPE a,TYPE2 b){
    cout<<a*b<<endl;
}

int main(){
    int x=1,y=2;
    float z=5.67;

    multiply(x,y);
    multiply(x,z);

    return 0;
}
