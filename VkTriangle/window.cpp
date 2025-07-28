#include "window.h"
#include <iostream>

Window::Window() {
	std::cout << "Created Window Object\n";
	initWindow();
}

void Window::initWindow() {
	glfwInit();

	glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
	glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);

	window = glfwCreateWindow(WIDTH, HEIGHT, "VkTriangle", nullptr, nullptr);
}

void Window::mainLoop() {
	while (!glfwWindowShouldClose(window)) {
		glfwPollEvents();
	}
}

void Window::destroyWindow() {
	glfwDestroyWindow(window);
	glfwTerminate();
}

Window::~Window() {
	std::cout << "Destroy Window Object\n";
	destroyWindow();
}



