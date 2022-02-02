#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::string;
int main()
{
    int num1; //rows
    int num2; // columns
    cin >> num1 >> num2;

    for (int i = 1; i <= num1; ++i)
    {
        for (int j = 1; j <= num1; ++j)
        {
            if (j - 1 == num2) {
                return 0;
            }
            cout << j << " ";

            if (j == i) {
                for (int k = j - 1; k > 0; --k) {
                    cout << k << " ";
                }
            }
        }
        cout << endl;
    }
}