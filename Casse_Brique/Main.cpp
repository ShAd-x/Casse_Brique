#include <SFML/Graphics.hpp>
#include <iostream>

int main() {

	sf::RenderWindow window(sf::VideoMode(800, 600), "Title");

	sf::Event e;

	while (window.isOpen()) {
		while(window.pollEvent(e)){
			if (e.type == sf::Event::Closed) {
				window.close();
			}
		}
	}
	return 0;
}