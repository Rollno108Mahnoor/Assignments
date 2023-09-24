//Program 2: Write a program that inputs name, age and address from the user and display it on the screen.
#include<iostream>
using namespace std;
int main()
{
	char name[7] , address[25];
	int age;
	cin>>name;
	cin>>address;
	cin>>age;
	cout<<"your name is"<<name <<endl;
	cout<<"your address is"<<address <<endl;
	cout<<"your age is "<<age;
	return 0;
	
}

//Program 3: Write a program that inputs base height from the user and calculates area of a triangle by using the formula Area = ½ * Base *Height.
#include<iostream>
using namespace std;
int main()
{
	int base,height;
	float area;
	cin>>base;
	cin>>height;
	area=(1.0/2.0)*base*height;
	cout<<area;
	return  0;
}
//Program 4: Write a program that inputs temperature from the using Celsius and converts it into Fahrenheit using the formula F = 9/5 * C + 32. 
-#include<iostream>
using namespace std;
int main()
{
	float cel, faren;
	cin>>cel;
	cout<<cel;
	faren=(9.0/5.0)*cel+32;
	cout<<"temp in faren"<<faren;
	return  0;	
}
//Program 5: Write a program that inputs 4 numbers and calculates the sum, average, and product of all the numbers.
#include<iostream>
using namespace std;
int main()
{
	int a,b,c,d,sum,avg,pro;
	cin>>a;
	cin>>b;
	cin>>c;
	cin>>d;
	sum=a+b+c+d;
	cout<<sum <<endl;
	avg=sum/4;
	cout<<avg <<endl;
	pro=a*b*c*d;
	cout<<pro <<endl;
	return  0;	
}
//Program 6: write a program that converts a person's height from inches to centimeters using the formula 2.54 * height.
#include<iostream>
using namespace std;
int main()
{
	int height;
	float height_in_cent;
	cin>>height;
	height_in_cent=2.54*height;
	cout<<height_in_cent;
	return  0;	
}
//Program 7: Write a program that inputs radius from the user and calculates area and circumference of circle using formula Area = pir^2.
#include<iostream>
using namespace std;
#define PI 3.141
int main()
{
	float r, area, cir;
	cin>>r;
	area=PI*r*r;
	cout<<area;
	cir= 2*PI*r;
	cout<<r;
	return  0;
}
//Program 8: Write a program that inputs two numbers and exchange their values the program should display the values before and after exchange.
#include <iostream>
using namespace std;
int main()
 {
   int x,y,z;
   cin>>x;
   cin>>y;
   z=x;
   x=y;
   y=z;
   cout<<"value of x after exchange"<<x;
   cout<<"value of y after exchange"<<y;
return 0;
}
//Program 9: Write a program that inputs radius from the user and calculates area and circumference of cube using formula Area = 4pir^2 	Circumference = 4/3pir^3.
#include <iostream>
using namespace std;
#define PI 3.141
int main()
 {
   float r,area,cir;
   cin>>r;
   area=4*PI*r*r;
   cout<<area <<endl;
   cir= 4.0/3.0*PI*r*r*r;
   cout<<cir;
return 0;
}
//Program 10: Write a program that inputs a three digit number from the user and displays it in reverse order. For example if the user enter 123, it displays 321.
#include <iostream>
using namespace std;
int main()
 {
   int n,a,b;
   cin>>n;
   cin>>n;
   cin>>n;
   a=n/100;
   n=n%100;
   b=n/10;
   n=n%10;
   cout<<n;
   cout<<b;
   cout<<a;
return 0;
}
//Program 12: 
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
  int a,b,c;
  float s,area;
  cin>>a;
  cin>>b;
  cin>>c;
  s=(a+b+c)/2.0;
  area=sqrt(s*(s-a)*(s-b)*(s-c));
  cout<<area;
return 0;
  }
  //Program 13: Write a program that inputs temperature in Fahrenheit and convert it into Celsius.
  #include <iostream>
#include <math.h>
using namespace std;

int main()
{
  float faren, cel;
  cin>>faren;
  cel=((faren-32)*5)/9.0;
  cout<<cel;  
 return 0;
  }
  //Program 14: Write a program that inputs a number and finds whether it is even or odd using if-else structure.
  #include <iostream>
#include <math.h>
using namespace std;

int main()
{
  int n;
  cin>>n;
  if(n%2==0)
  cout<<"number is even"<<n;
  else
  cout<<"number is odd"<<n;
    return 0;
  }
  //Program 15: Write a program that inputs salary and grade. It adds 50% bonus if grade is greater than 15. It adds 25% bonus if grade is 15 or less and then displays the salary.
  #include <iostream>
#include <math.h>
using namespace std;

int main()
{
 float salary,bonus;
 int grade;
 cin>>salary;
 cout<<"salary is"<<salary;
 cin>>grade;
 cout<<"grade is" <<grade;
 if(grade>15)
 bonus=salary*(50.0/100.0);
 else 
 bonus=salary*(25.0/100.0);
 salary=salary+bonus;
 cout<<salary;
    return 0;
  }
  //Program 16: Write a program that inputs salary. If salary is 20000 or more, it deducts 7% of salary. If salary is 10000 or more or more but less than 20000, it deducts 1000. If salary is less than 10000, it deducts nothing and then displays net salary.
  #include <iostream>
using namespace std;

int main()
{
   int salary;
   float net;
   cin>>salary;
   if(salary>=20000)
   net=salary-(salary*7.0/100);
   else if (salary>=10000)
   net=salary-1000;
   else
   net=salary;
   cout<<net;
    return 0;
  }
  //Program 17: Write a program that inputs from user and determines whether it is positive, negative or zero.
  #include <iostream>
using namespace std;

int main()
{
  int n;
  cin>>n;
  if(n>0)
  cout<<"number is positive"<<n;
  else if (n<0)
  cout<<"number is negative"<<n;
  else
  cout<<"number is 0"<<n;  
return 0;
  }
  //Program 18: Write a program that inputs test score of a student and displays his grade on the following scale
 Test Score	 	Grade
>=90			A
80-90			B
70-79			C
60-69			D
Below 50		 F

#include <iostream>
using namespace std;
int main()
{
 int score;
 cin>>score;
 if(score>=90)
 cout<<"grade is A";
 else if (score>=80)
 cout<<"grade is B";
 else if (score>=70)
 cout<<"grade is C";
else if (score>=60)
 cout<<"grade is D"; 
else
cout<<"grade is F";
    return 0;
  }
  //Program 19: Write a program that inputs radius. It calculates area of circle if user enters1 as choice. It calculates circumference if the user enters 2 as choice. It displays error message in case of any other choice.
  #include <iostream>
using namespace std;

int main()
{
 float area, radius, circumference;
 int choice;
 cin>>radius;
 cout<<"enter 1 for area or 2 for circumference"<<choice;
  if(choice==1)
  {
    area=radius*radius*3.14;
    cout<<area;
    
    }
    else if (choice==2)
    {
      circumference=2.0*3.141*radius;
      cout<<circumference;
      }
      else 
      cout<<"invalid choice"<<choice;
    return 0;
  }
  //Program 20: Write a program that inputs temperature and displays a message according to following table:
Temperature				Message
Greater than 35			Hot Day
Between 25 and 25			Pleasant Day
Less than 25				Cool Day

#include <iostream>
using namespace std;

int main()
{
 int t;
 cin>>t;
 if(t>35)
 cout<<"hot day";
 else if(t>=25)
 cout<<"pleasent day";
 else
 cout<<"cool day";
 return 0;
    
  }
  //Program 21: Write a program that inputs three numbers and displays the smallest number by using nested if condition.
  #include <iostream>
using namespace std;

int main()
{
 int a,b,c;
 cin>>a;
cin>>b;
cin>>c;
if(a<b)
{
  if(a<c)
  cout<<"smallest num "<<a;
  else
  cout<<"smallest num"<<c;
  } 
else
{
  if(b<c)
  cout<<"smallest num"<<b;
  else
  cout<<"smallest num"<<c;
  }
 return 0;
  }
  //Program 23: Write a program that inputs a character and displays whether it is vowel or consonant using switch statement.
  #include <iostream>
using namespace std;

int main()
{
  char c;
  cin>>c;
  switch(c)
  {
    case'a':
    case'A':
    cout<<"you enter vowel";
    break;
    case'e':
    case'E':
    cout<<"you enter vowel";
    break;
    case'i':
    case'I':
    cout<<"you enter vowel";
    break;
    case'o':
    case'O':
    cout<<"you enter vowel";
    break;
    case'u':
    case'U':
    cout<<"you enter vowel";
    break;
    default:
    cout"you enter consonant";
    }
 return 0;
  }
  //Program 24: Write a program that inputs two numbers and one arithmetic operator. It applies arithmetic operation on two numbers on the basis of operator entered by user using switch statement.
  #include <iostream>
using namespace std;
 int main()
{
  int a,b;
  char op;
  cin>>a;
  cin>>op;
  cin>>b;
  
  switch(op)
  {
    case'+':
    cout<<a+b;
    break;
    case'-':
    cout<<a-b;
    break;
    case'*':
    cout<<a*b;
    break;
    case'/':
    cout<<a/b;
    break;
    case'%':
    cout<<a%b;
    break;
    default:
    cout<<"imvalid operator";
  }
    return 0;
  }
  //Program 25: Write a program that displays counting from 1 to 10 using while loop.
  #include <iostream>
using namespace std;
 int main()
{
  int n;
  n=1;
  while(n<=10)
  {
    cout<<n;
    n++;
    }
    return 0;
  }
  //Program 26: Write a program that displays first five numbers and their sum using while loop.
  #include <iostream>
using namespace std;
 int main()
{
  int n, sum;
  n=1;
  sum=0;
  while(n<=5)
  {
    cout<<n;
    sum=sum+n;
    n++;
    }
    cout<<sum;
    return 0;
  }
  //Program 27: Write a program that displays first five numbers with their squares using while loop.
  #include <iostream>
using namespace std;
 int main()
{
  int n;
  n=1;
  while(n<=5)
  {
    cout<<n;
    cout<<n*n;
    n++;
    }
    return 0;
  }
  //Program 29: Write a program that inputs a number from the user and displays a table of that number using while loop.
  #include <iostream>
using namespace std;
 int main()
{
  int n,c;
  c=1;
  cin>>n;
  while(c<=10)
  {
    cout<<n;
    cout<<c;
    cout<<n*c;
    c=c+1;
    }
    return 0;
  }
  //Program 30: Write a program that inputs a number from the user and displays the factorial of that number using while loop.
  #include <iostream>
using namespace std;
 int main()
{
  int n,c,f;
  c=1;
  f=1;
  cin>>n;
  while(c<=n)
  {
    f=f*c;
    c=c+1;
    }
    cout<<n << endl;
    cout<<f;
    return 0;
  }
  //Program 31: Write a program that displays the sum of following series using while loop.
1 + 1 / 2 + 1 / 4 + 1 / 6 +  . . . . . . . + 1 / 100.
#include <iostream>
using namespace std;
 int main()
{
  float c,r;
  c=2.0;
  r=1.0;
  while(c<=100)
  {
   r=r+1.0/c;
    c=c+2;
    }
    cout<<r << endl;
    return 0;
  }
  //Program 32: 
  #include <iostream>
using namespace std;
 int main()
{
  float c,r;
  c=3.0;
  r=1.0;
 do
  {
   r=r+1.0/c;
    c=c+2;
    }
    while(c<=99);
    cout<<r << endl;
    return 0;
  }
  //Program 33: Write a program that inputs starting and ending point from the user and displays all odd numbers in the given range using do-while loop.
  #include <iostream>
using namespace std;
 int main()
{
  int c,s,e;
  cin>>s;
  cin>>e;
  c=s;
 do
  {
   if(c%2!=0)
   cout<<c;
   c++;
    }
    while(c<=e);
    return 0;
  }
  //Program 34: Write a program that inputs two numbers from the user and displays the result of first number raise to the power of second number using do-while loop.
  #include <iostream>
using namespace std;
 int main()
{
  int a,b,c,r;
  cin>>a;
  cin>>b;
  c=1;
  r=1;
 do
  {
   r=r*a;
   c++;
    }
    while(c<=b);
    cout<<r;
    return 0;
  }
  //Program 35: 
  #include <iostream>
using namespace std;
 int main()
{
  int a,b;
  a=0;
  b=1;
 while(a<=6)
  {
    cout<<a;
    cout<<b;
    a++;
    b=b*2;
  }
    return 0;
  }
  //Program 36: Write a program that inputs a number from the user and displays the factorial of that number using do-while loop.
  #include <iostream>
using namespace std;
 int main()
{
  int c,num,f;
  c=1;
  f=1;
  cin>>num;
 do
  {
    f=f*c;
    c++;
  }
  while(c<=num);
  cout<<num;
  cout<<f;
    return 0;
  }
  //Program 37: Write a program that displays alphabets from A to Z using for loop.
  #include <iostream>
using namespace std;
 int main()
{
  char ch;
  for(ch='A';ch<='Z'; ch++)
  cout<<ch;
    return 0;
  }
  //Program 38: Write a program that displays product of all odd numbers from 1 to 10 using for loop.
  #include <iostream>
using namespace std;
 int main()
{
 long int product;
 int c;
 product=1;
  for(c=1;c<=10; c=c+2)
  product*=c;
  cout<<product;
    return 0;
  }
  //Program 39: Write a program that inputs a number from the user and displays the factorial of that number using for loop.
  #include <iostream>
using namespace std;
 int main()
{
 int n,c,f;
 f=1;
 cin>>n;
  for(c=1;c<=n; c=c+1)
  f=f*c;
  cout<<n;
  cout<<f;
    return 0;
  }
  //Program 40: Write a program that inputs table number and length of table and then displays the table using for loop.
  #include <iostream>
using namespace std;
 int main()
{
 int tab,len,c;
 cin>>tab;
 cin>>len;
  for(c=1;c<=len; c=c+1)
  cout<<"tab"<<"x"<<"c"<<"="<<tab*c;
    return 0;
  }
  //Program 43: Write a program that finds sum of the squares of integers from 1 to n. Where n is appositive value entered by the user (i.e. sum = 12 + 22 + 32 + ….. + n2).
  #include <iostream>
using namespace std;
 int main()
{
 int n,c;
 long int sum;
 sum=0;
 cin>>n;
  for(c=1;c<=n; c++)
  sum =sum+(c*c);
  cout<<sum;
    return 0;
  }
  //Program 50: Write a program that displays the following shape using nested loops. The outr loop should be for loop and inner loop should be while loop.*******
******
*****
****
***
**
*

  #include <iostream>
using namespace std;
 int main()
{
 int a,b;
 for(a=1;a<=7;a++)
 {
   b=a;
   while(b<=7)
   {
     cout<<"*";
     b++;
   }
   cout<<"\n";
   }
    return 0;
  }
  //Program 51: Write a program that displays the following block using nested for loop.
*****
*****
*****
*****
*****
#include <iostream>
using namespace std;
 int main()
{
 int a,b;
 for(a=1;a<=5;a++)
 {
   for(b=1;b<=5;b++)
     cout<<"*";
     cout<<"\n";
   }
    return 0;
  }
  //Program 53: Write a program that displays the following shape using nested do-while loop.
4	4	4	4
3	3	3
2	2
1
#include <iostream>
using namespace std;
 int main()
{
 int a,b;
 a=4;
 do
 {
   b=a;
   do{
     cout<<"\t"<<a;
     b--;
     }
     while(b>=1);
     cout<<"\n";
     a--;
   }
   while(a>=1);
    return 0;
  }
  //Program 54: Write a program that displays the following shape using nested for loop.
*
**
***
****
*****
#include <iostream>
using namespace std;
 int main()
{
 int a,b;
 for(a=1;a<=5;a++)
 {
   for(b=1;b<=a;b++)
   cout<<"*";
   cout<<"\n";
   
   }
    return 0;
  }
  //Program 55: Write a program that displays the following shape using nested for loop.
0
01
012
0123
01234
012345

#include <iostream>
using namespace std;
 int main()
{
 int a,b;
 for(a=0;a<=5;a++)
 {
   for(b=0;b<=a;b++)
   cout<<b;
   cout<<"\n";
   
   }
    return 0;
  }
  //Program 56: Write a program that displays the following shape using nested for loop.
*****
  ****
    ***
      **
        *
#include <iostream>
using namespace std;
 int main()
{
 int a,b,s;
 for(a=5;a>=1;a--)
 {
   for(s=1;s<=5-a;s++)
   cout<<"";
   for(b=1;b<=a;b++)
   cout<<"*";
   cout<<"\n";
   
   }
    return 0;
  }
  //Program 57: Write a program that displays the following shape using nested for loop.
        *
      **
    ***
  ****
*****
#include <iostream>
using namespace std;
 int main()
{
 int a,b,s;
 for(a=1;a<=5;a++)
 {
   for(s=1;s<=5-a;s++)
   cout<<"";
   for(b=1;b<=a;b++)
   cout<<"*";
   cout<<"\n";
   
   }
    return 0;
  }
  
  










