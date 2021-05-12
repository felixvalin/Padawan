#include <Padawan.h>

class ConsoleChess : public Padawan::Application
{
public:
    ConsoleChess()
    {

    }

    ~ConsoleChess()
    {
    }
};

Padawan::Application* Padawan::CreateApplication()
{
    return new ConsoleChess;
}