#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {

        string keyboard;
        getline(cin, keyboard);
  
        string word;
        getline(cin, word);
        int time = 0;
        int PrevPos = 0;
        for (char ch : word)
        {
            int CurrentPos = keyboard.find(ch) + 1;
            time += abs(CurrentPos - PrevPos);
            PrevPos = CurrentPos;
        }
        cout << time - (keyboard.find(word.front()) + 1) << endl;
    }

    return 0;
}
