#include "application.h"
#include <iostream>

Application::Application() {
	std::cout << "Create Vulkan Object\n";
	initVulkan();
}

void Application::initVulkan() {

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