#pragma once

#ifdef _WIN64

extern Cactus::Application* Cactus::CreateApplication();

int main(int argc, char** argv) {

	printf("Cactus\n");

	auto app = Cactus::CreateApplication();

	app->Run();
	delete app;

}

#endif // CS_PLATFORM_WINDOWS
