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

double x,y,first,second,fn;
int n,i;
cout<<"Enter initial guess : ";
cin>>x;
cout<<"Enter number of iterations : ";
cin>>n;
if(n<0){
	cout<<"INVALID!!";
	return 0;
}

y=x;
for(i=0;i<n;i++){
	cout<<"\n#iteration "<<i+1;
	fn = function(y);
	first = first_deri(y);
	second = second_deri(y);
	
	y = y - (fn/first) - 0.5*(pow(fn,2)*second/pow(first,3));
	cout<<"\n	function value : "<<fn<<" Xn+1: "<<y;	
}


cout<<"\n\nRoot: "<<y;
cout<<"\nerror: "<<0-fn<<"\n";

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
