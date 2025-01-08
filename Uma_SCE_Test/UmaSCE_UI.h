#pragma once
#include "UmaSCE_Main.h"
class UmaSCE_UI :private UmaSCE_Main
{
public:
	void UIcolor(int color);
	void UIspecific(char spec);
	void UIreset();

	void print_text(string text, int color, char spec);

	void print_option(string option,int key, int color, char spec);

	void print_tip(string tip, int color, char spec);

	void print_retrack(int width_, int level);


	void endl_();
	void cls();
};

