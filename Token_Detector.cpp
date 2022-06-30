// Code By Akhlas Hashmi

#include <iostream>
#include <string>
using namespace std;
bool is_Keyword(string String)
{
    if ((String == "Auto") || (String == "double") || (String == "int") || (String == "struct") ||
        (String == "Break") || (String == "else") || (String == "long") || (String == "switch") ||
        (String == "Case") || (String == "enum") || (String == "register") || (String == "typedef") ||
        (String == "Char") || (String == "extern") || (String == "return") || (String == "union") ||
        (String == "Const") || (String == "float") || (String == "short") || (String == "unsigned") ||
        (String == "Continue") || (String == "for") || (String == "signed") || (String == "void") ||
        (String == "Default") || (String == "goto") || (String == "sizeof") || (String == "volatile") ||
        (String == "Do") || (String == "if") || (String == "static") || (String == "while") ||
        (String == "Asm") || (String == "dynamic_cast") || (String == "namespace") ||
        (String == "reinterpret_cast") || (String == "Bool") || (String == "explicit") || (String == "new") ||
        (String == "static_cast") || (String == "Catch") || (String == "false") || (String == "operator") ||
        (String == "template") || (String == "Class") || (String == "friend") || (String == "private") ||
        (String == "this") || (String == "Const_cast") || (String == "inline") || (String == "public") ||
        (String == "throw") || (String == "Delete") || (String == "mutable") || (String == "protected") ||
        (String == "true") || (String == "Try") || (String == "typeid") || (String == "typename") ||
        (String == "using") || (String == "virtual") || (String == "wchar_t"))
        return true;
    else
        return false;
}

bool is_Identifier(string String)
{
    bool checkIfValid;
    if ((String[0] >= 'a' && String[0] <= 'z') || (String[0] >= 'A' && String[0] <= 'Z') || (String[0] == '_'))
    {
        for (int i = 0; i < String.length(); i++)
        {
            if (((String[i] >= 'a' && String[i] <= 'z') || (String[i] >= 'A' && String[i] <= 'Z') ||
                 (String[i] >= '0' && String[i] <= '9') || (String[i] == '_')))
                checkIfValid = true;
            else
            {
                checkIfValid = false;
                break;
            }
        }
        return checkIfValid;
    }
    else
        return false;
}

bool is_Operator(string String)
{
    if (String == "+" || String == "-" || String == "*" || String == "/" || String == "=" || String == "%" ||
        String == "<" || String == ">" || String == "<=" || String == ">=" || String == "==" || String == "!=" ||
        String == "++" || String == "--" || String == "&&" || String == "||" || String == "&" || String == "|" ||
        String == "^" || String == "~" || String == "<<" || String == ">>" || String == "+=" || String == "-=" ||
        String == "*=" || String == "/=" || String == "%=" || String == "<<=" || String == ">>=" || String == "&=" ||
        String == "^=" || String == "|=")
        return true;
    else
        return false;
}

bool is_Float(string String)
{
    int countDP = 0;

    if (String.length() == 0)
        return (false);
    for (int i = 0; i < String.length(); i++)
    {
        if (String[i] != '0' && String[i] != '1' && String[i] != '2' && String[i] != '3' && String[i] != '4' &&
            String[i] != '5' && String[i] != '6' && String[i] != '7' && String[i] != '8' && String[i] != '9' &&
            String[i] != '.')
            return (false);
        if (String[i] == '.')
            countDP++;
    }
    if (countDP == 1)
        return true;
    else
        return false;
}

bool Check_Integer(string String)
{
    for (int i = 0; i < String.length(); i++)
    {
        if (String[i] != '0' && String[i] != '1' && String[i] != '2' && String[i] != '3' && String[i] != '4' &&
            String[i] != '5' && String[i] != '6' && String[i] != '7' && String[i] != '8' && String[i] != '9')
            return (false);
    }
    return (true);
}

bool is_Comment(string String) {
    if (String[0] == String[1] && String[1] == '/') {
        cout << "Single line Comment detected";
        return true;
    }
    else if (String[0] == '/' && String[1] == '*' && String.substr(String.length() - 2) == "*/") {
        cout << "Multi line comment detected";
        return true;
    }
    else
        return false;
}

int main() {
    string String;
    cout << "Enter : ";
    getline(cin, String);

    if (!(is_Keyword(String))) {
        if (is_Identifier(String))
            cout << "Valid Identifier Detected";
        else if (is_Operator(String))
            cout << "Operator Detected";
        else if (is_Float(String))
            cout << "Float Number Detected";
        else if (Check_Integer(String))
            cout << "Integer Number Detected";
        else if (is_Comment(String)){}
        else if (String == ";")
            cout << "Terminator detected";
        else if (String == ",")
            cout << "Separater detected";
        else
            cout << "Random String Detected";
    }
    else
        cout << "keyword Detected";
}
