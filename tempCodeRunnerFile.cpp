#include <iostream>
using namespace std;

class Money {
private:
    int dollars;
    int cents;
public:
    Money() {
        dollars = 0;
        cents = 0;
    }
    Money(int d, int c) {
        dollars = d;
        cents = c;
        if (cents >= 100) {
            dollars += cents / 100;
            cents %= 100;
        }
    }
    void input() {
        cout << "Enter dollars: ";
        cin >> dollars;
        cout << "Enter cents: ";
        cin >> cents;
        if (cents >= 100) {
            dollars += cents / 100;
            cents %= 100;
        }
    }
    void output() {
        cout << "Total amount: $" << dollars << "." << cents << endl;
    }
    Money add(Money m) {
        int total_dollars = dollars + m.dollars;
        int total_cents = cents + m.cents;
        if (total_cents >= 100) {
            total_dollars += total_cents / 100;
            total_cents %= 100;
        }
        return Money(total_dollars, total_cents);
    }
};

int main() {
    Money m1, m2, m3;
    cout << "Enter first amount: " << endl;
    m1.input();
    cout << "Enter second amount: " << endl;
    m2.input();
    m3 = m1.add(m2);
    m3.output();
    return 0;
}
