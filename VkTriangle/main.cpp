#include "window.h"
#include "application.h"

int main() {
	Window* application = new Application();
	application->run();
	delete application;
}