#include <stdio.h>
#include <unistd.h>
#include <signal.h>

void hola(int signalNumb){
    printf("recibí la señal %d", signalNumb);
}

int cond;
void terminarWhile(int sigNumber){
    printf("terminando el while");
    cond = 0;
}

int main(){
    signal(12, terminarWhile);
    signal(2, hola);
    cond = 1;
    while(cond == 1){
        printf("trabajando\n");
        sleep(1);
    }
    printf("aquí nunca llega");
    return 0;
}