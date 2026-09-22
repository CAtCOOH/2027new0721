#include <string>
#include <iostream>
using namespace std;
struct Student
{
    string name;
    int id;
    float score;
};
void input(Student* s) {
    cout << "please enter your information:";
    cin >> s->name >> s->id >> s->score;
}
void display(Student* s) {
    cout << "name:" << s->name << endl
        << "id:" << s->id << endl
        << "score:" << s->score << endl;
}
int main() {
    Student* p = new Student;
    input(p);
    display(p);
    delete p;
    return 0;
}