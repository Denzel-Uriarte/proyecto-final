#include "mensajes.hpp"
#include <string>

std::string textos[20] = {
    "Farlan, 1342, un rey obsesionado con el poder de una bella dama que transformaba todo en oro,",
    "esa joven dama se llamaba Alei, una dama que fue desechada de su pueblo por tener poderes misticos,",
    "otorgados por el sabio y todo poderoso Dios. ",
};

std::string conseguirMensaje(int texto) {
    return textos[texto];
}
