#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string time24;
        cin >> time24;

        int hours = stoi(time24.substr(0, 2));
        int minutes = stoi(time24.substr(3));

        string period = (hours < 12) ? "AM" : "PM";
        hours = (hours % 12 == 0) ? 12 : hours % 12;

        cout << (hours < 10 ? "0" : "") << hours << ":" << (minutes < 10 ? "0" : "") << minutes << " " << period << endl;
    }

    return 0;
}