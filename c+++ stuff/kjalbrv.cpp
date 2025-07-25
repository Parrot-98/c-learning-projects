#include <SFML/Graphics.hpp>

int main()
{
    sf::RenderWindow window(sf::VideoMode(800, 600), "Circle Example");

    sf::CircleShape circle(100); // radius = 100
    circle.setFillColor(sf::Color::Green);
    circle.setPosition(200, 150);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
            if (event.type == sf::Event::Closed)
                window.close();

        window.clear();
        window.draw(circle);
        window.display();
    }

    return 0;
}
