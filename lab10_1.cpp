#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream myfile ("example.txt");
    if(myfile.is_open())
    {
    myfile << "this is a line.\n";
    myfile << "this is another line.\n";
    myfile.close();
    }
    else cout <<"Unable to open flie";
        /* code */
        return 0;
}
