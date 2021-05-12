#pragma once

#ifdef PDW_PLATFORM_WINDOWS

extern Padawan::Application* Padawan::CreateApplication();

int main(int argc, char** argv)
{
    printf("Padawan Engine");
    auto app = Padawan::CreateApplication();
    app->Run();
    delete app;
}

#else
    #error Padawn only supports Windows!
#endif