#include <windows.h>

#include <GL/glew.h>
#include <GL/gl.h>
#include <GLFW/glfw3.h>

using namespace std;

int main() {
	if (!glfwInit()) {
		return 0;
	}
	
	glfwWindowHint(GLFW_RESIZABLE, GLFW_TRUE);
	
	GLFWwindow *window = glfwCreateWindow(800, 600, "Hello, world!", NULL, NULL);
	if (window == NULL) {
		glfwTerminate();
		return 0;
	}
	
	glfwMakeContextCurrent(window);
	
	glClearColor(1, 0, 0, 1);
	while (!glfwWindowShouldClose(window)) {
		glfwPollEvents();
		
		glClear(GL_COLOR_BUFFER_BIT);
		
		glfwSwapBuffers(window);
	}
	
	glfwTerminate();
	
	return 0;
}