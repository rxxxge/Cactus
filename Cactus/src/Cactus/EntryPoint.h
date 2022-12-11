#pragma once

#ifdef _WIN64

extern Cactus::Application* Cactus::CreateApplication();

int main(int argc, char** argv) {

	Cactus::Log::Init();
	CS_CORE_WARN("Initializated Log");
	int a = 5;
	CS_INFO("Hello var = {0}", a);
	a = 18;
	CS_CORE_ERROR("Hello, now var = {0}");

	printf("Cactus\n");

	auto app = Cactus::CreateApplication();

	app->Run();
	delete app;

}

#endif 
