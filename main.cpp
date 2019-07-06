#include<bits/stdc++.h>
#include<windows.h> 
using namespace std;
ofstream fout("sc.txt");
int uid,we;
int main() {
	cout<<"请输入您的UID，谢谢！\n";
	cin>>uid;
	cout<<"正在为您生成触摸屏专用的退出代码...\n";
	Sleep(500);
	system("cls");
	cout<<"请输入您的UID，谢谢！\n";
	cout<<uid<<'\n';
	cout<<"生成完毕！内容为[退出用户（触摸屏专用）](https://www.luogu.org/login/logout?uid="<<uid<<")\n";
	Sleep(100); 
	cout<<"您可以将它贴入到个人主页当中\n";
	Sleep(100); 
	cout<<"您是否需要输出到文件中？需要请输入1\n";
	cin>>we;
	if(we==1) {
		fout<<"[退出用户（触摸屏专用）](https://www.luogu.org/login/logout?uid="<<uid<<")\n";
		cout<<"输出完毕！文件为sc.txt\n";
	}
	system("pause"); 
	return 0;
}
