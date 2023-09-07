#include <iostream>
#include <typeinfo>
using namespace std;
int main(){
  int marks = 44;
  float average = 1.2;
  char name[] = "Mahnoor";
  cout << "the data type of marks is" << typeid(marks).name() << endl;
  cout << "the data type of average is" << typeid(average).name() << endl;
  cout << "the data type of name is" << typeid(name).name() << endl;
  return 0;
  
  }
