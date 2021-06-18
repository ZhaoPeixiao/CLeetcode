#include <iostream>
#include <vector>
#include <string>
#include <iostream>
#include <limits>
#include "Q3.h"
using namespace std;

int main() {
//    std::cout << "Hello, World!" << std::endl;
//    return 0;
    vector<string> str = {"A", "|-B", "|-|-C", "|-|-D", "|-|-E", "|-|-|-F", "|-lib32"};
    vector<string> res = DelAllDirectorys(str);
    for (int i = 0; i < res.size(); i++) {
        cout << res[i] << endl;
    }
}
