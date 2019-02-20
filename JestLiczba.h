#pragma once
#include <iostream>
#include "Error.h"
#include <string>

class JestLiczba : public Error
{
public:
	JestLiczba();
	const char* what() override;
};