#include <iostream>
#include <string>
#include <unistd.h>
#include <stdio.h>
#include <filesystem> // Needs CPP 17 
#include <cstdlib>
// #include <windows.h> // For Windows Debugging using Visual Studio, not the code one
// #include "crc/pass.h"

// I think this should be at another area
// NOTE: Rework all to CPP later

// #include "crc/twrpid.h"
// #include "crc/version.h"
// #include "crc/bind.h"

using std::cout;
using std::endl;
using std::string;
using std::cerr;


// Note to people looking:
// Argc - Argument count number
// Argv - Argument Variable
 //Comment if args/funcs not using FS lib and/or not in prod
int main(int argc, char* argv[]) {
const int TOO_MUC_ARG = 230;
const int EMPTY = 1;
const int WRONG_FILE = 210;
const int CORRECT = 0;
    if (argc > 2) {
        cout << "TOO MUCH ARGUMENTS WAS PASSED" << endl ;
        cout << "Cannot allow the file" << endl ;
        sleep (5);
        return TOO_MUC_ARG;
    } else if (argc == 1) {
        // cout << "Empty Response" << endl; // Comment this
        return EMPTY;
    } else if (argc == 2) {
        string floc = argv[1];
        std::filesystem::path loc(floc);
        if (loc.extension() == ".arcii") {
            // cout << "Debug " << argv[1] << endl; // Comment this
            // std::filesystem::path fullLocation = std::filesystem::canonical(floc);
            // cout << fullLocation << endl;
            // return CORRECT;
            try {
                std::filesystem::path fullLocation = std::filesystem::canonical(floc);
                // cout << "Full Path: " << fullLocation << endl;
                return CORRECT;
            } catch (std::filesystem::filesystem_error & err) {
                cerr << "Error: " << err.what() << endl;
                return WRONG_FILE;
            }
            return CORRECT;
        } else {
            // cout << "Debug " << argv[1] << endl; // Comment this 
            return WRONG_FILE; 
        }
    } 
}