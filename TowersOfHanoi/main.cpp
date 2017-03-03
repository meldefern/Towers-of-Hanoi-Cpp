//
//  main.cpp
//  TowersOfHanoi
//
//  Created by Melinda Fernandes on 03/03/2017.
//  Copyright © 2017 Melinda Fernandes. All rights reserved.
//

#include <iostream>
using std::cout;
using std::endl;

void Hanoi(int noOfDisks, char initialPeg, char finalPeg, char tempPeg);

int main(){
    int disks = 3;          //no of desks to move
    char initialPeg = '1';  // set the pegs
    char finalPeg = '3';
    char tempPeg = '2';
    
    Hanoi(disks, initialPeg, finalPeg, tempPeg);
    return 0;
}

void Hanoi(int noOfDisks, char initialPeg, char finalPeg, char tempPeg){
    if (noOfDisks == 1){
        // Move the last disk (the largest from peg1 to peg3)
        cout << initialPeg << "-->" << finalPeg << endl;
    }
    else {
        // Move n-1 disks from peg1 to peg2 using peg3 as temp holding area
        Hanoi(noOfDisks-1, initialPeg, tempPeg, finalPeg);
        // print move
        cout << initialPeg << "-->" << finalPeg << endl;
        // Move n-1 disks from peg2 to peg3, using peg1 as a temp holding area
        Hanoi(noOfDisks-1, tempPeg, finalPeg, initialPeg);
    }
}