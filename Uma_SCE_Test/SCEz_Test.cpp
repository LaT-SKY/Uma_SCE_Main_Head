#include <iostream>
#include"UmaSCE_Main.h"
#include<random>
#include<time.h>
#include"UmaSCE_UI.h"
using namespace std;

int main()
{
	UmaSCE_Main uma1;
	UmaSCE_Main uma2;
	uma1.Import(0, 10, 30, 0, 0, 0, 35, 0, 0, 0, 6, 0, 0);
	UmaSCE_UI umaui1;
	umaui1.print_tip("Eval", 1,'9');
}

