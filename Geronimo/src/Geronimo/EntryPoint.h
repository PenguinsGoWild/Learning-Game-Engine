#pragma once

#ifdef GM_PLATFORM_WINDOWS

extern Geronimo::Application* Geronimo::CreateApplication();

int main(int argc, char** argv) {

    auto app = Geronimo::CreateApplication();
    app->Run();
    delete app;

}


#endif

