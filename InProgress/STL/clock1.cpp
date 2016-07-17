#include<iostream>
#include<time.h>

using namespace std;

double multiply(int a, int b){
    return a*b;
}

float multiply(int a, float b){
    return a*b;
}
double multiply(double a, int b){
    return a*b;
}

int main(){
    clock_t start;
    double duration=0;
    int x=1,y=2;
    float z=5.67;
    double k=2314235234514;
    start=clock();
    for(int count =0;count < 1000;count++){
    multiply(x,y);
    multiply(x,z);
    multiply(k,y);
    }
    duration = (clock() - start) / (double) CLOCKS_PER_SEC;
    cout<<"total time taken"<<duration;
    return 0;
}
