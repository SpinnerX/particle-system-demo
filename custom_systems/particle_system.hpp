#pragma once
#include <core/scene/scene.hpp>


namespace engine3d{
    struct Particle{
        glm::vec2 pos;
        glm::vec2 velocity, velocityVariation;
        glm::vec4 colorBegin, colorEnd;
        float sizeBegin, sizeEnd, sizeVariation;
        float lifetime = 1.0f;
    };

    class ParticleSystem{
        ParticleSystem(uint32_t p_ParticleSize);

        void Emit(const Particle& p_Particle);
    };
};