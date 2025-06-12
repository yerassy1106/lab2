#include <iostream>
#include <string>
using namespace std;

int main(){
  string a;
  cout<<"write any word ";
  getline(cin,a);
  int b =0;
  for(int i =0;i<a.length();i++){
    if(a[i] == ' '){
        continue;
    }
    else if(a[i]!=' '){
    b++;
  }
}
  cout<<"The number of words  "<<b;

}