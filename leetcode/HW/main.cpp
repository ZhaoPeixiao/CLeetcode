#include <iostream>
#include <memory>
#include <string.h>
using namespace std;


/*
 * upSrt2: 100
 * upSrt2: 200
 *
 * 0 0
 *
 * 877
 *
 * bar foo b_bar
 *
 * 4132
 *
 * 12
 *
 * Sub BaseDisplay
 */

const int Foo();

int main() {

    auto e = Foo();

    int x;
    auto *a = &x;

    auto &c = x;

    const auto f = Foo();
    return 0;
}
