#include <SFML/Graphics.hpp>
#include <iostream>
#include <windows.h>

int main() {

    bool lose = false;
    bool win = false;
    bool start = false;

    /*int Xmin = ;
    int Xmax = ;
    int Ymin = ;
    int Ymax = ;*/

    int Fenetre = 500;

    float Larg_R = 20;
    float Long_R = 125;
    int pos_R_X = (Fenetre/2) - (Long_R/2);
    int pos_R_Y = Fenetre - 50;

    int pos_B_X = (Fenetre / 2);
    int pos_B_Y = pos_R_Y - 25;

    /*int pos_BR_X = 100;
    int pos_BR_Y = 20;
    int Larg_BR = ;
    int Haut_BR = ;*/

    sf::RenderWindow window(sf::VideoMode(Fenetre, Fenetre), "Casse Brique");

    sf::CircleShape balle(10);
    balle.setFillColor(sf::Color::Red);  // Blue Green Black White Cyan Magenta 
    balle.setPosition(pos_B_X, pos_B_Y);

    sf::RectangleShape raquette({Long_R, Larg_R});
    raquette.setFillColor(sf::Color::White);  // Blue Green Black White Cyan Magenta 

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right)) {
            pos_R_X++;
        } else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left)) {
            pos_R_X--;
        }
        window.clear();

        raquette.setPosition(pos_R_X, pos_R_Y);

        window.draw(balle);
        window.draw(raquette);

        window.display();
        Sleep(30);
    };
    return 0;
}