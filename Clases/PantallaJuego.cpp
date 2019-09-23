//
// Created by ronal on 19/09/19.
//

#include "PantallaJuego.h"
#include "iostream"

PantallaJuego::PantallaJuego(float l, float a, sf::RenderWindow *ptrWnd) {
    largo = l;
    alto = a;
    ptrWindow = ptrWnd;
    ptr_player1 = new Jugador(0,10,100,true,20,80,ptrWindow);
    ptr_player2 = new Jugador(0,570,100,false,20,80,ptrWindow);
    ptr_ball = new Pelota(300,300, true,true,50,ptrWindow);
}

void PantallaJuego::dibujar() {
    ptr_player1->dibujar();
    ptr_player2->dibujar();
    ptr_ball->dibujar();
}

PantallaJuego::~PantallaJuego() {
    delete ptr_player1;
    delete ptr_player2;
    delete ptr_ball;
}

void PantallaJuego::actualizar(bool ev, sf::Event evento) {
    //sf::Event event;
    if (ev) {
        if (evento.key.code == sf::Keyboard::Up)
            ptr_player1->set_vely(false);
        else if (evento.key.code == sf::Keyboard::Down)
            ptr_player1->set_vely(true);

    }
    movimiento_jugador(ptr_player1);
    movimiento_jugador(ptr_player2);
    movimiento_pelota(ptr_ball);
}

void PantallaJuego::movimiento_jugador(Jugador *player){
    float pos_play = player->get_posy();
    bool vely_play = player->get_vely();

    mov_dim(vely_play, pos_play, alto - player->get_alto());
    player->set_posy(pos_play);
    player->set_vely(vely_play);
}

void PantallaJuego::movimiento_pelota(Pelota *ball) {
    float pos_ball[2] = {ball->get_posx(), ball->get_posy()};
    bool *vel_ball = ball->get_vel();
    //std::cout << vel_ball[0] << " " << vel_ball[1] << std::endl;

    if (pos_ball[0]==ptr_player1->get_posx())
        if (std::abs(pos_ball[1]+ball->get_diam()/2-ptr_player1->get_posy()-ptr_player1->get_alto()/2) < ptr_player1->get_alto()*0.75)
            vel_ball[0]=true;
        else
            pos_ball[0]=largo/2;

    mov_dim (vel_ball[0],pos_ball[0],largo - ball->get_diam());
    mov_dim (vel_ball[1],pos_ball[1],alto - ball->get_diam());
    ball->set_posx(pos_ball[0]);
    ball->set_posy(pos_ball[1]);
    ball->set_vel(vel_ball);
}


void PantallaJuego::mov_dim(bool &vel, float &pos, float max_pos){
    if (vel)
        if (pos < max_pos)
            pos = pos+1;
        else
            vel = false;
    else
        if (pos >0)
            pos = pos-1;
        else
            vel = true;
}
