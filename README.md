// practice questions of function and recursion
// 1 Average of three numbers 
/* formula of average
average= Sum of all numbers/number of all numbers 
*/

// Program
/*
#include<iostream>
using namespace std;
int average(int a,int b,int c){
return (a+b+c)/3;
}
int main (){
int a,b,c;
cout<<"Enter values of a,b and c\n";
cin>>a>>b>>c;
average(a,b,c);
int av=(a+b+c)/3;
cout<<"Average of three numbers is "<<av<<endl;
return 0;
}
*/

// 2. Program of factorial
/*
#include<iostream>
using namespace std;
int factorial(int n){
if(n==1 ||n==0){
return 1;	
}else{
return n*factorial(n-1);	
}	
}

int main (){
int n;
cout<<"Enter value of n\n";
cin>>n;
factorial(n);
int fact=n*factorial(n-1);
cout<<"Factorial of number is "<<fact<<endl;
return 0;
}
*/

// 3. Program of fibonacci series

// fibonacci series-0,1,1,2,3,5,8,13,21,34,55	- - - - - - - - - -
/*formula
fib(n)=fib(n-1)+fib(n-2)
*/
#include<iostream>
using namespace std;
int fib(int n){
if(n==0||n==1){
return n;	
}else{
return fib(n-1)+fib(n-2);	
}
}
int main (){
int n;
cout<<"Enter value of n\n";
cin>>n;
fib(n);
int fibo=fib(n-1)+fib(n-2);	
cout<<"The value of n in series is"<<fibo<<endl;
return 0;	
}

