#include "UmaSCE_Main.h"
#include <type_traits>
#include <iostream>
#include<math.h>
#include<vector>
#include<time.h>
#include<random>
using namespace std;

UmaSCE_Main::UmaSCE_Main() 
{
	//private
	unstrike_v1_ept = 0;
	is_notice = true;

	//protected
    type_static = 0;
    friendship_static = 0;
    friendship_award = 0;
    enthusiasm_award = 0;
    training_award = 0;
    strike_point = 0;
    friendship_point = 0;
    speed_bonus = 0;
    stamina_bonus = 0;
    power_bonus = 0;
    willpower_bonus = 0;
    wit_bonus = 0;
    sp_bonus = 0;
	v1_ept = 0;
	v2_ept = 0;
	v3_ept = 0;
	v4main_ept = 0;
	v4fold_ept = 0;
	v4sp_ept = 0;
	v5main_ept = 0;
	v5fold_ept = 0;
	v5sp_ept = 0;

}

UmaSCE_Main::~UmaSCE_Main() 
{
	;
}

//void UmaSCE_Main::Maprefresh()
//{
//	valmap_int =
//	{
//		{"type_static",type_static},
//		{"friendship_static",friendship_static},
//		{"friendship_award",friendship_award},
//		{"enthusiasm_award",enthusiasm_award},
//		{"training_award",training_award},
//		{"strike_point",strike_point},
//		{"friendship_point",friendship_point},
//		{"speed_bonus",speed_bonus},
//		{"stamina_bonus",stamina_bonus},
//		{"power_bonus",power_bonus},
//		{"willpower_bonus",willpower_bonus},
//		{"wit_bonus",wit_bonus},
//		{"sp_bonus",sp_bonus},
//		{"v4main_ept",v4main_ept},
//		{"v4fold_ept",v4fold_ept},
//		{"v4sp_ept",v4sp_ept},
//		{"v5main_ept",v5main_ept},
//		{"v5fold_ept",v5fold_ept},
//		{"v5sp_ept",v5sp_ept}
//	};
//	valmap_double =
//	{
//		{"v1_ept",v1_ept},
//		{"v2_ept",v2_ept},
//		{"v3_ept",v3_ept}
//	};
//	valmap_bool =
//	{
//		{"is_notice",is_notice}
//	};
//}

void UmaSCE_Main::Exchange(UmaSCE_Main& temp) 
{
	//Maprefresh();
	//auto main_int_iterator = valmap_int.begin();
	//auto main_double_iterator = valmap_double.begin();
	//auto main_bool_iterator = valmap_bool.begin();
	//auto temp_int_iterator = temp.valmap_int.begin();
	//auto temp_double_iterator = temp.valmap_double.begin();
	//auto temp_bool_iterator = temp.valmap_bool.begin();
	//while (main_int_iterator != valmap_int.end())
	//{
	//	swap(main_int_iterator->second, temp_int_iterator->second);
	//	main_int_iterator++;
	//	temp_int_iterator++;
	//}
	//while (main_double_iterator != valmap_double.end())
	//{
	//	swap(main_double_iterator->second, temp_double_iterator->second);
	//	main_double_iterator++;
	//	temp_double_iterator++;
	//}
	//while (main_bool_iterator != valmap_bool.end())
	//{
	//	swap(main_bool_iterator->second, temp_bool_iterator->second);
	//	main_bool_iterator++;
	//	temp_bool_iterator++;
	//}
	//Maprefresh();
    swap(type_static, temp.type_static);
    swap(friendship_static, temp.friendship_static);
    swap(friendship_award, temp.friendship_award);
    swap(enthusiasm_award, temp.enthusiasm_award);
    swap(training_award, temp.training_award);
    swap(strike_point, temp.strike_point);
    swap(friendship_point, temp.friendship_point);
    swap(speed_bonus, temp.speed_bonus);
    swap(stamina_bonus, temp.stamina_bonus);
    swap(power_bonus, temp.power_bonus);
    swap(willpower_bonus, temp.willpower_bonus);
    swap(wit_bonus, temp.wit_bonus);
    swap(sp_bonus, temp.sp_bonus);
	swap(v1_ept, temp.v1_ept);
	swap(v2_ept, temp.v2_ept);
	swap(v3_ept, temp.v3_ept);
	swap(v4main_ept, temp.v4main_ept);
	swap(v4fold_ept, temp.v4fold_ept);
	swap(v4sp_ept, temp.v4sp_ept);
	swap(v5main_ept, temp.v5main_ept);
	swap(v5fold_ept, temp.v5fold_ept);
	swap(v5sp_ept, temp.v5sp_ept);
}

void UmaSCE_Main::Copy(UmaSCE_Main temp) 
{
	//Maprefresh();
	//auto main_int_iterator = valmap_int.begin();
	//auto main_double_iterator = valmap_double.begin();
	//auto main_bool_iterator = valmap_bool.begin();
	//auto temp_int_iterator = temp.valmap_int.begin();
	//auto temp_double_iterator = temp.valmap_double.begin();
	//auto temp_bool_iterator = temp.valmap_bool.begin();
	//while (main_int_iterator != valmap_int.end())
	//{
	//	main_int_iterator->second = temp_int_iterator->second;
	//	main_int_iterator++;
	//	temp_int_iterator++;
	//}
	//while (main_double_iterator != valmap_double.end())
	//{
	//	main_double_iterator->second = temp_double_iterator->second;
	//	main_double_iterator++;
	//	temp_double_iterator++;
	//}
	//while (main_bool_iterator != valmap_bool.end())
	//{
	//	main_bool_iterator->second = temp_bool_iterator->second;
	//	main_bool_iterator++;
	//	temp_bool_iterator++;
	//}
	//Maprefresh();
    type_static = temp.type_static;
    friendship_static = temp.friendship_static;
    friendship_award = temp.friendship_award;
    enthusiasm_award = temp.enthusiasm_award;
    training_award = temp.training_award;
    strike_point = temp.strike_point;
    friendship_point = temp.friendship_point;
    speed_bonus = temp.speed_bonus;
    stamina_bonus = temp.stamina_bonus;
    power_bonus = temp.power_bonus;
    willpower_bonus = temp.willpower_bonus;
    wit_bonus = temp.wit_bonus;
    sp_bonus = temp.sp_bonus;
	v1_ept = temp.v1_ept;
	v2_ept = temp.v2_ept;
	v3_ept = temp.v3_ept;
	v4main_ept = temp.v4main_ept;
	v4fold_ept = temp.v4fold_ept;
	v4sp_ept = temp.v4sp_ept;
	v5main_ept = temp.v5main_ept;
	v5fold_ept = temp.v5fold_ept;
	v5sp_ept = temp.v5sp_ept;
}

void UmaSCE_Main::Input(string Val_Typename, int Value) 
{
	//if (Value < 0 and is_notice)
	//{
	//	throw("Value不能为负数");
	//	abort();
	//}
	//Maprefresh();
	//auto int_iterator = valmap_int.find(Val_Typename);
	//if (int_iterator != valmap_int.end())
	//{
	//	int_iterator->second = Value;
	//}
	//else
	//{
	//	if (is_notice)
	//	{
	//		throw("无法识别的Val_Typename");
	//		abort();
	//	}
	//}
	//Maprefresh();
    if (Val_Typename == "type_static" and is_notice) 
	{
        type_static = Value;
		if (type_static > 4)
		{
			throw("type_static的值只能是[ 0 , 4 ]");
			abort();
		}
    } 
	else if (Val_Typename == "friendship_static") 
	{
        friendship_static = Value;
    } 
	else if (Val_Typename == "friendship_award") 
	{
        friendship_award = Value;
    } 
	else if (Val_Typename == "enthusiasm_award") 
	{
        enthusiasm_award = Value;
    } 
	else if (Val_Typename == "training_award") 
	{
        training_award = Value;
    } 
	else if (Val_Typename == "strike_point") 
	{
        strike_point = Value;
    } 
	else if (Val_Typename == "friendship_point") 
	{
        friendship_point = Value;
    } 
	else if (Val_Typename == "speed_bonus") 
	{
        speed_bonus = Value;
    } 
	else if (Val_Typename == "stamina_bonus") 
	{
        stamina_bonus = Value;
    } 
	else if (Val_Typename == "power_bonus") 
	{
        power_bonus = Value;
    } 
	else if (Val_Typename == "willpower_bonus") 
	{
        willpower_bonus = Value;
    } 
	else if (Val_Typename == "wit_bonus") 
	{
        wit_bonus = Value;
    } 
	else if (Val_Typename == "sp_bonus") 
	{
        sp_bonus = Value;
	}
    else if (Val_Typename == "v1_ept") 
	{
        v1_ept = Value;
	}
	else if (Val_Typename == "v2_ept") 
	{
		v2_ept = Value;
	}
	else if (Val_Typename == "v3_ept") 
	{
		v3_ept = Value;
	}
	else if (Val_Typename == "v4main_ept") 
	{
		v4main_ept = Value;
	}
	else if (Val_Typename == "v4fold_ept") 
	{
		v4fold_ept = Value;
	}
	else if (Val_Typename == "v4sp_ept") 
	{
		v4sp_ept = Value;
	}
	else if (Val_Typename == "v5main_ept") 
	{
		v5main_ept = Value;
	}
	else if (Val_Typename == "v5fold_ept") 
	{
		v5fold_ept = Value;
	}
    else if (Val_Typename == "v5sp_ept") 
	{
        v5sp_ept = Value;
	}
	else
	{
		if (is_notice)
		{
			throw("无法识别的Val_Typename");
			abort();
		}
	}
}

void UmaSCE_Main::Import(int type_static_, int friendship_static_, int friendship_award_, int enthusiasm_award_, int training_award_, int strike_point_, int friendship_point_, int speed_bonus_, int stamina_bonus_, int power_bonus_, int willpower_bonus_, int wit_bonus_, int sp_bonus_)
{
	type_static = type_static_;
	friendship_static = friendship_static_;
	friendship_award = friendship_award_;
	enthusiasm_award = enthusiasm_award_;
	training_award = training_award_;
	strike_point = strike_point_;
	friendship_point = friendship_point_;
	speed_bonus = speed_bonus_;
	stamina_bonus = stamina_bonus_;
	power_bonus = power_bonus_;
	willpower_bonus = willpower_bonus_;
	wit_bonus = wit_bonus_;
	sp_bonus = sp_bonus_;
}

void UmaSCE_Main::Export(int& type_static_, int& friendship_static_, int& friendship_award_, int& enthusiasm_award_, int& training_award_, int& strike_point_, int& friendship_point_, int& speed_bonus_, int& stamina_bonus_, int& power_bonus_, int& willpower_bonus_, int& wit_bonus_, int& sp_bonus_) const
{
	type_static_ = type_static;
	friendship_static_ = friendship_static;
	friendship_award_ = friendship_award;
	enthusiasm_award_ = enthusiasm_award;
	training_award_ = training_award;
	strike_point_ = strike_point;
	friendship_point_ = friendship_point;
	speed_bonus_ = speed_bonus;
	stamina_bonus_ = stamina_bonus;
	power_bonus_ = power_bonus;
	willpower_bonus_ = willpower_bonus;
	wit_bonus_ = wit_bonus;
	sp_bonus_ = sp_bonus;
}

void UmaSCE_Main::Export(double& v1_ept_, double& v2_ept_, double& v3_ept_, int& v4main_ept_, int& v4fold_ept_, int& v4sp_ept_, int& v5main_ept_, int& v5fold_ept_, int& v5sp_ept_)
{
	v1_ept_ = v1_ept;
	v2_ept_ = v2_ept;
	v3_ept_ = v3_ept;
	v4main_ept_ = v4main_ept;
	v4fold_ept_ = v4fold_ept;
	v4sp_ept_ = v4sp_ept;
	v5main_ept_ = v5main_ept;
	v5fold_ept_ = v5fold_ept;
	v5sp_ept_ = v5sp_ept;
}

void UmaSCE_Main::Output(string Val_Typename) 
{
	//Maprefresh();
	//auto int_iterator = valmap_int.find(Val_Typename);
	//auto double_iterator = valmap_double.find(Val_Typename);
	//auto bool_iterator = valmap_bool.find(Val_Typename);
	//if (int_iterator != valmap_int.end())
	//{
	//	cout << int_iterator->second;
	//}
	//else if (double_iterator != valmap_double.end())
	//{
	//	cout << double_iterator->second;
	//}
	//else if (bool_iterator != valmap_bool.end())
	//{
	//	cout << bool_iterator->second;
	//}
	//else
	//{
	//	if (is_notice)
	//	{
	//		throw("无法识别的Val_Typename");
	//		abort();
	//	}
	//}
    if (Val_Typename == "type_static") 
	{
        cout << type_static;
    } 
	else if (Val_Typename == "friendship_static") 
	{
        cout << friendship_static;
    } 
	else if (Val_Typename == "friendship_award") 
	{
        cout << friendship_award;
    } 
	else if (Val_Typename == "enthusiasm_award") 
	{
        cout << enthusiasm_award;
    } 
	else if (Val_Typename == "training_award") 
	{
        cout << training_award;
    } 
	else if (Val_Typename == "strike_point") 
	{
        cout << strike_point;
    } 
	else if (Val_Typename == "friendship_point") 
	{
        cout << friendship_point;
    } 
	else if (Val_Typename == "speed_bonus") 
	{
        cout << speed_bonus;
    } 
	else if (Val_Typename == "stamina_bonus") 
	{
        cout << stamina_bonus;
    } 
	else if (Val_Typename == "power_bonus") 
	{
        cout << power_bonus;
    } 
	else if (Val_Typename == "willpower_bonus") 
	{
        cout << willpower_bonus;
    } 
	else if (Val_Typename == "wit_bonus") 
	{
        cout << wit_bonus;
    } 
	else if (Val_Typename == "sp_bonus") 
	{
        cout << sp_bonus;
	}
	else if (Val_Typename == "v1_ept") 
	{
		cout << v1_ept;
	}
	else if (Val_Typename == "v2_ept") 
	{
		cout << v2_ept;
	}
	else if (Val_Typename == "v3_ept") 
	{
		cout << v3_ept;
	}
	else if (Val_Typename == "v4main_ept") 
	{
		cout << v4main_ept;
	}
	else if (Val_Typename == "v4fold_ept") 
	{
		cout << v4fold_ept;
	}
	else if (Val_Typename == "v4sp_ept") 
	{
		cout << v4sp_ept;
	}
	else if (Val_Typename == "v5main_ept") 
	{
		cout << v5main_ept;
	}
	else if (Val_Typename == "v5fold_ept") 
	{
		cout << v5fold_ept;
	}
    else if (Val_Typename == "v5sp_ept") 
	{
        cout << v5sp_ept;
    }
	else
	{
		if(is_notice)
		{
			throw ("无法识别的Val_Typename");
			abort();
		}
	}
}

void UmaSCE_Main::Destroy()
{
	type_static = 0;
	friendship_static = 0;
	friendship_award = 0;
	enthusiasm_award = 0;
	training_award = 0;
	strike_point = 0;
	friendship_point = 0;
	speed_bonus = 0;
	stamina_bonus = 0;
	power_bonus = 0;
	willpower_bonus = 0;
	wit_bonus = 0;
	sp_bonus = 0;
	v1_ept = 0;
	v2_ept = 0;
	v3_ept = 0;
	v4main_ept = 0;
	v4fold_ept = 0;
	v4sp_ept = 0;
	v5main_ept = 0;
	v5fold_ept = 0;
	v5sp_ept = 0;
}

void UmaSCE_Main::Destroy(string Val_Typename)
{
	if (Val_Typename == "ALL")
	{
		type_static = 0;
		friendship_static = 0;
		friendship_award = 0;
		enthusiasm_award = 0;
		training_award = 0;
		strike_point = 0;
		friendship_point = 0;
		speed_bonus = 0;
		stamina_bonus = 0;
		power_bonus = 0;
		willpower_bonus = 0;
		wit_bonus = 0;
		sp_bonus = 0;
		v1_ept = 0;
		v2_ept = 0;
		v3_ept = 0;
		v4main_ept = 0;
		v4fold_ept = 0;
		v4sp_ept = 0;
		v5main_ept = 0;
		v5fold_ept = 0;
		v5sp_ept = 0;
	}
    else if (Val_Typename == "EPT")
    {
		v1_ept = 0;
		v2_ept = 0;
		v3_ept = 0;
		v4main_ept = 0;
		v4fold_ept = 0;
		v4sp_ept = 0;
		v5main_ept = 0;
		v5fold_ept = 0;
		v5sp_ept = 0;
    }
	else if (Val_Typename == "VAL")
	{
		type_static = 0;
		friendship_static = 0;
		friendship_award = 0;
		enthusiasm_award = 0;
		training_award = 0;
		strike_point = 0;
		friendship_point = 0;
		speed_bonus = 0;
		stamina_bonus = 0;
		power_bonus = 0;
		willpower_bonus = 0;
		wit_bonus = 0;
		sp_bonus = 0;
	}
	else
	{
		if (is_notice)
		{
			throw("无法识别的Val_Typename");
			abort();
		}
	}
}

void UmaSCE_Main::Layout(string Val_Typename,int Val)
{
	if (Val_Typename == "notice")
	{
		is_notice = Val;
	}
	else if (Val_Typename == "is_dominant_lead")
	{
		is_dominant_lead = Val;
	}
	else if (length)
	{
		length = Val;
	}
	else
	{
		if (is_notice)
		{
			throw("无法识别的Val_Typename");
			abort();
		}
	}
}

void UmaSCE_Main::EvalV1()
{
	v1_ept = (friendship_award * 0.01 + 1) * (friendship_static * 0.01 + 1) * (enthusiasm_award * 0.002 + 1) * (training_award * 0.01 + 1);
	unstrike_v1_ept = (enthusiasm_award * 0.002 + 1) * (training_award * 0.01 + 1);
	if (v1_ept < 0 and is_notice)
	{
		throw("v1_ept的值发生异常，其结果不能为负数");
		abort();
	}
}

double UmaSCE_Main::EvalV1(bool is_report)
{
	EvalV1();
	return v1_ept;
}

void UmaSCE_Main::EvalV1(double& Carrier)
{
	EvalV1();
	Carrier = v1_ept;
}

void UmaSCE_Main::EvalV2()
{
	int v2_bonus = 0;
	switch (type_static)
	{
	case 0:v2_bonus = speed_bonus; break;
	case 1:v2_bonus = stamina_bonus; break;
	case 2:v2_bonus = power_bonus; break;
	case 3:v2_bonus = willpower_bonus; break;
	case 4:v2_bonus = wit_bonus; break;
	default:if (is_notice) { throw("意料之外的type_static值"); abort(); }
	}
	EvalV1();
	v2_ept = v1_ept + 0.1 * v1_ept * v2_bonus;
	if (v2_ept < 0 and is_notice)
	{
		throw("v2_ept的值发生异常，其结果不能为负数");
		abort();
	}
}

double UmaSCE_Main::EvalV2(bool is_report)
{
	EvalV2();
	return v2_ept;
}

void UmaSCE_Main::EvalV2(double& Carrier)
{
	EvalV2();
	Carrier = v2_ept;
}

void UmaSCE_Main::EvalV3()
{
	int v3_bonus = 0;
	switch (type_static)
	{
	case 0:v3_bonus = speed_bonus; break;
	case 1:v3_bonus = stamina_bonus; break;
	case 2:v3_bonus = power_bonus; break;
	case 3:v3_bonus = willpower_bonus; break;
	case 4:v3_bonus = wit_bonus; break;
	default:if (is_notice) { throw("意料之外的type_static值"); abort(); }
	}
	EvalV2();
	double strike_rate = (strike_point + static_cast<double>(100)) / (strike_point + 550);
	double unstrike_rate = 100 / (strike_point + static_cast<double>(550));
	double strike_v2_ept = v1_ept + 0.1 * v1_ept * v3_bonus;
	double unstrike_v2_ept = unstrike_v1_ept + 0.1 * unstrike_v1_ept * v3_bonus;
	v3_ept = ((strike_rate * strike_v2_ept + (unstrike_rate * unstrike_v2_ept) * 4) - 0.909) * 10000;
	if (v3_ept < 0 and is_notice)
	{
		throw("v3_ept的值发生异常，其结果不能为负数");
		abort();
	}
}

double UmaSCE_Main::EvalV3(bool is_report)
{
	EvalV3();
	return v3_ept;
}

void UmaSCE_Main::EvalV3(double& strike_rate, double& unstrike_rate) const
{
	strike_rate = (strike_point + static_cast<double>(100)) / (strike_point + 550);
	unstrike_rate = 100 / (strike_point + static_cast<double>(550));
}

void UmaSCE_Main::EvalV3(double& Carrier)
{
	EvalV3();
	Carrier = v3_ept;
}

void UmaSCE_Main::EvalV4()
{
	EvalV2();
	double unstrike_v2_ept = unstrike_v1_ept + 0.1 * unstrike_v1_ept * sp_bonus;
	double strike_rate = (strike_point + static_cast<double>(100)) / (strike_point + 550);
	double unstrike_rate = 100 / (strike_point + static_cast<double>(550));
	double failure_rate = ((static_cast<double>(80) - friendship_point) / 5) / 72;
	double failure_strike_rate = failure_rate * strike_rate;
	double success_strike_rate = strike_rate - failure_strike_rate;
	double failure_unstrike_rate = failure_rate * unstrike_rate;
	double success_unstrike_rate = unstrike_rate - failure_unstrike_rate;

	v4main_ept = ((v2_ept * success_strike_rate) + (unstrike_v2_ept * failure_strike_rate) - strike_rate) * 10000;
	v4sp_ept = ((failure_strike_rate + failure_unstrike_rate) * (unstrike_v1_ept + 0.1 * unstrike_v1_ept * sp_bonus) + (success_strike_rate + success_unstrike_rate) * (v1_ept + 0.1 * v1_ept * sp_bonus) - (strike_rate + unstrike_rate)) * 10000;

	switch (type_static)
	{
	case 0:v4fold_ept = (unstrike_rate * (4 * unstrike_v1_ept + 0.1 * unstrike_v1_ept * (stamina_bonus + power_bonus + willpower_bonus + wit_bonus)) - 4*unstrike_rate) * 10000;break;
	case 1:v4fold_ept = (unstrike_rate * (4 * unstrike_v1_ept + 0.1 * unstrike_v1_ept * (speed_bonus + power_bonus + willpower_bonus + wit_bonus)) - 4*unstrike_rate) * 10000; break;
	case 2:v4fold_ept = (unstrike_rate * (4 * unstrike_v1_ept + 0.1 * unstrike_v1_ept * (speed_bonus + stamina_bonus + willpower_bonus + wit_bonus)) - 4*unstrike_rate) * 10000; break;
	case 3:v4fold_ept = (unstrike_rate * (4 * unstrike_v1_ept + 0.1 * unstrike_v1_ept * (speed_bonus + stamina_bonus + power_bonus + wit_bonus)) - 4*unstrike_rate) * 10000; break;
	case 4:v4fold_ept = (unstrike_rate * (4 * unstrike_v1_ept + 0.1 * unstrike_v1_ept * (speed_bonus + stamina_bonus + power_bonus + willpower_bonus)) - 4*unstrike_rate) * 10000; break;
	default:if (is_notice) { throw("意料之外的type_static值"); abort(); }
	}
	if(is_notice)
	{
		if (v4main_ept < 0)
		{
			throw("v4main_ept的值发生异常，其结果不能为负数");
			abort();
		}
		if (v4fold_ept < 0)
		{
			throw("v4fold_ept的值发生异常，其结果不能为负数");
			abort();
		}
		if (v4sp_ept < 0)
		{
			throw("v4sp_ept的值发生异常，其结果不能为负数");
			abort();
		}
	}
}

void UmaSCE_Main::EvalV4(int& Carrier_main, int& Carrier_fold, int& Carrier_sp)
{
	EvalV4();
	Carrier_main = v4main_ept;
	Carrier_fold = v4fold_ept;
	Carrier_sp = v4sp_ept;
}

void UmaSCE_Main::EvalV4(double& Carrier_failure_rate)
{
	EvalV4();
	Carrier_failure_rate = ((static_cast<double>(80) - friendship_point) / 5) / 72;
}

void UmaSCE_Main::EvalDi(UmaSCE_Main_Diset diset)
{
	UmaSCE_Main transcript{};
	int all_friendship_award = (((friendship_award * 0.01 + 1) * (friendship_static * 0.01 + 1)) - 1) * 100;

	int arrv[5] = { all_friendship_award,enthusiasm_award,training_award,strike_point,friendship_point };
	double scaling_di[5] = { 0,0,0,0,0 };

	for (int i = 0; i < 5; i++)
	{
		scaling_di[i] = - cos(arrv[i] * 0.5 * sqrt(diset.abex_di[i] * diset.abex_di[i] * diset.tolerance_di[i] * 0.01));
	}
	transcript.type_static = type_static;
	//if()
	transcript.friendship_award += all_friendship_award * scaling_di[0];
	transcript.enthusiasm_award += enthusiasm_award * scaling_di[1];
	transcript.training_award += training_award * scaling_di[2];
	transcript.strike_point += strike_point * scaling_di[3];
	transcript.friendship_point += friendship_point * scaling_di[4];
	transcript.speed_bonus = speed_bonus;
	transcript.stamina_bonus = stamina_bonus;
	transcript.power_bonus = power_bonus;
	transcript.willpower_bonus = willpower_bonus;
	transcript.wit_bonus = wit_bonus;
	transcript.sp_bonus = sp_bonus;
	transcript.EvalV4();
	v4main_ept = transcript.v4main_ept;
	v4fold_ept = transcript.v4fold_ept;
	v4sp_ept = transcript.v4sp_ept;
}

void UmaSCE_Main::EvalDi(UmaSCE_Main_Diset diset, int& Carrier_main, int& Carrier_fold, int& Carrier_sp)
{
	EvalDi(diset);
	Carrier_main = v4main_ept;
	Carrier_fold = v4fold_ept;
	Carrier_sp = v4sp_ept;
}

void UmaSCE_Main::EvalV5(int times)
{
	vector<UmaSCE_Main>card_vector(6);
	//初始化card_vector.pressent_ground
	for (auto& i : card_vector)
	{
		i.present_ground = -1;
	}
	//分配s卡
	if (is_dominant_lead)
	{
		if (length < 3)
		{
			//0,0,2,2,4,4
			card_vector[0].type_static = 0;
			card_vector[1].type_static = 0;
			card_vector[2].type_static = 2;
			card_vector[3].type_static = 2;
			card_vector[4].type_static = 4;
			card_vector[5].type_static = 4;
		}
		else
		{
			//0,0,1,1,2,4
			card_vector[0].type_static = 0;
			card_vector[1].type_static = 0;
			card_vector[2].type_static = 1;
			card_vector[3].type_static = 1;
			card_vector[4].type_static = 2;
			card_vector[5].type_static = 4;
		}
	}
	else
	{
		if (length < 3)
		{
			//0,0,2,2,3,4
			card_vector[0].type_static = 0;
			card_vector[1].type_static = 0;
			card_vector[2].type_static = 2;
			card_vector[3].type_static = 2;
			card_vector[4].type_static = 3;
			card_vector[5].type_static = 4;
		}
		else if(length==4)
		{
			//0,0,1,2,2,4
			card_vector[0].type_static = 0;
			card_vector[1].type_static = 0;
			card_vector[2].type_static = 1;
			card_vector[3].type_static = 2;
			card_vector[4].type_static = 2;
			card_vector[5].type_static = 4;
		}
		else
		{
			//0,0,1,1,2,4
			card_vector[0].type_static = 0;
			card_vector[1].type_static = 0;
			card_vector[2].type_static = 1;
			card_vector[3].type_static = 1;
			card_vector[4].type_static = 2;
			card_vector[5].type_static = 4;
		}
	}
	//分配属性
	for (auto& i : card_vector)
	{
		switch (i.type_static)
		{
		case 0:
			i.friendship_award = 30;
			i.enthusiasm_award = 0;
			i.training_award = 10;
			i.friendship_point = 35;
			i.strike_point = 100;
			i.speed_bonus = 3;
			i.power_bonus = 2;
			i.sp_bonus = 1;
			break;
		case 1:
			i.friendship_award = 30;
			i.enthusiasm_award = 30;
			i.training_award = 10;
			i.friendship_point = 30;
			i.strike_point = 65;
			i.sp_bonus = 1;
			i.stamina_bonus = 2;
			i.willpower_bonus = 1;
			break;
		case 2:
			i.friendship_award = 30;
			i.enthusiasm_award = 30;
			i.training_award = 10;
			i.friendship_point = 20;
			i.strike_point = 65;
			i.sp_bonus = 1;
			i.power_bonus = 3;
			i.stamina_bonus = 1;
			break;
		case 3:
			i.friendship_award = 30;
			i.enthusiasm_award = 0;
			i.training_award = 0;
			i.friendship_point = 20;
			i.strike_point = 50;
			i.sp_bonus = 1;
			i.speed_bonus = 1;
			i.power_bonus = 2;
			i.willpower_bonus = 1;
			break;
		case 4:
			i.friendship_award = 30;
			i.enthusiasm_award = 50;
			i.training_award = 20;
			i.friendship_point = 25;
			i.strike_point = 80;
			i.sp_bonus = 2;
			i.wit_bonus = 1;
			i.speed_bonus = 1;
			break;
		default:if (is_notice) { throw("意料之外的type_static值"); abort(); }
		}
	}
	//将玩家的属性覆盖
	for (auto& i : card_vector)
	{
		if (i.type_static == type_static)
		{
			i.friendship_award = friendship_award;
			i.enthusiasm_award = enthusiasm_award;
			i.training_award = training_award;
			i.friendship_point = friendship_point;
			i.strike_point = strike_point;
			i.speed_bonus = speed_bonus;
			i.stamina_bonus = stamina_bonus;
			i.power_bonus = power_bonus;
			i.willpower_bonus = willpower_bonus;
			i.wit_bonus = wit_bonus;
			i.sp_bonus = sp_bonus;
			break;
		}
	}
	{//test
		int m = 0;
		cout << "scard prop:" << endl;
		for (auto i : card_vector)
		{
			cout << "index:" << m;
			cout << "type" << i.type_static;
			cout << "fs" << i.friendship_award << endl;
			m++;

		}
	}


	//定义外圈循环中的全局变量
	struct Attributes_struct
	{
		int present;
		int expectation;
	};
	struct Ground_struct
	{
		double friendship_rate;
		int training_award;
		int enthusiasm_award;
		int member_award;
		int ground_bonus;
		vector<int> viceground_bonus;
		int spground_bonus;
		int added;
		vector<int> viceadded;
		int spadded;
		int click_times;
		int temp_click_times;
		int scale;
		int score;
	};
	struct Strike_rate_struct
	{
		double strike_rate;
		double unstrike_rate;
	};
	int round;
	int stage;
	vector<Attributes_struct> attributes_vector(6);
	vector<Ground_struct> ground_vector(5);
	vector<Strike_rate_struct> strike_rate_vector(6);
	{
		int m = 0;
		for (auto& i : card_vector)
		{
			strike_rate_vector[m].strike_rate = (i.strike_point + static_cast<double>(100)) / (i.strike_point + 550);
			strike_rate_vector[m].unstrike_rate = (100 / (i.strike_point + static_cast<double>(550))) * 4;
			m++;
		}//i结束
	}
	{//test
		int m = 0;
		for (auto i : strike_rate_vector)
		{
			cout << "index:" << m << endl;
			cout << "str:" << i.strike_rate;
			cout << "unstr:" << i.unstrike_rate << endl;
			m++;
		}
	}
	srand(time(NULL));


	//外圈循环
	while (times > 0)
	{
		//此处还有初始化
		round = 0;
		stage = 0;
		{//test
			cout << "剩余times:" << times << "  round:" << round << endl;
			system("pause");
		}
		for (auto& i : attributes_vector)
		{
			i.present = 0;
			i.expectation = 0;
		}//i结束


		while (round < 73)
		{
			//内圈循环
			{//test
				cout << "round:" << round << endl;
				system("pause");
			}


			for (auto& i : ground_vector)
			{
				i.friendship_rate = 1;
				i.training_award = 0;
				i.enthusiasm_award = 0;
				i.member_award = 0;
				i.ground_bonus = 0;
				i.viceground_bonus = { 0,0,0,0,0,0 };
				i.spground_bonus = 0;
				i.added = 0;
				i.viceadded = { 0,0,0,0,0,0 };
				i.spadded = 0;
				i.click_times = 0;
				i.temp_click_times = 0;
				i.scale = 1;
				i.score = 0;
			}//i结束
			++round;


			//分配支援卡至各个场地
			{
				int m = 0;
				for (auto& i : card_vector)
				{
					double temp_check_strike = rand() % 1001 / static_cast<double>(1000);
					{//test
						cout << "temp_check_strike:" << temp_check_strike << endl;
					}
					if (temp_check_strike < strike_rate_vector[m].strike_rate)
					{
						{//test
							cout << "strike true" << endl;
						}
						i.present_ground = i.type_static;
						//present_ground为私有成员
					}
					else if (temp_check_strike < strike_rate_vector[m].strike_rate+strike_rate_vector[m].unstrike_rate)
					{
						i.present_ground = rand() % 5;
						while (i.present_ground == i.type_static)
						{
							i.present_ground = rand() % 5;
						}
					}
					else
					{
						i.present_ground = -1;
					}
					m++;

				}//i结束
			}
			{//test
				cout << "i.present:";
				for (auto& i : card_vector)
				{
					cout << i.present_ground << ",";
				}
				cout << endl;
				system("pause");
			}


			//分配s卡信息至各个ground_vector内
			for (auto& i : card_vector)
			{
				if(i.present_ground>=0)
				{
					ground_vector[i.present_ground].training_award += i.training_award;
					ground_vector[i.present_ground].enthusiasm_award += i.enthusiasm_award;
					if (i.present_friendship_point >= 80 and i.present_ground == i.type_static)
					{
						ground_vector[i.present_ground].friendship_rate *= (i.friendship_award * 0.01 + 1) * (i.friendship_static * 0.01 + 1);
					}
					ground_vector[i.present_ground].member_award += 1;
				}
			}//i结束
			//分配bonus至各个ground_vector内
			for (auto& i : card_vector)
			{
				if (i.type_static == 0 and i.present_ground == 0)
				{
					ground_vector[0].ground_bonus += i.speed_bonus;
					ground_vector[0].viceground_bonus[1] += i.stamina_bonus;
					ground_vector[0].viceground_bonus[2] += i.power_bonus;
					ground_vector[0].viceground_bonus[3] += i.willpower_bonus;
					ground_vector[0].viceground_bonus[4] += i.wit_bonus;
					ground_vector[0].spground_bonus += i.sp_bonus;
				}
				else if (i.type_static == 1 and i.present_ground == 1)
				{
					ground_vector[1].ground_bonus += i.stamina_bonus;
					ground_vector[1].viceground_bonus[0] += i.speed_bonus;
					ground_vector[1].viceground_bonus[2] += i.power_bonus;
					ground_vector[1].viceground_bonus[3] += i.willpower_bonus;
					ground_vector[1].viceground_bonus[4] += i.wit_bonus;
					ground_vector[1].spground_bonus += i.sp_bonus;
				}
				else if (i.type_static == 2 and i.present_ground == 2)
				{
					ground_vector[2].ground_bonus += i.power_bonus;
					ground_vector[2].viceground_bonus[0] += i.speed_bonus;
					ground_vector[2].viceground_bonus[1] += i.stamina_bonus;
					ground_vector[2].viceground_bonus[3] += i.willpower_bonus;
					ground_vector[2].viceground_bonus[4] += i.wit_bonus;
					ground_vector[2].spground_bonus += i.sp_bonus;
				}
				else if (i.type_static == 3 and i.present_ground == 3)
				{
					ground_vector[3].ground_bonus += i.willpower_bonus;
					ground_vector[3].viceground_bonus[0] += i.speed_bonus;
					ground_vector[3].viceground_bonus[1] += i.stamina_bonus;
					ground_vector[3].viceground_bonus[2] += i.power_bonus;
					ground_vector[3].viceground_bonus[4] += i.wit_bonus;
					ground_vector[3].spground_bonus += i.sp_bonus;
				}
				else if (i.type_static == 4 and i.present_ground == 4)
				{
					ground_vector[4].ground_bonus += i.wit_bonus;
					ground_vector[4].viceground_bonus[0] += i.speed_bonus;
					ground_vector[4].viceground_bonus[1] += i.stamina_bonus;
					ground_vector[4].viceground_bonus[2] += i.power_bonus;
					ground_vector[4].viceground_bonus[3] += i.willpower_bonus;
					ground_vector[4].spground_bonus += i.sp_bonus;
				}
			}//i结束


			//计算added  viceadded与spadded
			{
				int m = 0;
				for (auto& i : ground_vector)
				{
					int temp_basic_bonus{};
					int temp_vicebouns;
					int temp_spbonus;
					switch (i.scale)
					{
					case 1:temp_basic_bonus = 10; temp_vicebouns = 3; temp_spbonus = 2; break;
					case 2:temp_basic_bonus = 11; temp_vicebouns = 4; temp_spbonus = 3; break;
					case 3:temp_basic_bonus = 12; temp_vicebouns = 5; temp_spbonus = 4; break;
					case 4:temp_basic_bonus = 13; temp_vicebouns = 6; temp_spbonus = 5; break;
					case 5:temp_basic_bonus = 14; temp_vicebouns = 7; temp_spbonus = 6; break;
					default:if (is_notice) { throw("意料之外的scale值"); abort(); }
					}
					i.added = (temp_basic_bonus + i.ground_bonus) * i.friendship_rate * (i.training_award * 0.01 + 1) * (i.enthusiasm_award * 0.002 + 1) * (i.member_award * 0.05 + 1);
					//viceadded

					m++;
				}
			}
			{//test
				{
					int m = 0;
					cout << "ground:" << endl;
					for (auto i : ground_vector)
					{
						cout << "index:" << m;
						cout << "added:" << i.added;
						cout << "viceadded:";
						for (auto m : i.viceadded)
						{
							cout << m << ",";
						}
						cout << endl;
						m++;

					}
				}
			}


		}//内圈循环结束
	}//外圈循环结束
}
