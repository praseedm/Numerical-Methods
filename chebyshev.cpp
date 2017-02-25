#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
double function(double x);
double first_deri(double x);
double second_deri(double x);
int main(){

cout.precision(4);        //set the precision , 4 places of decimal
cout.setf(ios::fixed); 

double x;
int n;
cout<<"Enter initial guess : ";
cin>>x;
cout<<"Enter number of iterations : ";
cin>>n;
if(n<0){
	cout<<"INVALID!!";
	return 0;
}

cout<<"fn :"<<function(x);
cout<<"\n1st :"<<first_deri(x);
cout<<"\n2nd :"<<second_deri(x);


return 0;
}

double function(double x){
//f(x) = x^3 - 5x + 1
return pow(x,3.0) - (5*x) + 1;
}

double second_deri(double x){
//6x
return 6*x;
}

double first_deri(double x){
//3x^2 - 5
return 3*pow(x,2.0) - 5.0;
}
