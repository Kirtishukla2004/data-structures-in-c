#include <iostream>
using namespace std;
int main()
{
    char name[10];
    int vote;
    char a = 'A';
    char b = 'B';
    cout << "remember here A=1 ,B=2" << endl;
    for (int i = 0; i < 10; i++)
    {

        cout << endl
             << "voting for =";
        cin >> vote;

        if (vote == 1)
        {
            cout << endl
                 << "voted for "
                 << "a";
            a++;
        }
        else if (vote == 2)
        {
            cout << endl
                 << "voted for B";
            b++;
        }
        else
        {
            cout << "wrong input";
        }
    }

    cout << a <<  b;
}
