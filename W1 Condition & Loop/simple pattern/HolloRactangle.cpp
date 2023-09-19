#include <iostream>
using namespace std;

int main()
{
    //  HolloRactangle
    //  * * * * * * * * *
    //  *               *
    //  *               *
    //  * * * * * * * * *

    int ROW = 4, COL = 8;
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            if (i == 0 || i == ROW - 1 || j == 0 || j == COL - 1)
            {

                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
}