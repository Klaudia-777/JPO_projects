#include "pch.h"
#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <iterator>

using namespace std;
map <int, string> toRomanMap{
	{1,"I"},
	{5,"V"},
	{10,"X"},
	{50,"L"},
	{100,"C"},
	{500,"D"},
	{1000,"M"},
};

map < char,int> mymap{
	{'I',1},
	{'V',5},
	{'X',10},
	{'L',50},
	{'C',100},
	{'D',500},
	{'M',1000},
};

void display(string str) {
	for (size_t i = 0; i < str.size(); i++) {
		cout << str[i] << " ";
	}
}
string toRoman(int number) {
	string roman;
	string str = "MDCLXVI";
	int count=0;
	
	if (number <= 3999) {
		int licznik;

		for (int i = 0; i <7; ++i){

			licznik = mymap[str[i]]-number;
			count = number /(mymap.at(str[i]));
	

			if (count>0 && count < 4 ) {
				if (to_string(number)[0] != '9') {
					for (int j = 0; j < count; ++j) {
						roman += str[i];
					}
					number -= count * (mymap.at(str[i]));
				}
				if (to_string(number)[0] == '9') i--;
			}
			

			int digit=number;
			
				if (count == 0 && licznik<=pow(10,(to_string(number).size()-1))) {
					
					while (digit>9) {
						digit /= 10;
					}

					if (digit == 4) {
						roman += str[i + 1];
						roman += str[i];
						number -= digit * (mymap.at(str[i + 1]));
					}
					if (digit == 9) {
						roman += str[i + 2];
						roman += str[i];
						number -= digit * (mymap.at(str[i+2]));
						i += 1;
					}
				}
				 
		}
		display(roman); 
		}
	else cout << "Number is out of range.";
	return roman;
}

