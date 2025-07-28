#pragma once
#include "window.h"

class Application : public Window {
public :
	Application();
	~Application();

	void run() override;

private:
	void initVulkan();
	void cleanVulkan();
};