//
// Created by Fred on 1/18/2026.
//
#include <iostream>
#include <ostream>
#include <vector>

using namespace std;

void printVector(const vector<int>& vect) {
    for (const int v : vect) cout << v << " ";
    cout << endl;
}

int main() {

    vector<int> ages = {1, 2, 3};
    printVector(ages);

    ages.push_back(4);
    printVector(ages);

    ages.pop_back();
    printVector(ages);


    return 0;
}
