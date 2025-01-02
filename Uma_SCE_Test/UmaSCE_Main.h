#pragma once

#include<string>
#include<map>
using namespace std;

class UmaSCE_Main
{
protected:


	int type_static;
	int friendship_static;

	int friendship_award;
	int enthusiasm_award;
	int training_award;

	int strike_point;
	int friendship_point;

	int speed_bonus;
	int stamina_bonus;
	int power_bonus;
	int willpower_bonus;
	int wit_bonus;
	int sp_bonus;

	double v1_ept;
	double v2_ept;
	double v3_ept;

	int v4main_ept;
	int v4fold_ept;
	int v4sp_ept;

	int v5main_ept;
	int v5fold_ept;
	int v5sp_ept;
public:
	UmaSCE_Main();
	~UmaSCE_Main();

	struct UmaSCE_Main_Diset
	{
		int abex_di[5] = {};
		int tolerance_di[5] = {};
	};

	void Exchange(UmaSCE_Main);//a与b交换
	void Copy(UmaSCE_Main);//a从b复制（b的值给a)
	void Input(string Val_Typename,int Val);//从外部赋值给a
	void Import(int type_static_, int friendship_static_, int friendship_award_, int enthusiasm_award_, int training_award_, int strike_point_, int friendship_point_, int speed_bonus_, int stamina_bonus_, int power_bonus_, int willpower_bonus_, int wit_bonus_, int sp_bonus_);//批量赋值给a
	void Export(int& type_static_, int& friendship_static_, int& friendship_award_, int& enthusiasm_award_, int& training_award_, int& strike_point_, int& friendship_point_, int& speed_bonus_, int& stamina_bonus_, int& power_bonus_, int& willpower_bonus_, int& wit_bonus_, int& sp_bonus_) const;//批量输出a的值,此方法不包括各种得分
	void Output(string Val_Typename);//输出a的值
	void Destroy();//清空a的值
	void Destroy(string Val_Typename);//清空a的值

	void Layout(string Val_Typename, bool is_notice_);//对Uma_SCE_Main进行布局，即设置

	void EvalV1();//计算v1
	double EvalV1(bool is_return);//直接返回值
	void EvalV1(double& Carrier);//直接获得v1_ept

	void EvalV2();//计算v2
	double EvalV2(bool is_return);//直接返回值
	void EvalV2(double& Carrier);//直接获得v2_ept

	void EvalV3();//计算v3
	double EvalV3(bool is_return);//直接返回值
	void EvalV3(double& strike_rate, double& unstrike_rate) const;//获得得意率
	void EvalV3(double& Carrier);//直接获得v3_ept

	void EvalV4();//计算v4
	void EvalV4(int& Carrier_main, int& Carrier_fold, int& Carrier_sp);//直接获得v4_ept
	void EvalV4(double& Carrier_failure_rate);//直接获得failure_rate

	void EvalDi(UmaSCE_Main_Diset diset);//计算di
	void EvalDi(UmaSCE_Main_Diset diset, int& Carrier_main, int& Carrier_fold, int& Carrier_sp);//直接获得di

	void EvalV5();//计算v5

private:

	double unstrike_v1_ept;
	bool is_notice;

	map<string, int> valmap_int{};
	map<string, double> valmap_double{};
	map<string, bool> valmap_bool{};
	void Maprefresh();//更新map
};
