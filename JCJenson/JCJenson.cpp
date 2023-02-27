// IsoMetricEngine.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <GLFW/glfw3.h>
#include <Windows.h>
#include <string>

int playAudio(std::string name) {
	return -1;
}


int main()
{
	//Hide Console
	::ShowWindow(::GetConsoleWindow(), SW_HIDE);
	
	

	//Create OpenGL
	GLFWwindow * window;

	if (!glfwInit())
		return -1;

	//Get dimensions
	RECT desktop;


	const HWND hDesktop = GetDesktopWindow();

	GetWindowRect(hDesktop, &desktop);

	int screenWidth = desktop.right;
	int screenHeight = desktop.bottom;

	window = glfwCreateWindow(screenWidth, screenHeight, "JCJenson", glfwGetPrimaryMonitor(), NULL);

	if (!window) {
		glfwTerminate();
		return -1;
	}

	glfwMakeContextCurrent(window); //IDK what this means.

	//Do render setup
	glViewport(0, 0, screenWidth, screenHeight);



	while (!glfwWindowShouldClose(window)) 
	{
		//Do colors and stuff
		glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
		glClear(GL_COLOR_BUFFER_BIT);
		//glBitmap();

		//Swap buffers!
		glfwSwapBuffers(window);

		glfwPollEvents();
	}

	glfwTerminate();
	return 0;

}
