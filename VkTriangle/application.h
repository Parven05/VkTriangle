#pragma once
#include "window.h"
#include "instance.h"

class Application : public Window, public Instance {
public :
	Application();
	~Application();

	void run() override;

private:
	void initVulkan();
	void cleanVulkan();
};