#include <bits/stdc++.h>
#include "RubicksCube1dArray.cpp"
using namespace std;

int main() {
    std::cout << "Hello, World!" << std::endl;
    RubiksCube1dArray objects1d;
    objects1d.print();
    objects1d.b();
    objects1d.print();
    objects1d.randomShuffleCube(5);
    objects1d.print();

    vector<RubiksCube::MOVE> arr = objects1d.randomShuffleCube(5);
    for(auto v:arr){
        cout<<objects1d.getMove(v)<<" ";
    }
}
