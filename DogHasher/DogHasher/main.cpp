#include <cstdio>
#include <string>
#include <vector>
using namespace std;

int main(int argc, char* argv[])
{
    vector<string> v;
    if (argc < 2) {
        printf("ERROR: You need at least one argument.\n");
        return -1;
    }

    for (char** pargv = argv; *pargv != argv[argc]; pargv++) {
        string s = "";


        for (char* ptr = *pargv; *ptr != '\0'; ptr++) {

            s += *ptr;

        }
        v.push_back(s);

    }
}