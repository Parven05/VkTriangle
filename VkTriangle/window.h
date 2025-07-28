#pragma once
#include <GLFW/glfw3.h>

const uint32_t WIDTH = 800;
const uint32_t HEIGHT = 600;

class Window {
public:

	Window();
	virtual ~Window();
	virtual void run() = 0;

protected:
	void mainLoop();

private:
	GLFWwindow* window;

	void initWindow();
	void destroyWindow();
};
