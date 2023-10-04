//	Pattern Questions
// Program 1
// Rectangle Pattern- 
/*				
#include<iostream>
using namespace std;
int main (){
int row, column,i,j;
cout<<"Enter row and column";
cin>>row>>column;
for(i=0;i<row;i++){
for(j=0;j<column;j++){
cout<<"*";	
}
cout<<endl;
}

return 0;
}
*/
//	Program 2
/*
#include<iostream>
using namespace std;
int main (){
int row, column,i,j;
cout<<"Enter row and column\n";
cin>>row>>column;

for(i=0;i<row;i++){
for(j=0;j<column;j++){
if(i==0	|| i==row-1 || j==0 ||	j==column-1){
cout<<"*";	
}
else{
cout<<" ";	
}
}
cout<<endl;
}
return 0;
}
*/


//	Program 3

#include<iostream>
using namespace std;
int main (){
int n,i,j;
cout<<"Enter number of rows\n";
cin>>n;
//for(i=n;i>=1;i--){	// for invert half pyramid
for(i=1;i<=n;i++){		   
//for(j=1;j<=i;j++){// for half pyramid
//for(j=1;j<=(2*i-2);j++){//even pattern
for(j=1;j<=(2*i-1);j++){// odd pattern
cout<<"*";
}
cout<<endl;
}
return 0;
}




















