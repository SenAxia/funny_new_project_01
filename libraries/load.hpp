// Class to run all libraries
/*
 ** Differents part details here:
    -- More...
*/

#ifndef _LOAD_HPP
    #define _LOAD_HPP
    #include <iostream>
    #include "./Graphics/graphic.hpp"

    using namespace std;

    class load {
        public:
        graphic window;

        load () {}
        ~load () {}

        void manageWindow()
        {
            window.initLoop();
        }
    };

#endif