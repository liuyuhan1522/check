#include <bits/stdc++.h>
using namespace std;

inline int getrand()
{
    return (rand() << 15) + rand();
}

int main()
{
    srand(time(NULL));
    freopen("in.txt", "w", stdout);

    // ! --------------------------- ! 

    cout << getrand() << ' ' << getrand();
    
    return 0;
}

// By Liuyuhan1522