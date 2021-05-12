#pragma once

#include "Core.h"

namespace Padawan {

    class PADAWAN_API Application
    {
    public:
        Application();
        virtual ~Application();

        void Run();
    };


    // To be defined in CLIENT
    Application* CreateApplication();

}