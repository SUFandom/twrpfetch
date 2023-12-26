#include <iostream>
#include <ostream>
// #include <filesystem> // No longer including Sprite Import atm, soon
#include <stdlib.h>
#include <unistd.h>
#include <string>
#include <cstdlib>
#include <cstdio>


// Include the headers
#include "components/header_cpp/print.hpp"
#include "components/header_cpp/print_no_endl.hpp"
#include "components/header_src/sh.hpp"
#include "components/header_cpp/barrier.hpp"


using std::cout;
using std::endl;
using std::string;
using std::cerr;

int main() {
    barrier();
    //system(SPRITE);
    cout << endl; // Added this because to create Newline
    barrier();
    cout << "TWRPFETCH FOR " << version_id << twrp_version << endl;
    barrier();
    cout << "Hardware: " << grab_hardware << endl;
    cout << "Device: " << grab_device << endl;
    cout << "Model: " << grab_model << endl;
    cout << "Brand: " << grab_brand << endl;
    cout << "Bootloader: " << grab_bootloader << endl;
    cout << "Is Dynamic? : " << check_dynamic << endl;
    cout << "Architecture Platform: " << grab_arch_platform << endl;
    cout << "ABI: " << grab_abi << endl;
    cout << "Android Version: " << android_rel << " , SDK: " << android_sdk << endl;
    barrier(); 
}
