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

    // �������� code �����...  
    return 0;
}
int alwaysday_3()
{
    cout << "�Ƿ���Ϊ���գ���true or false)" << endl;
    string day;
    cin >> day;
    if (day != "true" && day != "false") {
        cout << "[lock: Boolean]����,��Ϊ true��false �κ�һ�" << endl;
        return 1;
    }
    cout << "Generate as:" << " /daylock " << day <<endl;
    return 0;
}
int ban_4()
{
    int x = 1;
    cout << "1.���(UUID)" << endl;
    cout << "2.���(IP)" << endl;
    cout << "3./banlist�������" << endl;
    cin >> x;
    if (x == 1)
    {
        string targets;
        string reason;
        cout << "�����" << endl;
        cin >> targets;
        cout << "Ҫչʾ���������ҡ���������Ա�Լ���������־�е���Ϣ" << endl;
        cin >> reason;
        cout << "/ban" << targets << " " << reason << endl;
    }
    else if (x == 2)
    {
        string targets;
        string reason;
        cout << "�����ip" << endl;
        cin >> targets;
        cout << "Ҫչʾ���������ҡ���������Ա�Լ���������־�е���Ϣ" << endl;
        cin >> reason;
        cout << "/ban-ip" << targets << " " << reason << endl;

    }
    else if (x == 3)
    {
        cout << "ip�б�:" << "/banlist ips" << endl;
        cout<< "����б�:" << "banlist players" << endl;
    }
    return 0;
}