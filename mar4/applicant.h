// This module defines the Applicant structure and associated helper functions.
// An Applicant represents the information about a person applying
// to immigrate to Canada under the Federal Skilled Worker Program.
#ifndef APPLICANT_H
#define APPLICANT_H

#include <iostream>

const int BUFSIZE = 128;

struct Applicant {
    char first_name[BUFSIZE];
    char last_name[BUFSIZE];
    int age;
    char marital_status[BUFSIZE];
    int language[4];
    bool all_2;
    char education[BUFSIZE];
    int work_experience;
    bool arranged_employment;
    bool adaptability[6];
    bool adaptability_you_work;

    int score;
};

#endif // APPLICANT_H

