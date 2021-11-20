
#include <iostream>
#include <string>
using namespace std;

void MAX(int x, int m){
    if (m < x)
        m = x;
    cin >> x;
    if (x != 0)
        MAX(x, m);
    else { cout << m << endl; }
}

int main()
{
    int a;
    cin >> a;
    int max = 0;
    if (a != 0) 
        MAX(a,max);
}

