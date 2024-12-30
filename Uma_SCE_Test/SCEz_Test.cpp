#include <iostream>
#include"UmaSCE_Main.h"
using namespace std;

int main()
{
	UmaSCE_Main uma1;
	UmaSCE_Main uma2;
	uma1.Import(0, 10, 30, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0);
	uma1.EvalV4();
	uma1.Output("v4fold_ept") ;
	//uma1.Copy(uma2);
	//uma1.Export("type_static");
	return 0;
}

