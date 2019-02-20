#pragma once
#include <iostream>
#include <string>
#include <exception>

class Error : public std::exception
{
public:
	virtual const char* what();
};