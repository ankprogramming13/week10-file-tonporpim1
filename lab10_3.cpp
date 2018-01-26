#include <iostream>
#include <fstream>
#include <string>

using namespace std;

  int main() {
     int cmd;
     ofstream writeFile ("std.txt", ofstream::app );
     ifstream readFile ("std.txt");
     string line;
     string name;


     cin >> cmd;

     if (cmd == 1) {
     cin >> name;
     if(writeFile.is_open()){
        writeFile << name << endl;
        writeFile.close();

     }else {
        cout << "Unable to open file";
     }

     }else if (cmd == 2){
         if (readFile.is_open()) {
            while(getline(readFile, line)){
            cout << line << endl;

            }
            readFile.close();
         }


     }else{
        return 0;
     }
        return 0;
}
