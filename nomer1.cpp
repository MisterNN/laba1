#include <iostream>
#include <cmath>
using namespace std;
long double factorial (double z) 
{ 
 if( z == 0 ) return 1;
 return z * factorial (z - 1);
}
void sinus(double x,double epsilon)
{   
	double summa=0.0,y=-1.0;
	int r=0;
    if (x==0)
	{cout << " 0 \n";
	return;}
	if (epsilon>=1){
		cout << "Slishkom bol'shoi epsilon \n";
	return;}
	for (double n=0.0;n<n+1;n++){
	double z =2*n+1;
	if (abs((pow(y,n)*pow(x,2*n+1))/factorial(z))>epsilon){
		summa=summa+(pow(y,n)*pow(x,2*n+1))/factorial(z);}
	else break;}
	while (epsilon < 1){
	   epsilon*=10;
	   r++;}
   cout.precision(r+1);
cout << fixed << summa << endl;
return;}
int main(){
   double x,epsilon;
   cin >> x >> epsilon;
   sinus(x,epsilon);
   return 0;
}