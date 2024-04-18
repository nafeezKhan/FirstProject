#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    cin.ignore(); //Ignore newline character after reading integer
    while (t--)
    {
        vector<string> s(8);
        for (int i = 0; i < 8; i++)
        {
            getline(cin, s[i]);
        }
        string bsdk;
        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 8; j++)
            {
                if (s[i][j] != '.')
                {
                    bsdk += s[i][j]; // Concatenating characters to the string "bsdk"
                }
            }
        }
        cout << bsdk << endl;
    }

    return 0;
}
