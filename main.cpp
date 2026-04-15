#include<bits/stdc++.h>
#include<filesystem>
using namespace std;
namespace fs = std::filesystem;

int main(){
    // basic program to get files in a directory using c++17 filesystem library
    // date: 15-04-2025 
    // I'll be working on it for a while.
    string path = "C:\\Users\\Admin\\Desktop\\test";
    for(auto& entry : fs::directory_iterator(path)){
        if(entry.is_regular_file()){
            cout << entry.path().filename() << "\n";
        }
    }
    return 0;
}