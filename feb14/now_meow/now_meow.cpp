#include "now_meow.h"
#include <cstring>

using namespace std;

// private helper function to replace a substring
void str_replace(char *str, const char* original, const char* updated) {    
    // Get the length of the original and new substrings
    int og_len = static_cast<int>(strlen(original));
    int new_len = static_cast<int>(strlen(updated));
    int shift = new_len - og_len;

    char *pstr = strstr(str, original);

    while (pstr != NULL) {
	// get a pointer to the end of the string
        char *back_ptr = strrchr(str, '\0');
	
        // shift the characters in str by the difference in lengths
	// Assumes the array is not full!
	while (back_ptr != pstr + shift) {
	    *(back_ptr + shift) = *back_ptr;
	    back_ptr--;
	}
		
	// Copy the updated string to the original
	memcpy(pstr, updated, new_len);

	// Find the next occurrence of the substring
	pstr = strstr(pstr + new_len, original);
    }
}

void copy_and_meow(istream &in, ostream &out) {
    const int MAX_LINE = 1024;
    char line[MAX_LINE];
    while (in.getline(line, MAX_LINE)) {
        str_replace(line, "now", "meow");
        out << line << endl;
    }
}
