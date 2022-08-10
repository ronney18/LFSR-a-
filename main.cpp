/*
 * Name: Ronney Sanchez
 * Date: September26
 * Course: COMP2040 Computing IV
 * Assignment: PS2a
 * Email: Ronney_Sanchez@student.uml.edu
 */
// Copyright 2018 Ronney Sanchez

#include <string>
#include "LFSR.hpp"

int main(int argc, char* argv[]) {
    if (argc != 3) {
        cout << "LFSR executable file [seed-string] [tap-position]" << endl;
        return -1;
    }

    string seed = argv[1];
    int tap = atoi(argv[2]);

    cout << "Bit pattern is " << seed << " with tap " << tap << " ." << endl;
    LFSR binaryString(seed, tap);

    cout << "OUTPUT FOR 10 STEPS" << endl;
    cout << "---------------------------------" <<  endl;
    for (int i = 0; i < 10; i++) {
                cout << binaryString << " " << binaryString.step() <<  endl;
    }

    cout << "\nOUTPUT FOR GENERATE 5 STEPS 10 TIMES" << endl;
    cout << "---------------------------------------" << endl;
    for (int i = 0; i < 10; i++) {
        cout << binaryString << " " << binaryString.generate(5) << endl;
    }
}
