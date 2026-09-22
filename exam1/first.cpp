#include <iostream>
#include <vector>
std::vector<int> v = { 3,5,114514,7,4,24,61,91,78, };
int a = 0;
int b = 1;
int l = 0;
int i = 0;
int main() {
    l = v.size();
    //std::cout << l <<std::endl;
    while (true) {
        for (i = 0;i < l - 1;i++) {
            if (v.at(i) > v.at(i + 1)) {
                a = v.at(i);
                v.at(i) = v.at(i + 1);
                v.at(i + 1) = a;
            }
            else {
                b++;
            }
        };
        if (b == l) {
            break;
        };
        b = 1;
    }
    for (int x : v)(
        std::cout << x << ","
        );
}