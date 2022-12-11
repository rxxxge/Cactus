#include <Cactus.h>

class Sandbox : public Cactus::Application {
public:

};


Cactus::Application* Cactus::CreateApplication() {
	return new Sandbox();
}