//**************************
//*  程序名： 黑白棋    ****             
//*  程序员： 贺心蕊    ****
//*  学号:  1200012713  ****
//**************************

#include "function.h"  //引入自定义函数库

int main() {
	while(1) {
	    cout << "欢迎进入黑白棋世界!\n";
	    cout << "请您选择：新的开始（A）, 旧的回忆（B）,离开游戏（Q）\n请您输入字母（A,B,Q）：";
	    char c1;
	    cin >> c1;
	    if(c1 == 'Q')   // 选择离开游戏
	    {
		    cout << "您确定要离开黑白棋世界么？\n  是（Y） 否（N） 请输入： ";  // 进行退出确认
		    char c2;
		    cin >> c2;
			if(c2 == 'Y') break;  // 退出游戏
			else continue;     // 不退出游戏，重新进入循环
		}
		else if(c1 == 'A')
		{
			start();  // 新开一场游戏
			cout << "是否要再来一盘？ 是（Y） 否（N）\n";  // 游戏结束判断是否要再来一盘
			char cc1;
			cin >> cc1;
			if(cc1 == 'Y') continue;  // 重新进入菜单选择
			else break;  // 退出游戏
		}
		else if(c1 == 'B')
		{
			remember();  // 读取进度
			cout << "是否要再来一盘？ 是（Y） 否（N）\n";   // 游戏结束判断是否要再来一盘
			char cc1;
			cin >> cc1;
			if(cc1 == 'Y') continue;  // 重新进入菜单选择
			else break;  // 退出游戏
		}
		else
		{
			cout << "您的选择无效，请您认真做出选择\n";
		}
	}
	system("pause");
	return 0;
}