using namespace std;

#include <iostream>

int main()
{
    int nop = 0;
    int n = 10; nop++;
    int s = 0; nop++;
    nop++; nop++; nop++; nop++;
    for (int i = n + 5; i < n * n; i++) {
        nop++; nop++; nop++; nop++;
        nop++; nop++; nop++; nop++;
        for (int j = 5; j < n * n * n - 4; j++) {
            nop++; nop++; nop++; nop++;
            int k = 13; nop++;
            nop++; nop++; nop++;
            while ((2 * k + 5) < 66) {
                nop++; nop++; nop++;
                k = k + 7; nop++;
                s = s + 1; nop++;
            }
        }
    }
    cout << "S= "<< s <<"\n";
    cout << "nop= "<< nop <<"\n";
}
