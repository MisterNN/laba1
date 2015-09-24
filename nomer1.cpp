#include <iostream>
#include <cmath>
using namespace std;

long double factorial ( double z )
{
	if ( z == 0 ) return 1;
	return z * factorial ( z - 1 );
}

double sinus ( double x , double epsilon )
{
	double summa = 0.0 , y = -1.0;
	int r = 0;
	if ( x == 0 )
	{
		cout << " 0 \n";
		return 0;
	}
	if ( epsilon >= 1 )
	{
		cout << "Slishkom bol'shoi epsilon \n";
		return 0;
	}
	for ( double n = 0.0 ; n < n + 1 ; n++ )
	{
		double z = 2 * n + 1;
		if ( abs ( ( pow ( y , n ) * pow ( x , 2 * n + 1 ) ) / factorial ( z ) ) > epsilon )
		{
			summa = summa + ( pow ( y , n ) * pow ( x , 2 * n + 1 ) ) / factorial ( z );
		}
		else break;
	}
	while ( epsilon < 1 )
	{
		epsilon *= 10;
		r++;
	}
	cout . precision ( r + 1 );
	return summa;
}
void assert(double x, double epsilon) 
{
	if (fabs(sin(x) - sinus( x, epsilon)) <= epsilon)
		puts("OK");
	else
		printf("FAIL: %.9lf\n", epsilon);
}

int main() {
	assert(0,0.000011);
	assert(1.57, 0.000011);
        assert(3.14,0.000011);
	assert(6.28, 0.000011);
}
