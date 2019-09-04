//
// Created by ronal on 2019-09-01.
//

#ifndef PACMAN_AUTOMOVIL_H
#define PACMAN_AUTOMOVIL_H
#include <string>

class Automovil {
private:
    int x;
    int y;
    int largo;
    int ancho;
    char color;
    std::string modelo;
    std::string dueno;
    std::string placa;
    int vx;
    int vy;
    int direccion;
public:
    Automovil(int px, int py, int plargo, int pancho, char pcolor, std::string pmodelo, std::string pdueno,
                std::string pplaca, int pvx, int pvy, int pdireccion):
                x{px}, y{py}, largo{plargo}, ancho{pancho}, color{pcolor}, modelo{pmodelo}, dueno{pdueno},
                placa{pplaca}, vx{pvx}, vy{pvy}, direccion{pdireccion}{};
                //x(px), y(py), largo(plargo), ancho(pancho), color(pcolor), modelo(pmodelo), dueno(pdueno),
                //placa(pplaca), vx(pvx), vy(pvy), direccion(pdireccion){};
    void encender();
    void acelerar();
    void frenar();
    void detener();
    void direccion2(int valor);
    std::string get_dueno();
    std::string get_modelo();
    int get_velocidad();

    Automovil();
};


#endif //PACMAN_AUTOMOVIL_H
