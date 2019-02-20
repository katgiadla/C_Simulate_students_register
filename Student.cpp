#include "Student.h"
#include <string>

Student::Student()
{
	imionaiNazwisko = "Jan Stanis³aw";
	rok = 1;
	kierunek = "In¿ynieria Obliczeniowa";
	ocena = 3.0;
}

Student::Student(string nowaNazwa, string nowyRok, string nowykierunek, string nowaocena)
{
	imionaiNazwisko = nowaNazwa;
	rok = nowyRok;
	kierunek = nowykierunek;
	ocena = nowaocena;
}

ostream & operator<<(ostream & wyj, Student & Wysw)
{
	wyj << "Imiona i nazwisko: " << Wysw.imionaiNazwisko;
	wyj << "\nKierunek: " << Wysw.kierunek;
	wyj << "\nRok: " << Wysw.rok;
	wyj << "\nOcena: " << Wysw.ocena;
	return wyj;
}
