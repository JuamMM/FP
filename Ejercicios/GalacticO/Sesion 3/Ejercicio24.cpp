#include <iostream>
using namespace std;

int main()
{
	int ascii;
	char asciiminus;
	cout << "Inserte una letra mayuscula: "; 
	ascii = cin.get();
	
	ascii = ascii + 32;
	asciiminus = ascii;
	
	cout << endl << "Esta es la misma letra en minuscula: " << asciiminus;
}
