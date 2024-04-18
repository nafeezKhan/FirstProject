#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while (t--)
    {
        char column;
        int row;
        cin >> column >> row;
        for (int i = 1; i <row; i++)
        {
            cout<<column<<i<<endl;
        }
        for (int i = 8; i > row; i--)
        {
             cout<<column<<i<<endl;
        }
        for ( char j ='a'; j <='h' ; j++)
        {
            if (j!=column)
            {
                cout<<j<<row<<endl;
            }
            
        }
        
        
        
    }

    return 0;
}
