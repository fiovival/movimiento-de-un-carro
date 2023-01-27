#include<conio.h>
#include<iostream>
#include"Auto.h"

int main() {
	Auto* ObjetoAuto;
	ObjetoAuto = new Auto(5, 5);
	ObjetoAuto->dibujar();

	while (true) {

		ObjetoAuto->borrar();
		ObjetoAuto->mover();
		ObjetoAuto->dibujar();
		_sleep(50);
	}

	system("pause>0");
	_getch();
	return 0;
}
