/* 
ABI - Klasse_String.cpp ist nur eine Test - Datei.

Beachte: Es wird zwischen "string" und "String" bei der Deklaration unterschieden!
string --> C++ Methoden funktionieren
String --> Java(-Simulation) Methoden funktionieren

Der laufende Wechsel im Code zwischen String  und string muss mit Hilfe 
von toC-String() (von Java-String zu Cpp-string)
*/


#include "String.h"  // String Klasse aus der Projektmappe. Muss includiert werden!
#include <string>    // String Klasse aus der C++ STL Bibliothek. Muss includiert werden!
using namespace std;

int main()
{
    string test = "string aus STL";   // Deklaration eines Cpp-Strings mit einer Initialisierung.
    String str = ";;Klasse;;String;"; // Deklaration eines Java-Strings mit einer Initialisierung.
    String zahl("1234");              // Alternative Deklaration eines Java-Strings mit einer Initialisierung.  
    String str2(";;Klasse;;String;");
    String str3("Klasse String");
    String empty;
    String NotEmpty;
    
    cout << "Eingabe eines Strings: ";
    cin >> NotEmpty;
    cout << NotEmpty << endl;
    cout << stoi(zahl.toC_string()) + 10 << endl;    // Umwandlung von einem Java-String in einen Cpp-String mit toC-String()  und dann einer Umwandlung in ein int mit stoi().
    zahl = "1234+" + zahl + test + zahl;  // Java- und Cpp-String mit dem +Operator vereinen.  
    cout << zahl << endl;                 // Testausgabe  
    cout << (string("234") > zahl);
    cout << ("zahl" < string("234"));

    //std::cout << str << "  " << /*(str < test)*/ << endl; 
    cout << "Split-function (on: ;; | spaces: -): " << str.split(";;")[0] << "-" << str.split(";;")[1] << "-" << str.split(";;")[2] << "-" << endl;
    cout << "Empty (true): " << empty.isEmpty() << "  Empty (false): " << str.isEmpty() << endl;
    cout << "StartsWith (true): " << str.startsWith(";;K") << "  StartsWith (false): " << str.startsWith(";K") << endl;
    cout << "Equals (true): " << str.equals(str2) << "  Equals (true): " << str.equals(";;Klasse;;String;") << "  Equals (false): " << str.equals(str3) << endl;
    cout << "Laenge-str (17): " << str.length() << endl;

    return 0;
}
