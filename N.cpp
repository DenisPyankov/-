
#include <iostream>
#include <string>
using namespace std;

void AVERAGE(int x, double k, int sm) {
    sm += x;
    k += 1;
    cin >> x;
    if (x != 0)
        AVERAGE(x, k, sm);
    else { cout << sm / k << endl; }
}

int main()
{
    int a;
    cin >> a;
    double k = 0;
    int sm = 0;
    if (a != 0)
        AVERAGE(a, k, sm);
}

