#include <iostream>
#include <fstream>

using namespace std;

ofstream fout ("hello.out");
ifstream fin ("hello.in");

int main() {
    string name;
    fin >> name;
    fout << "Hello " << name << "!";
}