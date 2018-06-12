#include <cstdlib>

using namespace std;

double srednia(double tablica[])
{
	double suma = 0;
	double srednia = 0;

	for (int i = 0; i < 10; i++)
	{
		suma = suma + tablica[i];
	}
	srednia = suma / 10;
	return srednia;
}

int main()
{
	system("PAUSE");
	return 0;
}