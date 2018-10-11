#include "pch.h"
#include <iostream>
#include <string>
#include <map>

using namespace std;
map <int, string> mymap{
	{1000,"M"}, {900,"CM"},
	{500,"D"}, {400,"CD"},
	{100,"C"}, {90,"XC"},
	{50,"L"}, {40,"XL"},
	{10,"X"}, {9,"IX"},
	{5,"V"}, {4,"IV"},
	{1,"I"}, 

};

void display(string str) {
	for (size_t i = 0; i < str.size(); i++) {
		cout << str[i] << " ";
	}
}
string toRoman(int number) {
	string roman;
	int count;
	if (number <= 3999) {
		for (map <int, string> ::reverse_iterator it = mymap.rbegin(); it != mymap.rend(); ++it) {
			count = number / (it->first);
				if (0 < count && count <4 ) {
					for (int i = 0; i < count; i++)
						roman += (it->second);
				}
				number -= count * (it->first);
		}
		display(roman);
	}
	else cout << "Number out of range.";
	return roman;
}
