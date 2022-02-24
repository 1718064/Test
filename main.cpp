#include <iostream>
using namespace std;
 
int main()
{
    int baris, a, b, space, count = 1;
    cout << "Input: ";
    cin >> baris;
    for (a = 0; a < baris; a++) {
        for (space = 0; space < baris - a; space++) {
            cout << " ";
        }
        for (b = 0; b <= a; b++) {
            if (b == 0 || a == 0)
                count = 1;
            else
                count = count * (a - b + 1) / b;
            cout << count << " ";
        }
        cout << "\n";
    }
    return 0;
}

