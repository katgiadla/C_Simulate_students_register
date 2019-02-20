#include <iostream>
#include <string>
#include "Student.h"
#include "Error.h"
#include "JestLiczba.h"
#include "JestLitera.h"
#include "ZlaOcena.h"
#include "Funkcje.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "pl-PL");

	string ImieiNazUzyt;
	string rokUzyt;
	string kierUzyt;
	string ocenaUzyt;
	
	label: cout << "\nImiona i nazwisko: ";
	try
	{
		getline(cin, ImieiNazUzyt);
		CzyNieCyfra(ImieiNazUzyt);
	}
	catch (Error& bladLiczba)
	{
		cout << bladLiczba.what() << endl;
		goto label;
	}

	label2: cout << "\nRok studiów: ";
	try
	{
		getline(cin, rokUzyt);
		CzyNieLitera(rokUzyt);
	}
	catch (JestLitera bladLitera)
	{
		cout << bladLitera.what() << endl;
		goto label2;
	}
	
	label3: cout << "\nKierunek: ";
	try
	{
		getline(cin, kierUzyt);
		CzyNieCyfra(kierUzyt);
	}
	catch (JestLiczba bladLiczba)
	{
		cout << bladLiczba.what() << endl;
		goto label3;
	}
	
	label4: cout << "\nOcena - wpisz ze znakiem '.': ";
	try
	{
		getline(cin, ocenaUzyt);
		CzyNieLitera(ocenaUzyt);
		CzyDobraOcena(ocenaUzyt);
	}
	catch (Error& err)
	{
		cout << err.what() << endl;
		goto label4;
	}
	//try
	//{
	//	
	//}
	//catch (ZlaOcena bladocena)
	//{
	//	cout << bladocena.what() << endl;
	//	goto label4;
	//}

	Student mojStud = Student(ImieiNazUzyt, rokUzyt, kierUzyt, ocenaUzyt);
	cout << mojStud;

	system("PAUSE");
	return EXIT_SUCCESS;
}