#include <iostream>
using namespace std;
int main()
{
	int a = 10;
	int b = 5;
	// Arithematic Operators
	cout << "result of arithematic operators are " <<endl;
	cout << "Addition of a and b is" << a+b <<endl;
	cout << "subtraction of a and b is" << a-b <<endl;
	cout << "multiplication of a and b is" << a*b <<endl;
	cout << "division of a over b is" << a/b <<endl;
	cout << "modulus of a over b is" << a%b <<endl;
	cout << "increases the value of a variable by 1 using post increament " << a++ << endl;
	cout << "increases the value of a variable by 1 using pre increament " << ++a << endl;
	cout << "decrease the value of a variable by 1 using post decreament " << b-- << endl;
	cout << "decrease the value of a variable by 1 using pre decreament " << --b << endl;
	cout << "****************"<< endl;
	// assignment operater
	cout<<"result of assignment and compound assignment operatos are " <<endl;
	int marks = 10;
	cout << " The marks are "<< marks<< endl;
	// compound assignment or additional assignment operator
	marks +=10;
	marks -= 2;
	marks *= 2;
	marks /= 2;
	marks %= 2;
	// comparison operators
	cout << (a>b)<< endl;
	cout << (a<b)<< endl;
	cout << (a>=b)<< endl;
	cout << (a<=b)<< endl;
	cout << (a!=b)<< endl;
	cout << (a==b)<< endl;
	// logical operators
	bool isstudent = true;
	bool isboy = true;
	cout << "result of logical operators are "<< endl;
	cout << (isstudent && isboy) << endl;
	cout << (isstudent || isboy) << endl;
	cout << !(isstudent) << endl;
		return 0;
	
	
}
