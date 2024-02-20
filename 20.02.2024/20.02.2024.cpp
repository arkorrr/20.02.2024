#include <string>
#include <iostream>

using namespace std;

string compressText(const string& text) {
    string result;
    bool wordSeen = false;

    for (int i = 0; i < text.size(); ++i) {
        if (text[i] != ' ') {
            result += text[i];
            wordSeen = true;
        }
        else {
            if (i + 1 < text.size() && text[i + 1] != ' ' && wordSeen) {
                result += text[i];
            }
            else if (!wordSeen) {
                result += text[i];
            }
        }
    }

    return result;
}

int main()
{
    string text = "Hello        World   How are    you";
    string compressedText = compressText(text); 
    cout << compressedText << endl;
    return 0;
}