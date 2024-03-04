#include <iostream>
#include <cstring>
#include "applicant.h"

using namespace std;

int main() {
    int n;
    cout << "How many applicants would you like to process? ";
    cin >> n;

    Applicant *applicants = new Applicant[n];
    Applicant *cali = new Applicant;
    strcpy(cali->first_name, "Cali");

    cout << "Successfully set first applicant's name to "
         << cali->first_name << endl;

    cout << "Cali address: " << cali << endl;
    delete cali;
    
//    cout << "Cali address after delete: " << cali << endl;

//    strcpy(cali->first_name, "Salvador");
//    cout << "Successfully set first applicant's name to "
//         << cali->first_name << endl;

    // double delete, bad!
//    delete cali;

    Applicant *bob = new Applicant;
    strcpy(bob->first_name, "Bob");
//    cout << "Dangling pointer name: "
//         << cali->first_name << endl;

    int x = 0;
    int *p_x = &x;

    // Can't delete memory on the stack
//    delete p_x;

    delete [] applicants;
    delete bob;
    
    return 0;
}
