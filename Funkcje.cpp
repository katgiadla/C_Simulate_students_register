#include <iostream>
#include <string>
#include "Funkcje.h"
#include "JestLiczba.h"
#include "JestLitera.h"

using namespace std;

bool CzyNieCyfra(string& napis)
{
	for (int i = 0; i < napis.length(); i++)
	{
		if (isdigit(napis[i])) throw JestLiczba();
	}
	return true;
}

bool CzyNieLitera(string& napis) 
{
	for (size_t i = 0; i < napis.length(); i++)
	{
		if (napis[i] == ',') napis[i] = '.';
	}

	for (int i = 0; i < napis.length(); i++)
	{
		if (isalpha(napis[i])) throw JestLitera();
	}
	return true;
}

bool CzyDobraOcena(string & ocena)
{
	if (ocena == "2.0" || ocena == "3.0" || ocena == "3.5" || ocena == "4.0" || ocena == "4.5" || ocena == "5.0")
		return true;
	else
	{
		throw ZlaOcena();
		return false;
	}
}
