#include <iostream>
#include <limits>

/* The purpose of this arithmetic computation is 
 * to convert Feet to Meters using User Input. 
 * 
 * To do this we first have to assign a variable (float)
 * this is the rate of feet in a meter. 
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
