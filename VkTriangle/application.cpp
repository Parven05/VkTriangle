#include <iostream>
#include "application.h"

Application::Application() {
	std::cout << "Create Vulkan Object\n";
	initVulkan();
}

void Application::initVulkan() {
	createInstance();
}


void Application::cleanVulkan() {

}

Application::~Application() {
	std::cout << "Destroy Vulkan Object\n";
	cleanVulkan();
}

void Application::run() {
	std::cout << "Run mainloop\n";
	mainLoop();
}