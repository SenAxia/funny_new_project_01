// Class with function to manage SFML display
/*
 ** Differents part details here:
    -- More...
*/

#ifndef _GRAPHIC_HPP
    #define _GRAPHIC_HPP
    #include <iostream>
    #include <SFML/Graphics.hpp>

    using namespace std;
    using namespace sf;

    class draw {
        public:
        RectangleShape dots;

        draw () {}
        ~draw () {}

        void drawPixels(vector<Vector2i> coords, RenderWindow window) {
            for (auto pixels_coords : coords) {
                dots.setSize({1, 1});
                dots.setPosition(Vector2f(pixels_coords.x, pixels_coords.y));
                dots.setFillColor(Color::Red);
                window.draw(dots);
            }
        }
    };

    class graphic {
        public:
        RenderWindow window = RenderWindow(VideoMode(1000,800),"Sander");
        // vector<Vector2i> coordPoses;
        draw pixels;
        RectangleShape dots;

        graphic () {}
        ~graphic () {}

        void drawPixels(vector<Vector2i> coords, RenderWindow& window) {
            for (auto pixels_coords : coords) {
                dots.setSize({1, 1});
                dots.setPosition(Vector2f(pixels_coords.x, pixels_coords.y));
                dots.setFillColor(Color::Red);
                window.draw(dots);
            }
        }

        void initLoop() {
            while (window.isOpen()) {
                Event e;
                while (window.pollEvent(e)) {
                    if (Mouse::isButtonPressed(Mouse::Left)) {
                        Vector2i coordPoses = Mouse::getPosition(window);
                        dots.setSize({1, 1});
                        dots.setPosition(Vector2f(coordPoses.x, coordPoses.y));
                        dots.setFillColor(Color::Red);
                        window.draw(dots);
                    }
                    if (e.type == Event::Closed)
                        window.close();
                }
                window.display();
            }
            window.clear();
        }
    };

#endif