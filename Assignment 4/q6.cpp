#include <iostream>
using namespace std;
int main()
{
    int n;
    char ch;
    cout << "Enter num: ";
    cin >> n;
    for (int i = 0; i < 2 * n-1; i++)
    {
        ch = 'A';
        if (i < n)
        {
            for (int j = 0; j < 2 * n - 1; j++)
            {
                if (j < n-i-1)
                {
                    cout << " ";
                }
                else if (j < n + i)
                {
                    cout << ch++;
                }
                else
                {
                    cout << " ";
                }
            }
        }
        else
        {
            for (int j = 0; j < 2 * n - 1; j++)
            {
                if (j < (i%n)+1)
                {
                    cout << " ";
                }
                else if (j < 2*n-i%n-2)
                {
                    cout << ch++;
                }
                else
                {
                    cout << " ";
                }
            }
        }
        cout << endl;
    }

    return 0;
}