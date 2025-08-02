#include <Geronimo.h>

class Sandbox : public Geronimo::Application {
public:
    Sandbox() {

    }

    ~Sandbox() {

    }



};

Geronimo::Application* Geronimo::CreateApplication() {

    return new Sandbox();
}
