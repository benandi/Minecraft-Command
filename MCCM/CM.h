#pragma once
#include <iostream>  
#include <string>
class command
{
    public:
        int ability_1() {
            string player, ability, value;

            cout << "Enter the following parameters." << endl;
            cout << "1.<player: target>ָ��Ҫ����������������ҡ�" << endl;
            cin >> player;

            cout << "worldbuilder������ҳ�Ϊ���罨���ߵ�������" << endl;
            cout << "mayfly������е�������" << endl;
            cout << "mute����ҽ��ԡ�����ʱ�����˽��޷�����������Ŀ�ꡣ" << endl;
            cin >> ability;

            cout << "3.<value: Boolean>ָ���������Ƿ����ҿ���(true��false)��" << endl;
            cin >> value;

            // ��� ability �Ƿ�Ϊ��Чֵ  
            if (ability != "worldbuilder" && ability != "mayfly" && ability != "mute") {
                cout << "<ability: Ability>����,��Ϊ worldbuilder��mayfly��mute �κ�һ�" << endl;
                return 1;
            }

            // ��� value �Ƿ�Ϊ true �� false  
            if (value != "true" && value != "false") {
                cout << "<value: Boolean>����,��Ϊ true��false �κ�һ�" << endl;
                return 1;
            }

            cout << "Generate as:" << "/ability" << player << " " << ability << " " << value << endl;
            return 0;
        }

}cm;