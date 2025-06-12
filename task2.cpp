#include <iostream>
#include <string>
using namespace std;

int main(){
  string a;
  cout<<"What is your name ?  ";
  cin>>a;
  int c =0;
  string b = "AaEeIiOoUu";
  for(int i =0;i<a.length();i++){
    for(int j =0;j<b.length();j++){
        if(a[i]==b[j]){
            c+=1;
        }
    }
  }
  cout<<c;

}