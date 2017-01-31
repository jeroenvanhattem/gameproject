#include "dialogbox.hpp"

dialogbox::dialogbox(std::string box_path, std::string font_path, sf::Vector2f position) :
	font_path(font_path),
	position(position),
	box(box_path, position, { 0,0 })
{
	if (!font.loadFromFile(font_path)) {
		std::cout << "Error while loading font.\n";
	}
	text.setFont(font);
	text.setPosition(position.x + 15, position.y + 20);
}

void dialogbox::draw(sf::RenderWindow & window) {
	box.draw(window);
	window.draw(text);
}

void dialogbox::text_input(std::string sentence, int char_size, sf::Color color) {
	text.setString(sentence+"\n[Press space to continue.]");
	text.setColor(color);
	text.setCharacterSize(char_size);
}