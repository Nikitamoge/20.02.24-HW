#include <iostream>
#include <string>

using namespace std;

string Compress(const string& text) {
    string result;
    int spaceCount = 0;

    for (char ch : text) {
        if (ch != ' ') {
            if (spaceCount > 0) {
                result += ' ';
                spaceCount = 0;
            }
            result += ch;
        }
        else {
            if (result.empty() || result.back() == ' ') {
                result += ch;
            }
            else {
                spaceCount++;
            }
        }
    }
    return result;
}

int main() {
    string text = "Hello         what's     your name   and     age?";
    string compressed = Compress(text);
    cout << compressed << endl;
}
