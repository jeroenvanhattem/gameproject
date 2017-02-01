#ifndef _main_menu_HPP
#define _main_menu_HPP

#include "objects.hpp"

class main_menu {
public:
	sf::View view1;
	sf::View view2;
	picture level_editor_button;
	picture play_game_button;
	picture load_screen_pic;

	main_menu(sf::RenderWindow & window);
	void show_menu();
	bool button_pressed(picture & object, sf::View & view);
	void load_screen();
private:
	sf::RenderWindow & window;
	picture background;

	void draw_main_menu();
};

#endif