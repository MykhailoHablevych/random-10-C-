#include <iostream>
#include <ctime>
using namespace std;
void main()
{
	srand(time(NULL));
	int a = rand()%10;
	cout << a << endl;
}