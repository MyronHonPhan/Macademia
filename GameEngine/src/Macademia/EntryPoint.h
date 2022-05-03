#pragma once

#ifdef MD_PLATFORM_WINDOWS

extern Macademia::Application* Macademia::CreateApplication();
	
int main(int argc, char** argv) {
	printf("Macademia Engine!");
	auto app = Macademia::CreateApplication();
	app->Run();
	delete app;
}
#endif