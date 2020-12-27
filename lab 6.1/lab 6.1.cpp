#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;


void Init(int* p) {
    for (int i = 0; i < 24; ++i)
        p[i] = (int)rand() % 34 - 9;
}

void Print(int* p) {
    for (int i = 0; i < 24; ++i)  //
        cout << p[i] << "\t";
    cout << "\n";
}
void SearchAndModify(int* p, int& amount, int& sum) {
    amount = 0;
    sum = 0;
    for (int i = 0; i < 24; ++i)
        if (p[i] >= 0 || i % 2 == 0) {
            sum += p[i];
            amount++;
            p[i] = 0;
        }

}


int main()
{

    int p[24] = { 0 };

    Init(p);
    Print(p);
    int sum = 0;
    int amount = 0;
    SearchAndModify(p, sum, amount);
    Print(p);

}