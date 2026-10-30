#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    long long n;
    while (true) {
        cout << "Ââåäèòå ÷èñëî: ";
        cin >> n;
        if (n >= 1 && n <= 1000000000) {
            break;
        }
        else {
            cout << "Âíå äèàïîçîíà" << endl;
        }
    }
    long long steps = 0;
    cout << n;
    while (n >= 10) {
        long long sum = 0;
        long long temp = n;

    while (temp > 0) {
        sum = sum + (temp % 10);
        temp = temp / 10;
    }
    n = sum;
    cout << " -> " << n;
    steps = steps + 1;
        }
        cout << endl;
cout << "Ïðåîáðàçîâàíèé: " << steps << endl;
cout << "Èòîãîâàÿ öèôðà: " << n << endl;
return 0;
}
