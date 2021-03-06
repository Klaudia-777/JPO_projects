#include "pch.h"
#include <iostream>
#include <iterator>
#include <string>
#include <vector>
#include <math.h>
#include <regex>

//////////////////////////////////////////////////
///////   Equation format: ax^2+bx+c    //////////
//////////////////////////////////////////////////



using namespace std;

void display( double tab[2]) {
	for (int i = 0; i < 2; i++) {
		cout << tab[i] << " ";
	}
}
void roots(string orig_equation) {
	double roots[2];
	string equation;
	
	for (size_t i = 0; i < orig_equation.length(); i++)
	{
		if (orig_equation[i] == '^'&& orig_equation[i + 1] == '2') i += 2;
		equation += orig_equation[i];
	}

	
	int iterator = 0;
	double tab[3];
	regex regex("(\\-)?\\d+(\\.\\d+)?");

	auto equation_begin = sregex_iterator(equation.begin(), equation.end(), regex);
	auto equation_end = sregex_iterator();
	for (sregex_iterator i = equation_begin; i != equation_end; ++i) {

		smatch match = *i;
		string match_str = match.str();
		tab[iterator] = stod(match_str);
		iterator++;
	}

	double a = tab[0];
	double b = tab[1];
	double c = tab[2];

	double delta;
	delta = pow(b, 2) - 4 * a*c;
	roots[0] = (-b - sqrt(delta)) / (2 * a);
	roots[1] = (-b + sqrt(delta)) / (2 * a);
	display(roots);
}


