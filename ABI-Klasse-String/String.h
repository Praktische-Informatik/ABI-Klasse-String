#pragma once
#include <string>
using namespace std;

class String
{
private:
	string text;

public:
	bool equals(string str);		// liefert true, wenn beide Strings gleich sind, ansonsten false.
	string* split(string str);		// teilt einen String am Trennzeichen str. Die Teil-Strings werden in einem Feld zurückgeliefert.
	bool startsWith(string str);	// liefert true, wenn der String mit str beginnt, ansonsten false.

	String();
	String(string str);
};

