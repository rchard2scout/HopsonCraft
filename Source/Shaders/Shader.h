#ifndef SHADER_H
#define SHADER_H

#include "OpenGL/GLEW/glew.h"
#include "OpenGL/GLM/glm_transformations.h"

#include <string>

namespace Shader
{
    class Shader_Program
    {
        public:
            Shader_Program  () = default;
            Shader_Program  (const std::string& vertexShaderFile, const std::string& fragmentShaderFile);
            ~Shader_Program ();

            void create (const std::string& vertexShaderFile, const std::string& fragmentShaderFile);

            void useProgram () const;

        //protected:
            void loadMatrix4 (GLuint location, const Matrix4& matrix)   const;
            void loadVector3 (GLuint location, const Vector3& vect)     const;

            void loadInteger (GLuint location, int data)    const;
            void loadFloat   (GLuint location, float data)  const;

        //private:
            GLuint m_shaderProgram = 0;

    };
} //Namespace Shader

#endif // SHADER_H
