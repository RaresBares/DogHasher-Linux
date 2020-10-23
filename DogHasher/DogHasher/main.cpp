#include <cstdio>
#include <string>
#include <vector>
using namespace std;

int main(int argc, char* argv[])
{
    vector<char*> v = {};
    if (argc < 2) {
        printf("ERROR: You need at least one argument.\n");
        return -1;
    }
   

    for (char** pargv = argv; *pargv != argv[argc]; pargv++) {
        char* s = "";


        for (char* ptr = *pargv; *ptr != '\0'; ptr++) {

            s += *ptr;

        }
        v.push_back(s);
        
    }

    for (std::size_t i = 0; i < v.size(); ++i) {
        printf(v[i] + '\n');
    }


}