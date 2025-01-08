#include "UmaSCE_UI.h"
#include<iostream>
#include<string>
using namespace std;

void UmaSCE_UI::UIcolor(int color)
{
	switch (color)
	{
	case 1:cout << "\033[1m\033[31m"; break;
	case 2:cout << "\033[1m\033[33m"; break;
	case 3:cout << "\033[1m\033[32m"; break;
	case 4:cout << "\033[1m\033[37m"; break;
	case 5:cout << "\033[1m\033[35m"; break;
	case 6:cout << "\033[1m\033[36m"; break;
	default:cout << "\033[39m"; break;
	}
}

void UmaSCE_UI::UIspecific(char spec)
{
	if (spec == '_')
		cout << "\033[1m\033[4m";
	else if (spec == '-')
		cout << "\033[1m\033[9m";
}

void UmaSCE_UI::UIreset()
{
	cout << "\033[0m";
}

void UmaSCE_UI::print_text(string text, int color, char spec)
{
	UIcolor(color);
	UIspecific(spec);
	cout << text;
	UIreset();
}

void UmaSCE_UI::print_option(string option, int key, int color, char spec)
{
	UIcolor(color);
	UIspecific(spec);
	cout <<"[" << key << "] " << option;
	UIreset();
}

void UmaSCE_UI::print_tip(string tip, int color, char spec)
{
	UIcolor(color);
	UIspecific(spec);
	switch (color)
	{
	case 1:cout << "¡Á " << tip << " ¡Á"; break;
	case 2:cout << "! " << tip << " !"; break;
	case 3:cout << "- " << tip << " -"; break;
	default:cout << tip;
	}
	UIreset();
}

void UmaSCE_UI::print_retrack(int width_, int level)
{
	string blank;
	for (int i = 0; i < width_; i++)
	{
		blank[i] = ' ';
	}
	for (int i = 1; i <= level; i++)
	{
		cout << blank;
	}
	UIreset();
}

void UmaSCE_UI::endl_()
{
	cout << endl;
}

void UmaSCE_UI::cls()
{
	system("cls");
}
