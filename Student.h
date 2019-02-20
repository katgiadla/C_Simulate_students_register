#pragma once
#include <iostream>
#include <string>

using namespace std;

class Student;
ostream& operator<<(ostream& wyj, Student& Wysw);

class Student
{
	friend ostream& operator<<(ostream& wyj, Student& Wysw);
	string imionaiNazwisko;
	string rok;
	string kierunek;
	string ocena;
public: 
	Student();
	Student(string, string, string, string);
};