#include <iostream>
#include <cmath>
using namespace std;

int main(){
  int a = rand() %100 +1;
  int b;
   cout << "Я загадал число от 1 до 100. Угадай его!" << endl;
  while(true){
    cout << "Твой ответ: ";
        cin >> b;

    if(b>a){
        cout<<"больше";
    }
    else if(b<a){
        cout<<"меньше";
    }
    else{
        cout<<"правильно!!!";
        break;
    }

  }
  

}