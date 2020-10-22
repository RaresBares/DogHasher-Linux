#include "utils.h"

using namespace std;

void Utils::sort(vector<string>* args, map<string, string>* target)
{

	for (vector<string>::iterator str = args->begin(); str != args->end(); ++str) { // ... \0

		string par = *str;

		if ((*par.begin()) == '-') {

			string val = *(str++);
			if ((*val.begin()) == '"') {

				target->insert(par, val);
				
			}


		}
	}
}



// -f ""