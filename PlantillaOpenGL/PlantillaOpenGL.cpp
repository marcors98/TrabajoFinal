// PlantillaOpenGL.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"

#include <stdio.h>
#include <stdlib.h>

#define GLEW_STATIC

#include "GL/glew.h"
#include "GLFW/glfw3.h"

#include <iostream>

using namespace std;

//sueloVerde
void sueloVerde() {
	glBegin(GL_POLYGON);
	glColor3f(0.035, 0.57, 0.26);
	glVertex3f(-1.0f, -0.5f, 0.0f);
	glVertex3f(-1.0f, -1.0f, 0.0f);
	glVertex3f(1.0f, -1.0f, 0.0f);
	glVertex3f(1.0f, -0.5f, 0.0f);
	glEnd();

	//AGUA
	glBegin(GL_POLYGON);
	glColor3f(0.07, 0.66, 0.89);
	glVertex3f(-0.35f, -0.5f, 0.0f);
	glVertex3f(-0.35f, -1.0f, 0.0f);
	glVertex3f(-0.15f, -1.0f, 0.0f);
	glVertex3f(-0.15f, -0.5f, 0.0f);
	glEnd();

	//ARBUSTO
	glBegin(GL_POLYGON);
	glColor3f(0.1, 0.35, 0.17);
	for (int i = 0; i < 360; i++) {
		glVertex3f(0.15*cos((double)i*3.14159 / 180.0) - 0.7, 0.1* sin((double)i*3.14159 / 180.0) + -0.5, 0);
	}
	glEnd();

	//PIEDRA
	glBegin(GL_POLYGON);
	glColor3f(0.37, 0.39, 0.39);
	glVertex3f(0.75f, -0.6f, 0.0f);
	glVertex3f(0.73f, -0.5f, 0.0f);
	glVertex3f(0.75f, -0.45f, 0.0f);
	glVertex3f(0.85f, -0.45f, 0.0f);
	glVertex3f(0.88f, -0.5f, 0.0f);
	glVertex3f(0.85f, -0.6f, 0.0f);
	glEnd();

	//PINO
	//Tronco
	glBegin(GL_POLYGON);
	glColor3f(0.3, 0.06, 0.05);
	glVertex3f(0.4f, -0.6f, 0.0f);
	glVertex3f(0.4f, -0.4f, 0.0f);
	glVertex3f(0.45f, -0.4f, 0.0f);
	glVertex3f(0.45f, -0.6f, 0.0f);
	glEnd();
	//Hojas
	glBegin(GL_POLYGON);
	glColor3f(0.035, 0.57, 0.26);
	for (int i = 0; i < 360; i++) {
		glVertex3f(0.1*cos((double)i*3.14159 / 180.0) + 0.425, 0.15* sin((double)i*3.14159 / 180.0) + -0.33, 0);
	}
	glEnd();

	//Tronco
	glBegin(GL_POLYGON);
	glColor3f(0.69, 0.31, 0.07);
	glVertex3f(0.1f, -0.6f, 0.0f);
	glVertex3f(0.1f, -0.4f, 0.0f);
	glVertex3f(0.05f, -0.4f, 0.0f);
	glVertex3f(0.05f, -0.6f, 0.0f);
	glEnd();
}

//sueloDesierto
void sueloDesierto() {
	glBegin(GL_POLYGON);
	glColor3f(0.82, 0.58, 0.17);
	glVertex3f(-1.0f, -0.5f, 0.0f);
	glVertex3f(-1.0f, -1.0f, 0.0f);
	glVertex3f(1.0f, -1.0f, 0.0f);
	glVertex3f(1.0f, -0.5f, 0.0f);
	glEnd();

	//Sahuaro1
	glBegin(GL_POLYGON);
	glColor3f(0.03f, 0.5f, 0.05f);
	//base
	glVertex3f(-0.5f, -0.6f, 0.0f);
	glVertex3f(-0.55f, -0.6f, 0.0f);
	//izquierda-bajo
	glVertex3f(-0.55f, -0.45f, 0.0f);
	//brazo-izquierdo
	glVertex3f(-0.6f, -0.45f, 0.0f);
	glVertex3f(-0.6f, -0.4f, 0.0f);
	glVertex3f(-0.57f, -0.4f, 0.0f);
	glVertex3f(-0.57f, -0.45f, 0.0f);
	//termina-brazo
	glVertex3f(-0.55f, -0.45f, 0.0f);
	glVertex3f(-0.55f, -0.25f, 0.0f);
	glVertex3f(-0.5f, -0.25f, 0.0f);
	glVertex3f(-0.5f, -0.45f, 0.0f);
	//brazo-derecho
	glVertex3f(-0.48f, -0.45f, 0.0f);
	glVertex3f(-0.48f, -0.4f, 0.0f);
	glVertex3f(-0.45f, -0.4f, 0.0f);
	glVertex3f(-0.45f, -0.45f, 0.0f);
	glEnd();

	//Sahuaro2
	glBegin(GL_POLYGON);
	glColor3f(0.03f, 0.5f, 0.05f);
	//base
	glVertex3f(0.5f, -0.6f, 0.0f);
	glVertex3f(0.55f, -0.6f, 0.0f);
	//izquierda-bajo
	glVertex3f(0.55f, -0.45f, 0.0f);
	//brazo-izquierdo
	glVertex3f(0.6f, -0.45f, 0.0f);
	glVertex3f(0.6f, -0.4f, 0.0f);
	glVertex3f(0.57f, -0.4f, 0.0f);
	glVertex3f(0.57f, -0.45f, 0.0f);
	//termina-brazo
	glVertex3f(0.55f, -0.45f, 0.0f);
	glVertex3f(0.55f, -0.25f, 0.0f);
	glVertex3f(0.5f, -0.25f, 0.0f);
	glVertex3f(0.5f, -0.45f, 0.0f);
	//brazo-derecho
	glVertex3f(0.48f, -0.45f, 0.0f);
	glVertex3f(0.48f, -0.4f, 0.0f);
	glVertex3f(0.45f, -0.4f, 0.0f);
	glVertex3f(0.45f, -0.45f, 0.0f);
	glEnd();

	//AGUA
	glBegin(GL_POLYGON);
	glColor3f(0.07, 0.66, 0.89);
	glVertex3f(-0.15f, -0.5f, 0.0f);
	glVertex3f(-0.1f, -0.57f, 0.0f);
	glVertex3f(0.0f, -0.6f, 0.0f);
	glVertex3f(0.1f, -0.6f, 0.0f);
	glVertex3f(0.12f, -0.5f, 0.0f);
	glEnd();

	//PIEDRA
	glBegin(GL_POLYGON);
	glColor3f(0.37, 0.39, 0.39);
	glVertex3f(0.75f, -0.6f, 0.0f);
	glVertex3f(0.73f, -0.5f, 0.0f);
	glVertex3f(0.75f, -0.45f, 0.0f);
	glVertex3f(0.85f, -0.45f, 0.0f);
	glVertex3f(0.88f, -0.5f, 0.0f);
	glVertex3f(0.85f, -0.6f, 0.0f);
	glEnd();
}

//SueloNevado
void sueloNevado() {
	glBegin(GL_POLYGON);
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(-1.0f, -0.5f, 0.0f);
	glVertex3f(-1.0f, -1.0f, 0.0f);
	glVertex3f(1.0f, -1.0f, 0.0f);
	glVertex3f(1.0f, -0.5f, 0.0f);
	glEnd();

	//AGUA
	glBegin(GL_POLYGON);
	glColor3f(0.07, 0.66, 0.89);
	glVertex3f(-0.15f, -0.5f, 0.0f);
	glVertex3f(-0.1f, -0.57f, 0.0f);
	glVertex3f(0.0f, -0.6f, 0.0f);
	glVertex3f(0.1f, -0.57f, 0.0f);
	glVertex3f(0.15f, -0.5f, 0.0f);
	glEnd();

	//PIEDRA
	glBegin(GL_POLYGON);
	glColor3f(0.37, 0.39, 0.39);
	glVertex3f(-0.75f, -0.6f, 0.0f);
	glVertex3f(-0.73f, -0.5f, 0.0f);
	glVertex3f(-0.75f, -0.45f, 0.0f);
	glVertex3f(-0.85f, -0.45f, 0.0f);
	glVertex3f(-0.88f, -0.5f, 0.0f);
	glVertex3f(-0.85f, -0.6f, 0.0f);
	glEnd();

	//PINO
	//Tronco
	glBegin(GL_POLYGON);
	glColor3f(0.3, 0.06, 0.05);
	glVertex3f(-0.4f, -0.6f, 0.0f);
	glVertex3f(-0.4f, -0.55f, 0.0f);
	glVertex3f(-0.45f, -0.55f, 0.0f);
	glVertex3f(-0.45f, -0.6f, 0.0f);
	glEnd();
	//Hojas
	glBegin(GL_TRIANGLES);
	glColor3f(0.1f, 0.45f, 0.16f);
	glVertex3f(-0.5f, -0.55f, 0.0f);
	glVertex3f(-0.425f, -0.3f, 0.0f);
	glVertex3f(-0.35f, -0.55f, 0.0f);
	glEnd();

	//MONODENIEVE
	//cuerpo
	glBegin(GL_POLYGON);
	glColor3f(0.68, 0.9, 0.94);
	for (int i = 0; i < 360; i++) {
		glVertex3f(0.09*cos((double)i*3.14159 / 180.0) + 0.7, 0.09* sin((double)i*3.14159 / 180.0) + -0.6, 0);
	}
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0.68, 0.9, 0.94);
	for (int i = 0; i < 360; i++) {
		glVertex3f(0.07*cos((double)i*3.14159 / 180.0) + 0.7, 0.07* sin((double)i*3.14159 / 180.0) + -0.5, 0);
	}
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0.68, 0.9, 0.94);
	for (int i = 0; i < 360; i++) {
		glVertex3f(0.05*cos((double)i*3.14159 / 180.0) + 0.7, 0.05* sin((double)i*3.14159 / 180.0) + -0.4, 0);
	}
	glEnd();

	//Sombrero
	glBegin(GL_POLYGON);
	glColor3f(0.9, 0.51, 0.01);
	glVertex3f(0.67f, -0.36, 0.0);
	glVertex3f(0.67f, -0.26, 0.0);
	glVertex3f(0.73f, -0.26, 0.0);
	glVertex3f(0.73f, -0.36, 0.0);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.9, 0.51, 0.0);
	glVertex3f(0.65f, -0.37, 0.0);
	glVertex3f(0.65f, -0.35, 0.0);
	glVertex3f(0.75f, -0.35, 0.0);
	glVertex3f(0.75f, -0.37, 0.0);
	glEnd();

	//Botones
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	for (int i = 0; i < 360; i++) {
		glVertex3f(0.01*cos((double)i*3.14159 / 180.0) + 0.7, 0.01* sin((double)i*3.14159 / 180.0) + -0.6, 0);
	}
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	for (int i = 0; i < 360; i++) {
		glVertex3f(0.01*cos((double)i*3.14159 / 180.0) + 0.7, 0.01* sin((double)i*3.14159 / 180.0) + -0.5, 0);
	}
	glEnd();

	//Ojos
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	for (int i = 0; i < 360; i++) {
		glVertex3f(0.007*cos((double)i*3.14159 / 180.0) + 0.68, 0.007* sin((double)i*3.14159 / 180.0) + -0.39, 0);
	}
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	for (int i = 0; i < 360; i++) {
		glVertex3f(0.007*cos((double)i*3.14159 / 180.0) + 0.72, 0.007* sin((double)i*3.14159 / 180.0) + -0.39, 0);
	}
	glEnd();
	
}


void dibujarEscenarioDia() {
	//Cielo
	glBegin(GL_POLYGON);
	glColor3f(0.05f, 0.88f, 0.92f);
	glVertex3f(-1.0f, -0.51, 1.0f);
	glVertex3f(1.0f, -0.51, 1.0f);
	glVertex3f(1.0f, 1.0, 1.0f);
	glVertex3f(-1.0f, 1.0, 1.0f);
	glEnd();

	//sol
	glBegin(GL_POLYGON);
	glColor3f(1, .8, 0);
	for (int i = 0; i < 360; i++) {
		glVertex3f(0.2*cos((double)i*3.14159 / 180.0) - 0.7, 0.3* sin((double)i*3.14159 / 180.0) + 0.6, 0.3);
	}
	glEnd();

	//Nubes
	glBegin(GL_POLYGON);
	glColor3f(.85, .82, .82);
	for (int i = 0; i < 360; i++) {
		glVertex3f(0.2*cos((double)i*3.14159 / 180.0) + 0, 0.1* sin((double)i*3.14159 / 180.0) + 0.6, 0);
	}
	for (int i = 0; i < 360; i++) {
		glVertex3f(0.2*cos((double)i*3.14159 / 180.0) + 0.15, 0.1* sin((double)i*3.14159 / 180.0) + 0.6, 0);
	}
	for (int i = 0; i < 360; i++) {
		glVertex3f(0.2*cos((double)i*3.14159 / 180.0) + 0.2, 0.1* sin((double)i*3.14159 / 180.0) + 0.5, 0);
	}
	for (int i = 0; i < 360; i++) {
		glVertex3f(0.2*cos((double)i*3.14159 / 180.0) + 0.2, 0.1* sin((double)i*3.14159 / 180.0) + 0.7, 0);
	}
	for (int i = 0; i < 360; i++) {
		glVertex3f(0.2*cos((double)i*3.14159 / 180.0) + 0.4, 0.1* sin((double)i*3.14159 / 180.0) + 0.6, 0);
	}
	glEnd();

}

void dibujarEscenarioTarde() {
	//Cielo
	glBegin(GL_POLYGON);
	glColor3f(0.92f, 0.49f, 0.11f);
	glVertex3f(-1.0f, -0.51, 1.0f);
	glVertex3f(1.0f, -0.51, 1.0f);
	glVertex3f(1.0f, 1.0, 1.0f);
	glVertex3f(-1.0f, 1.0, 1.0f);
	glEnd();

	//sol
	glBegin(GL_POLYGON);
	glColor3f(1, .8, 0);
	for (int i = 0; i < 360; i++) {
		glVertex3f(0.2*cos((double)i*3.14159 / 180.0) - 0.7, 0.3* sin((double)i*3.14159 / 180.0) + 0.6, 0.3);
	}
	glEnd();

}

void dibujarEscenarioNoche() {

	//Cielo
	glBegin(GL_POLYGON);
	glColor3f(0.04f, 0.08f, 0.15f);
	glVertex3f(-1.0f, -0.51, 1.0f);
	glVertex3f(1.0f, -0.51, 1.0f);
	glVertex3f(1.0f, 1.0, 1.0f);
	glVertex3f(-1.0f, 1.0, 1.0f);
	glEnd();

	//Luna
	glBegin(GL_POLYGON);
	glColor3f(0.89f, .90f, 0.92f);
	for (int i = 0; i < 360; i++) {
		glVertex3f(0.25*cos((double)i*3.14159 / 180.0) - 0.7, 0.3* sin((double)i*3.14159 / 180.0) + 0.6, 0.3);
	}
	glEnd();

	//Estrellas
	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-0.3f, 0.7f, 0.0f);
	glVertex3f(-0.3f, 0.68f, 0.0f);
	glVertex3f(-0.32f, 0.68f, 0.0f);
	glVertex3f(-0.32f, 0.7f, 0.0f);
	glVertex3f(-0.3f, 0.7f, 0.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(0.2f, 0.75f, 0.0f);
	glVertex3f(0.2f, 0.73f, 0.0f);
	glVertex3f(0.22f, 0.73f, 0.0f);
	glVertex3f(0.22f, 0.75f, 0.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(0.8f, 0.75f, 1.0f);
	glVertex3f(0.8f, 0.73f, 1.0f);
	glVertex3f(0.78f, 0.73f, 1.0f);
	glVertex3f(0.78f, 0.75f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(0.0f, 0.3f, 1.0f);
	glVertex3f(0.0f, 0.28f, 1.0f);
	glVertex3f(0.02f, 0.28f, 1.0f);
	glVertex3f(0.02f, 0.3f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(0.5f, 0.3f, 1.0f);
	glVertex3f(0.5f, 0.28f, 1.0f);
	glVertex3f(0.48f, 0.28f, 1.0f);
	glVertex3f(0.48f, 0.3f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-0.8f, 0.0f, 1.0f);
	glVertex3f(-0.8f, -0.02f, 1.0f);
	glVertex3f(-0.78f, -0.02f, 1.0f);
	glVertex3f(-0.78f, 0.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-0.4f, -0.05f, 1.0f);
	glVertex3f(-0.4f, -0.03f, 1.0f);
	glVertex3f(-0.38f, -0.03f, 1.0f);
	glVertex3f(-0.38f, -0.05f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(0.2f, -0.07f, 1.0f);
	glVertex3f(0.2f, -0.09f, 1.0f);
	glVertex3f(0.22f, -0.09f, 1.0f);
	glVertex3f(0.22f, -0.07f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(0.7f, -0.05f, 1.0f);
	glVertex3f(0.7f, -0.07f, 1.0f);
	glVertex3f(0.72f, -0.07f, 1.0f);
	glVertex3f(0.72f, -0.05f, 1.0f);
	glEnd();
}

void dibujarElementos() {

	// Cuadro pilar
	glBegin(GL_QUADS);
	glColor3f(1, 1, 1);
	glVertex3f(.05f, -.35f, 0);
	glVertex3f(.25f, -.35f, 0);
	glVertex3f(.25f, -.3f, 0);
	glVertex3f(.05f, -.3f, 0);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(1, 1, 1);
	glVertex3f(.1f, -.5f, 0);
	glVertex3f(.2f, -.5f, 0);
	glVertex3f(.2f, -.35f, 0);
	glVertex3f(.1f, -.35f, 0);
	glEnd();

	//cuadro volando
	glBegin(GL_QUADS);
	glColor3f(1, 1, 1);
	glVertex3f(-.7f, -.35f, 0);
	glVertex3f(-.6f, -.35f, 0);
	glVertex3f(-.6f, -.3f, 0);
	glVertex3f(-.7f, -.3f, 0);
	glEnd();

	//cuadro volando 2
	glBegin(GL_QUADS);
	glColor3f(1, 1, 1);
	glVertex3f(-.3f, -.35f, 0);
	glVertex3f(-.2f, -.35f, 0);
	glVertex3f(-.2f, -.3f, 0);
	glVertex3f(-.3f, -.3f, 0);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(1, 1, 1);
	glVertex3f(.7f, -.5f, 0);
	glVertex3f(.75f, -.5f, 0);
	glVertex3f(.75f, -.4f, 0);
	glVertex3f(.7f, -.4f, 0);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(1, 1, 1);
	glVertex3f(.9f, -.5f, 0);
	glVertex3f(.85f, -.5f, 0);
	glVertex3f(.85f, -.4f, 0);
	glVertex3f(.9f, -.4f, 0);
	glEnd();


}



void dibujar() {
	dibujarEscenarioDia();
	//dibujarEscenarioTarde();
	//dibujarEscenarioNoche();
	sueloVerde();
	//sueloDesierto();
	//sueloNevado();
	//dibujarElementos();
}

void actualizar() {

}

int main()
{
	//Creamos una ventana
	GLFWwindow *window;

	//Si no se puede inicializar glfw
	//Iniciamos ejecucion
	if (!glfwInit()) {
		exit(EXIT_FAILURE);
	}
	//Si se pudo iniciar GLFW
	//entonces inicializamosla ventana
	window = glfwCreateWindow(1024, 768, "Ventana", NULL, NULL);
	//Si nopodemos iniciar la ventana
	//Entonces terminamos ejecucion
	if (!window) {
		glfwTerminate();
		exit(EXIT_FAILURE);
	}
	//Establecemos el contexto
	glfwMakeContextCurrent(window);

	//Una vez establecido el contexto activamos funciones modernas
	glewExperimental = true;
	GLenum errorGlew = glewInit();
	if (errorGlew != GLEW_OK) {
		cout << glewGetErrorString(errorGlew);
	}

	const GLubyte *versionGL = glGetString(GL_VERSION);
	cout << "Version OpenGL: " << versionGL;

	//ciclode dibujo (Draw loop)
	while (!glfwWindowShouldClose(window)) {
		//Establecer region de dibujo
		glViewport(0, 0, 1024, 768);
		//Establece el color de borrado
		glClearColor(1, 1, 1, 1);
		//Borramos
		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

		//Rutina de dibujo
		dibujar();
		actualizar();

		//Cambiar los buffers
		glfwSwapBuffers(window);
		//Reconocer si hay entradas
		glfwPollEvents();
	}

	glfwDestroyWindow(window);
	glfwTerminate();
	return 0;
}