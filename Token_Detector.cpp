// Assignment By Akhlas Ahmed - Roll # 77 - BSCS 5th Sem - Compiler Construction Assignment # 1
#include <iostream>
#include <string>
using namespace std;
bool Check_keyword(string String){
    if ((String == "Auto") || (String == "double") || (String == "int") || (String == "struct") || (String == "Break") || (String == "else") || (String == "long") || (String == "switch") || (String == "Case") || (String == "enum") || (String == "register") || (String == "typedef") || (String == "Char") || (String == "extern") || (String == "return") || (String == "union") || (String == "Const") || (String == "float") || (String == "short") || (String == "unsigned") || (String == "Continue") || (String == "for") || (String == "signed") || (String == "void") || (String == "Default") || (String == "goto") || (String == "sizeof") || (String == "volatile") || (String == "Do") || (String == "if") || (String == "static") || (String == "while") || (String == "Asm") || (String == "dynamic_cast") || (String == "namespace") || (String == "reinterpret_cast") || (String == "Bool") || (String == "explicit") || (String == "new") || (String == "static_cast") || (String == "Catch") || (String == "false") || (String == "operator") || (String == "template") || (String == "Class") || (String == "friend") || (String == "private") || (String == "this") || (String == "Const_cast") || (String == "inline") || (String == "public") || (String == "throw") || (String == "Delete") || (String == "mutable") || (String == "protected") || (String == "true") || (String == "Try") || (String == "typeid") || (String == "typename") || (String == "using") || (String == "virtual") || (String == "wchar_t"))
        return true;
    else
        return false;
}

bool check_identifier(string String){
    bool checkIfValid;
    if ((String[0] >= 'a' && String[0] <= 'z') || (String[0] >= 'A' && String[0] <= 'Z') || (String[0] == '_')){
        for (int i = 0; i < String.length(); i++){
            if (((String[i] >= 'a' && String[i] <= 'z') || (String[i] >= 'A' && String[i] <= 'Z') || (String[i] >= '0' && String[i] <= '9') || (String[i] == '_')))
                checkIfValid = true;
            else {
                checkIfValid = false;
                break;
            }
        }
        return checkIfValid;
    }
    else
        return false;
}

bool Check_Operator(string String){
    if (String == "+"){
        cout << "Addition Operator Detected" << endl;
        return true;
    }
    else if (String == "-"){
        cout << "Subtraction Operator Detected" << endl;
        return true;
    }
    else if (String == "*"){
        cout << "Multiplication Operator Detected" << endl;
        return true;
    }
    else if (String == "/"){
        cout << "Division Operator Detected" << endl;
        return true;
    }
    else if (String == "="){
        cout << "Assignment Operator Detected" << endl;
        return true;
    }
    else if (String == "%"){
        cout << "Modulus Operator Detected" << endl;
        return true;
    }
    else if (String == "<"){
        cout << "Less then Operator Detected" << endl;
        return true;
    }
    else if (String == ">"){
        cout << "Greater then Operator Detected" << endl;
        return true;
    }
    else if (String == "<="){
        cout << "Less then or Equal-to Operator Detected" << endl;
        return true;
    }
    else if (String == ">="){
        cout << "Greater then or Equal-to Operator Detected" << endl;
        return true;
    }
    else if (String == "=="){
        cout << "Equatlity Comparison (==) Operator  Detected" << endl;
        return true;
    }
    else if (String == "!="){
        cout << "Not equal-to Operator Detected" << endl;
        return true;
    }
    else if (String == "++"){
        cout << "Increment Operator Detected" << endl;
        return true;
    }
    else if (String == "--"){
        cout << "Dicrement Operator Detected" << endl;
        return true;
    }
    else if (String == "&&"){
        cout << "Logical AND Operator Detected" << endl;
        return true;
    }
    else if (String == "||"){
        cout << "Logical OR Operator Detected" << endl;
        return true;
    }
    else if (String == "&"){
        cout << "Binary AND Operator Detected" << endl;
        return true;
    }
    else if (String == "|"){
        cout << "Binary OR Operator Detected" << endl;
        return true;
    }
    else if (String == "^"){
        cout << "Binary XOR Operator Detected" << endl;
        return true;
    }
    else if (String == "~"){
        cout << "Binary Ones Complement Operator Detected" << endl;
        return true;
    }
    else if (String == "<<"){
        cout << "Binary Left Shift Operator Detected" << endl;
        return true;
    }
    else if (String == ">>"){
        cout << "Binary Right Shift Operator Detected" << endl;
        return true;
    }
    else if (String == "+="){
        cout << "Add AND assignment operator Operator Detected" << endl;
        return true;
    }
    else if (String == "-="){
        cout << "Subtract AND assignment operator Detected" << endl;
        return true;
    }
    else if (String == "*="){
        cout << "Multiply AND assignment operator Detected" << endl;
        return true;
    }
    else if (String == "/="){
        cout << "Divide AND assignment Operator Detected" << endl;
        return true;
    }
    else if (String == "%="){
        cout << "Modulus AND assignment Operator Detected" << endl;
        return true;
    }
    else if (String == "<<="){
        cout << "Left shift AND assignment Operatorv Detected" << endl;
        return true;
    }
    else if (String == ">>="){
        cout << "Right shift AND assignment Operator Detected" << endl;
        return true;
    }
    else if (String == "&="){
        cout << "Bitwise AND assignment Operator Detected" << endl;
        return true;
    }
    else if (String == "^="){
        cout << "Bitwise exclusive OR and assignment Operator Detected" << endl;
        return true;
    }
    else if (String == "|="){
        cout << "Bitwise inclusive OR and assignment Operator Detected" << endl;
        return true;
    }
    else if (String == ";"){
        cout << "Statment terminator Detected" << endl;
        return true;
    }
    else if (String == ","){
        cout << "separater Detected";
        return true;
    }
        
    else
        return false;
}

bool Check_Float(string String){
	int countDP = 0;

	if (String.length() == 0)
		return (false);
	for (int i = 0; i < String.length(); i++){
		if (String[i] != '0' && String[i] != '1' && String[i] != '2' && String[i] != '3' && String[i] != '4' && String[i] != '5' && String[i] != '6' && String[i] != '7' && String[i] != '8' && String[i] != '9' && String[i] != '.')
			return (false);
		if (String[i] == '.')
			countDP++;
	}
	if (countDP == 1)
		return true;
	else
		return false;
}

bool Check_Integer(string String){
	if (String.length() == 0)
		return (false);
	for (int i = 0; i < String.length(); i++){
		if (String[i] != '0' && String[i] != '1' && String[i] != '2' && String[i] != '3' && String[i] != '4' && String[i] != '5' && String[i] != '6' && String[i] != '7' && String[i] != '8' && String[i] != '9')
			return (false);
	}
	return (true);
}

int main(){
    string String;
    cout << "Enter : ";
    getline(cin, String);

    if (!(Check_keyword(String))){
        if (check_identifier(String))
            cout << "Valid Identifier Detected";
        else if (Check_Operator(String)){}
        else if (Check_Float(String))
		    cout << "Float Number Detected";
	    else if (Check_Integer(String))
		    cout << "Integer Number Detected";
        else
            cout << "Random String Detected";
    }
    else
        cout << "keyword Detected";
}