#include <iostream>  
#include "commands.cpp"  // Include commands header if used in separate header  

using namespace std;

int code = 0;

void input() {
    cout << "Please select the command." << endl;
    cout << "1. /ability 赋予或剥夺玩家的能力。" << endl;
    //cout << "2. /advancement 给予或移除玩家的进度或某一进度的一项准则（Criterion）。（Java）" << endl;
    cout << "3.锁定或解锁终为白日。(仅基岩版）" << endl;
    cout << "4./ban封禁系列(仅java版）" << endl;
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
                // Handle error (if needed)  
            }
        }
        else if (code == 2) {
            if (advancement_2() != 0) {
                // Handle error (if needed)  
            }
        }
        else if (code == 3) {
            if (alwaysday_3() != 0) {
                // Handle error (if needed)  
            }
        }
        else if (code == 4) {
            if (ban_4() != 0) {
                // Handle error (if needed)  
            }
        }
        // 处理其他 code 的情况...  
    }
    
    return 0;
}