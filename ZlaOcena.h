#pragma once
#include <iostream>
#include "Error.h"
#include <string>

class ZlaOcena : public Error
{
public:
	ZlaOcena();
	const char* what() override;
};