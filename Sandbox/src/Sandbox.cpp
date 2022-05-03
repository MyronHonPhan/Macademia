#include <Macademia.h>

class Sandbox : public Macademia::Application {
public:
	Sandbox() {

	}

	~Sandbox() {

	}

};

Macademia::Application* Macademia::CreateApplication() {
	return new Sandbox();
}