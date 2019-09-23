#include <iostream>
#include <SFML/Graphics.hpp>
#include "Clases/Automovil.h"
#include "Clases/Juego.h"

int main()
{
    Juego Pong (600,400,"Pong");
    Pong.ejecutar();
    return 0;
}