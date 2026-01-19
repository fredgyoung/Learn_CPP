//
// Created by Fred on 1/18/2026.
//
#include <iostream>
#include <ostream>
#include <vector>

using namespace std;

void printVector(const vector<int>& ages, const string& message) {

    cout << message << ": ";
    for (const int age : ages) cout << age << " ";
    cout << endl;

}

int main() {

    vector<int> ages = {1, 2, 3};
    printVector(ages, "Ages");

    ages.push_back(4);
    printVector(ages, "Ages");

    ages.pop_back();
    printVector(ages, "Ages");

    cout << "Front: " << ages.front() << endl;
    cout << "Back: " << ages.back() << endl;


    return 0;
}
