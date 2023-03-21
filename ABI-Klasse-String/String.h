#pragma once
#include <iostream>
using namespace std;


/// <summary>
/// Klasse String von Daniel Szumski ~ Abi 2023
/// </summary>
class String
{
private:
	string text;
public:
	bool equals(String str);		// liefert true, wenn beide Strings gleich sind, ansonsten false.
	String* split(String splitPoint);		// teilt einen String am Trennzeichen str. Die Teil-Strings werden in einem Feld zurückgeliefert.
	bool startsWith(String str);	// liefert true, wenn der String mit str beginnt, ansonsten false.
	bool isEmpty();
	size_t length();

	String();
	String(string str);
	String(char* str);
	String(const String& str);
	String(const char* str);

	string toC_string() { return text; } // Sting to string >> um z.B. stoi benutzen zu können
	friend ostream& operator<<(ostream& os, const String& x);
	friend istream& operator>>(istream& os, String& x); 

	String operator=(const String& str) { text = str.text; return *this; }
	String operator+ (const String& x2) { text += x2.text; return *this; }
	bool operator< (const String& x2) { return text < x2.text; }
	bool operator> (const String& x2) { return text > x2.text; }
	bool operator== (const String& x2) { return text == x2.text; }
	bool operator!= (const String& x2) { return text != x2.text; }
	
	String operator+(string x1) { return text + x1; }
	bool operator< (string x1){ return text < x1; }
	bool operator> (string x1) { return text > x1; }
	bool operator== (string x1) { return text == x1; }
	bool operator!= (string x1) { return text != x1; }

	friend String operator+(string x1, String x2);
	friend bool operator< (string x1, String x2);
	friend bool operator> (string x1, String x2);
	friend bool operator== (string x1, String x2);
	friend bool operator!= (string x1, String x2);

};


inline int stoi(String s) {
	return stoi(s.toC_string());
}

inline float stof(String s) {
	return stof(s.toC_string());
}