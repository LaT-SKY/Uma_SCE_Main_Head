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

	void Exchange(UmaSCE_Main);//a��b����
	void Copy(UmaSCE_Main);//a��b���ƣ�b��ֵ��a)
	void Input(string Val_Typename,int Val);//���ⲿ��ֵ��a
	void Import(int type_static_, int friendship_static_, int friendship_award_, int enthusiasm_award_, int training_award_, int strike_point_, int friendship_point_, int speed_bonus_, int stamina_bonus_, int power_bonus_, int willpower_bonus_, int wit_bonus_, int sp_bonus_);//������ֵ��a
	void Export(int& type_static_, int& friendship_static_, int& friendship_award_, int& enthusiasm_award_, int& training_award_, int& strike_point_, int& friendship_point_, int& speed_bonus_, int& stamina_bonus_, int& power_bonus_, int& willpower_bonus_, int& wit_bonus_, int& sp_bonus_) const;//�������a��ֵ,�˷������������ֵ÷�
	void Output(string Val_Typename);//���a��ֵ
	void Destroy();//���a��ֵ
	void Destroy(string Val_Typename);//���a��ֵ

	void Layout(string Val_Typename, bool is_notice_);//��Uma_SCE_Main���в��֣�������

	void EvalV1();//����v1
	double EvalV1(bool is_return);//ֱ�ӷ���ֵ
	void EvalV1(double& Carrier);//ֱ�ӻ��v1_ept

	void EvalV2();//����v2
	double EvalV2(bool is_return);//ֱ�ӷ���ֵ
	void EvalV2(double& Carrier);//ֱ�ӻ��v2_ept

	void EvalV3();//����v3
	double EvalV3(bool is_return);//ֱ�ӷ���ֵ
	void EvalV3(double& strike_rate, double& unstrike_rate) const;//��õ�����
	void EvalV3(double& Carrier);//ֱ�ӻ��v3_ept

	void EvalV4();//����v4
	void EvalV4(int& Carrier_main, int& Carrier_fold, int& Carrier_sp);//ֱ�ӻ��v4_ept
	void EvalV4(double& Carrier_failure_rate);//ֱ�ӻ��failure_rate

	void EvalDi(UmaSCE_Main_Diset diset);//����di
	void EvalDi(UmaSCE_Main_Diset diset, int& Carrier_main, int& Carrier_fold, int& Carrier_sp);//ֱ�ӻ��di

	void EvalV5();//����v5

private:

	double unstrike_v1_ept;
	bool is_notice;

	map<string, int> valmap_int{};
	map<string, double> valmap_double{};
	map<string, bool> valmap_bool{};
	void Maprefresh();//����map
};
