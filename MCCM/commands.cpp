#include <iostream>  
#include <string>  

using namespace std;

int ability_1() {
    string player, ability, value;

    cout << "Enter the following parameters." << endl;
    cout << "1.<player: target>ָ��Ҫ����������������ҡ�" << endl;
    cin >> player;

    cout << "ѡ������: " << endl;
    cout << "worldbuilder: ��Ϊ���罨���ߵ�������" << endl;
    cout << "mayfly: ������е�������" << endl;
    cout << "mute: ����ҽ��ԡ�" << endl;
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

    cout << "Generate as:" << "/ability " << player << " " << ability << " " << value << endl;
    return 0;
}

int advancement_2() {
    cout << "ѡ���������" << endl;
    cout << "1.���裨grant�����Ƴ���revoke����ҵ�ȫ����������ȡ�" << endl;
    cout << "2.������Ƴ����ָ���Ľ��Ȼ���ȵ�һ��׼��" << endl;
    cout << "3.������Ƴ����ָ�����ȼ������ε�ȫ�����ȡ�" << endl;
    cout << "4.������Ƴ����ָ�����ȼ���ȫ�����κ����ν���" << endl;
    cout << "5.������Ƴ����ָ�����ȼ���ȫ�����ν��ȡ�" << endl;
    int code;
    cin >> code;

    string targets;
    string gr;
    cout << "���裨grant�����Ƴ���revoke��" << endl;
    cin >> gr;

    if (gr != "grant" && gr != "revoke") {
        cout << "����ӦΪ ���裨grant�����Ƴ���revoke�����κ�һ��" << endl;
        return 1;
    }

    cout << "���������" << endl;
    cin >> targets;

    if (code == 1) {
        cout << "Generate as:" << "/advancement " << gr << " " << targets << " " << "everything" << endl;
        return 0;
    }
    else if (code == 2)
    {

    }
    else if (code == 3)
    {

    }
    else if (code == 4)
    {

    }
    else if (code == 5)
    {

    }
    else
    {

    }


    
    return 0;
}