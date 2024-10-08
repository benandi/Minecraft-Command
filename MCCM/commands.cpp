#include <iostream>  
#include <string>  

using namespace std;

int ability_1() {
    string player, ability, value;

    cout << "Enter the following parameters." << endl;
    cout << "1.<player: target>指定要赋予或剥夺能力的玩家。" << endl;
    cin >> player;

    cout << "选择能力: " << endl;
    cout << "worldbuilder: 成为世界建造者的能力。" << endl;
    cout << "mayfly: 给予飞行的能力。" << endl;
    cout << "mute: 将玩家禁言。" << endl;
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

    cout << "Generate as:" << "/ability " << player << " " << ability << " " << value << endl;
    return 0;
}

int advancement_2() {
    cout << "选择操作类型" << endl;
    cout << "1.授予（grant）或移除（revoke）玩家的全部已载入进度。" << endl;
    cout << "2.授予或移除玩家指定的进度或进度的一项准则。" << endl;
    cout << "3.授予或移除玩家指定进度及其下游的全部进度。" << endl;
    cout << "4.授予或移除玩家指定进度及其全部上游和下游进度" << endl;
    cout << "5.授予或移除玩家指定进度及其全部上游进度。" << endl;
    int code;
    cin >> code;

    string targets;
    string gr;
    cout << "授予（grant）或移除（revoke）" << endl;
    cin >> gr;

    if (gr != "grant" && gr != "revoke") {
        cout << "错误，应为 授予（grant）或移除（revoke）的任何一项" << endl;
        return 1;
    }

    cout << "输入玩家名" << endl;
    cin >> targets;

    if (code == 1) {
        cout << "Generate as:" << "/advancement " << gr << " " << targets << " " << "everything" << endl;
        return 0;
    }

    // 处理其他 code 的情况...  
    return 0;
}
int alwaysday_3()
{
    cout << "是否终为白日？（true or false)" << endl;
    string day;
    cin >> day;
    if (day != "true" && day != "false") {
        cout << "[lock: Boolean]错误,需为 true、false 任何一项！" << endl;
        return 1;
    }
    cout << "Generate as:" << " /daylock " << day <<endl;
    return 0;
}
int ban_4()
{
    int x = 1;
    cout << "1.封禁(UUID)" << endl;
    cout << "2.封禁(IP)" << endl;
    cout << "3./banlist封禁名单" << endl;
    cin >> x;
    if (x == 1)
    {
        string targets;
        string reason;
        cout << "玩家名" << endl;
        cin >> targets;
        cout << "要展示给被封禁玩家、其他管理员以及服务器日志中的信息" << endl;
        cin >> reason;
        cout << "/ban" << targets << " " << reason << endl;
    }
    else if (x == 2)
    {
        string targets;
        string reason;
        cout << "玩家名ip" << endl;
        cin >> targets;
        cout << "要展示给被封禁玩家、其他管理员以及服务器日志中的信息" << endl;
        cin >> reason;
        cout << "/ban-ip" << targets << " " << reason << endl;

    }
    else if (x == 3)
    {
        cout << "ip列表:" << "/banlist ips" << endl;
        cout<< "玩家列表:" << "banlist players" << endl;
    }
    return 0;
}