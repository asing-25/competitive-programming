//Problem Counting Days - https://open.kattis.com/problems/countingdays
#include "countingdays.h"

int last_hours{}; 
int last_minutes{}; 
int current_days = 1; 

void lookAtClock(int hours, int minutes) {
    if(last_hours > hours || (last_hours == hours && last_minutes >= minutes))
        current_days++; 
    last_hours = hours; 
    last_minutes = minutes; 
}

int getDay() {
    return current_days;
}
