#ifndef APPLICATION_H_INCLUDED
#define APPLICATION_H_INCLUDED

#include <vector>
#include <memory>

#include "States/Game_State.h"

#include "Renderer/RMaster.h"

#include "Entity.h"
#include "Camera.h"
#include "Music_Player.h"

class Application
{
    public:
        Application();

        void runMainGameLoop();

        void pushState(std::unique_ptr<State::Game_State> state);
        void popState();

        Camera& getCamera();

        void resetSong();

    private:
        void update(float elapsed);

        void handleEvents(const sf::Event& e);

        std::vector<std::unique_ptr<State::Game_State>> m_states;
        Renderer::Master m_renderer;
        Camera m_camera;

        Music_Player m_musicPlayer;
};

#endif // APPLICATION_H_INCLUDED
