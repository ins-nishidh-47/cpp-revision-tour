#include <iostream>
#include <stdlib.h>

using namespace std;

void pattern1(int n)
{
    /*
     *
     * *
     * * *
     * * * *
     * * * * *
     */

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void pattern2(int num)
{

    int n = num; // Number of rows

    /*
     *
     ***
     *****
     *******
     */

    for (int i = 1; i <= n; i++)
    {
        // Print spaces
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }

        // Print stars
        for (int k = 1; k <= (2 * i - 1); k++)
        {
            cout << "* ";
        }

        // Move to the next line
        cout << endl;
    }
}

void pattern3(int num)
{

    /*
    ********
    *******
    ******
    *****
    ****
    ***
    **
    *
    */
    for (int i = 0; i <= num; i++)
    {
        for (int j = num; j > i; j--)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void pattern4(int num)
{

    for (int i = num; i > 0; i--)
    {
        for (int j = 1; j <= num; j++)
        {
            if (j >= i)
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

void pattern2_ct(int num)
{

    for (int i = num; i > 0; i--)
    {
        for (int j = 1; j <= num; j++)
        {
            if (j >= i)
            {
                cout << "* ";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}

void diamond(int num)
{
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    for (int i = num; i > 0; i--)
    {
        for (int j = i-1; j > 0; j--)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

int main()
{
    system("clear");
    int num;
    cout << "Enter a number :" << endl;
    cin >> num;

    // pattern1(num);
    // pattern2(num);
    // pattern3(num);
    // pattern4(num);
    diamond(num);
    return 0;
}
