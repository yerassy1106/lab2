#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double a,b,c;
    cin>>a>>b>>c;
    double p =(a+b+c)/2;
    double S=sqrt(p*(p-a)*(p-b)*(p-c));
    cout<<S;
}