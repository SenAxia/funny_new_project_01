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

        draw () {}
        ~draw () {}
    };

    class graphic {
        public:
        RenderWindow window = RenderWindow(VideoMode(1000,800),"Sander");

        graphic () {}
        ~graphic () {}

        void initLoop() {
            while (window.isOpen()) {
                Event e;
                while (window.pollEvent(e)) {
                    if (Mouse::isButtonPressed(Mouse::Left)) {
                        Vector2i pix_pos = Mouse::getPosition();
                        //window.close();
                    }
                    if (e.type == Event::Closed)
                        window.close();
                }
            }
            window.clear();
            window.display();
        }
    };

#endif