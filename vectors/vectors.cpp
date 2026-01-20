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

    vector<int> ages = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    printVector(ages, "Ages");

    ages.push_back(10);
    printVector(ages, "Ages");

    ages.pop_back();
    printVector(ages, "Ages");

    cout << ".front(): " << ages.front() << endl;
    cout << ".back(): " << ages.back() << endl;
    cout << ".at(1): " << ages.at(1) << endl;
    cout << ".size(): " << ages.size() << endl;
    cout << ".empty(): " << ages.empty() << endl;
    cout << ".capacity(): " << ages.capacity() << endl;


    return 0;
}
