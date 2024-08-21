#include <iostream>  
#include "commands.cpp"  // Include commands header if used in separate header  

using namespace std;

int code = 0;

void input() {
    cout << "Please select the command." << endl;
    cout << "1. /ability 赋予或剥夺玩家的能力。" << endl;
    cout << "2. /advancement 给予或移除玩家的进度或某一进度的一项准则（Criterion）。（Java）" << endl;
    cout << "" << endl;
    cin >> code;
}

int main() {
    while (true) {
        input();
        if (code == 0) {
            return 0;
        }
        else if (code == 1) {
            if (ability_1() != 0) {
                  
            }
        }
        else if (code == 2) {
            if (advancement_2() != 0) {
                  
            }
        }
        
    }
    return 0;
}