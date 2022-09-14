#include<bits/stdc++.h>
#include <fstream>
// #include<opencv2/opencv.hpp>
using namespace std;
int main(){
    ifstream inp;
    string line;
    inp.open("t.jpg",ios::binary);
    while ( getline (inp,line) )
    {
      cout << line << endl;
    }
}