#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

//A customized main() structure is used to enable system halts.
int main(int nNumberofArgs, char* pszArgs[]){
    string name;
    cout << "Please input your name: ";
    cin >> name;
    cout << "\n Hello, " + name + "\n Welcome to zyBooks! \n";

    //The following code halts the .exe file so that the user can read the output.
    system("PAUSE");
    return 0;
}
