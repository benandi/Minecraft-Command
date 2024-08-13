#pragma once
#include <iostream>  
#include <string>
class command
{
    public:
        int ability_1() {
            string player, ability, value;

            cout << "Enter the following parameters." << endl;
            cout << "1.<player: target>指定要赋予或剥夺能力的玩家。" << endl;
            cin >> player;

            cout << "worldbuilder给予玩家成为世界建造者的能力。" << endl;
            cout << "mayfly给予飞行的能力。" << endl;
            cout << "mute将玩家禁言。聊天时其他人将无法看见或听见目标。" << endl;
            cin >> ability;

            cout << "3.<value: Boolean>指定此能力是否对玩家可用(true或false)。" << endl;
            cin >> value;

            // 检查 ability 是否为有效值  
            if (ability != "worldbuilder" && ability != "mayfly" && ability != "mute") {
                cout << "<ability: Ability>错误,需为 worldbuilder、mayfly、mute 任何一项！" << endl;
                return 1;
            }

            // 检查 value 是否为 true 或 false  
            if (value != "true" && value != "false") {
                cout << "<value: Boolean>错误,需为 true、false 任何一项！" << endl;
                return 1;
            }

            cout << "Generate as:" << "/ability" << player << " " << ability << " " << value << endl;
            return 0;
        }

}cm;