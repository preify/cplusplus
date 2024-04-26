#include <iostream>
#include <limits>

/* The purpose of this arithmetic computation is 
 * to convert Feet to Meters using User Input. 
 * 
 * (1) Declare feet in 1 meter
 * (2) Ask for user input
 * (3) Check if user input is a valid data type
 * (4) Multiply user input with fixed rate
 */ 

using namespace std;
int main() {
    float feet_meter = 3.2808399;         
    float user_input, meters;                   
            cout << "Feet to convert to meters" << endl;
            cin >> user_input;
                    if (cin.good()){                            // We create a loop to find out if 
                        meters = (feet_meter * user_input);     // the user has inputed the correct
                        cout << meters;                         // datatype, in this case that would
                    } else {                                    // be a number.
                        cout << "invalid code.";
                        return 0;
                    }
}
