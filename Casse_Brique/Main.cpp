#include <SFML/Graphics.hpp>
#include <iostream>
#include <windows.h>

int main() {
    sf::RenderWindow window(sf::VideoMode(200, 200), "Casse Brique");

    sf::CircleShape cercle(10);
    cercle.setFillColor(sf::Color::Red);  // Blue Green Black White Cyan Magenta 
    cercle.setPosition(100, 100);

    sf::RectangleShape raqette({100, 20});
    raqette.setFillColor(sf::Color::White);  // Blue Green Black White Cyan Magenta 

    int posx = 150;
    int posy = 100;

    while (window.isOpen()) {
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right)) {
            posx++;
        }
        raqette.setPosition(posx, posy);

        window.draw(cercle);
        window.draw(raqette);
        window.display();

        Sleep(30);
    };
    return 0;
}