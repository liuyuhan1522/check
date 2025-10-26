#include <bits/stdc++.h>
using namespace std;

int n, ac, timet;

int main()
{
    if (system("g++ mine.cpp -o mine -O2 -std=c++14"))
    {
        cout << "Compile Error\n";
        cout << "score: 0.\n";
        return 0;
    }

    printf("Please enter the quantity of data: ");
    cin >> n;

    system("g++ std.cpp -o std -O2 -std=c++14");
    system("g++ data.cpp -o data");

    for (int i = 1; i <= n; i++)
    {
        system("data.exe > in.txt");

        double end = clock();
        double begin = clock();
        system("mine.exe < in.txt > out.txt");
        double t = (end - begin);

        system("std.exe < in.txt > ans.txt");

        // ! ---------------------- !

        // system("data.exe");

        // double begin = clock();
        // system("mine.exe");
        // double end = clock();
        // double t = (end - begin);

        // system("std.exe");

        // ! ---------------------- !

        if (system("fc ans.txt out.txt"))
        {
            printf("Wrong Answer on #%d\n\n----------------------------------------\n", i);

            system("data.exe > hack-WA.txt");
            system("mine.exe < hack-WA.txt > mine-WA.txt");
        }

        else if (t > 1000)
        {
            printf("Time Limited Exceeded on #%d %.0lfms\n\n----------------------------------------\n", i, t);
            system("data.exe > hack-TLE.txt");
            system("mine.exe < hack-TLE.txt > mine-TLE.txt");
        }

        else
        {
            printf("Accepted on #%d %.0lfms\n\n----------------------------------------\n", i, t);
            ac++;
        }
        timet += t;
    }

    printf("\n");
    double res = 100.0 * ac / n;
    printf("%d AC in %d, score: %.1lf, time: %dms.", ac, n, res, timet);

    return 0;
}

