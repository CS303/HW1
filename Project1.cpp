#pragma once
// Project1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Evaluator.h"


int main()
{
	Evaluator Infix;

	Infix.Process("3*5");

	system("Pause");
	return 0;
}

