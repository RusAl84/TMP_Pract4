using namespace std;
#include <iostream>

int main()
{
    int nop = 0;
    int n;
    for(int z=2; z<=30;z++){
        nop = 0;
        n = z; nop++;
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
        //cout << n << " " << nop << "\n";
        cout << nop << "\n";
        //cout << "S= " << s << "\n";
    }
}
