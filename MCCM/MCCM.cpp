
#include <iostream>
using namespace std;
int code = 0;
//void readAndPrintString(char* str) {
//	cin >> str
//}

void input()
{
	cout << "Please select the command." << endl;
	cout << "1. /ability 赋予或剥夺玩家的能力。" << endl;
	cout << "" << endl;
	cout << "" << endl;
	cout << "" << endl;
	cout << "" << endl;
	cout << "" << endl;
	cout << "" << endl;
	cout << "" << endl;
	cout << "" << endl;
	cin >> code;
}
int ability_1()
{
	cout << "Enter the following parameters." << endl;;
	cout << "1.<player: target>指定要赋予或剥夺能力的玩家。" << endl;
	cout << "2.<ability: Ability>指定要操作的能力。" << endl;;
	cout << "3.<value: Boolean>指定此能力是否对玩家可用(true或false)。" << endl;

	char player[25] ="player";
	char ability[15] = "ability";
	char value[6] = "true";

	cin >> player;

	cout << "worldbuilder给予玩家成为世界建造者的能力。" << endl;
	cout << "mayfly给予飞行的能力。" << endl;
	cout << "mute将玩家禁言。聊天时其他人将无法看见或听见目标。" << endl;
	cin >> ability;

	cin >> value;
	if (!(ability == "worldbuilder" || ability == "ability" || ability != "mute"))
	{
		cout << "<ability: Ability>错误,需为 worldbuilder、mayfly、mute 任何一项！" << endl;
		return 1;
	}
	//----------------------------------------------------------------------------------------------bug
	/*if (!(value =="true"|| value == "false"))
	{
		cout << "<value: Boolean>错误,需为 true、false 任何一项！" << endl;
		return 1;
	}*/
	//---------------------------------------------------------------------------------------------bug
	cout << "Generate as:" << player << " " << ability << " " << value << endl;;
	return 0;
}
int main()
{
	ability_1();
	if (code==0)
	{
		input();
	}
	else if (code == 1)
	{
		if (ability_1() == 1)
		{

		}

	}
	else if (code == 1)
	{

	}
	else if (code == 1)
	{

	}
	else if (code == 1)
	{

	}

}

