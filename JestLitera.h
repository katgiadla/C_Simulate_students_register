#pragma once
#include <iostream>
#include "Error.h"
#include <string>

class JestLitera : public Error
{
public:
	JestLitera();
	virtual const char* what() override;
};