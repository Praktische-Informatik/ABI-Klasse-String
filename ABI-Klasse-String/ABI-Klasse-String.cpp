#include "String.h"
using namespace std;

int main()
{
    string test = "string aus STL";
    String str(";;Klasse;;String;");
    String str2(";;Klasse;;String;");
    String str3("Klasse String");
    String empty;
     
    //std::cout << str << "  " << /*(str < test)*/ << endl; 
    cout << "Split-function (on: ;; | spaces: -): " << str.split(";;")[0] << "-" << str.split(";;")[1] << "-" << str.split(";;")[2] << "-" << endl;
    cout << "Empty (true): " << empty.isEmpty() << "  Empty (false): " << str.isEmpty() << endl;
    cout << "StartsWith (true): " << str.startsWith(";;K") << "  StartsWith (false): " << str.startsWith(";K") << endl;
    cout << "Equals (true): " << str.equals(str2) << "  Equals (true): " << str.equals(";;Klasse;;String;") << "  Equals (false): " << str.equals(str3) << endl;
    cout << "Laenge-str (17): " << str.length() << endl;

}
