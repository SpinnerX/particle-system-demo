#include <engine3d/core/application_instance.hpp>
#include <engine3d/renderer/renderer.hpp>
#include "EditorWorld.hpp"

namespace engine3d{
    class DemoApplication : public engine3d::ApplicationInstance{
    public:
        DemoApplication(const std::string& p_Tag) : ApplicationInstance(p_Tag){
            ConsoleLogTrace("DemoApplication Instantiation!!!");
            // Renderer::Initialize();
            // Renderer::Initialize();
            // Renderer::SetCustomShaders("shader_demo/simple_shader.vert.spv", "shader_demo/simple_shader.frag.spv", true);
            ConsoleLogTrace("Testing!");
            m_World = CreateRef<EditorWorld>("Editor World");
        }

    private:
        Ref<EditorWorld> m_World;
    };


    Ref<ApplicationInstance> Initialize(){
        return CreateRef<DemoApplication>("Demo");
    }
};