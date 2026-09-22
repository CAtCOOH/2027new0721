#include <string>
#include <iostream>
using namespace std;
class Car {
private:
    string color;
    int number;
public:
    Car(string c, int n) {
        color = c;
        number = n;
    }
    ~Car(){}
    void display() {
        cout << "第一辆车" << " " << "颜色：" << color <<  " " << "车牌号：" << number << endl;
    }
};
int main() {
    Car c1("蓝色", 510721);
    Car c2("红色", 919191);
    c1.display();
    c2.display();

}