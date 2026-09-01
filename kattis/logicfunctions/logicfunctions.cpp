//Problem Logic Functions - https://open.kattis.com/problems/logicfunctions
#include "logicfunctions.h"

// Compute xor
void exclusive(bool x, bool y, bool& ans){
    if(x == y)
        ans = false; 
    else
        ans = true;
}

// Compute implication
void implies(bool x, bool y, bool& ans){
    if(x == true && y == false)
        ans = false; 
    else
     ans = true;
}

// Compute equivalence
void equivalence(bool x, bool y, bool& ans){
    if(x == y)
        ans = true; 
    else
     ans = false; ;
}
