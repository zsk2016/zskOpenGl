#ifndef OGL_FUN_MANAGER
#define OGL_FUN_MANAGER
#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include "stb_image.h"

#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>

#include <learnopengl/shader_s.h>

void framebuffer_size_callback(GLFWwindow* window, int width, int height);
void processInput(GLFWwindow* window);

// settings
const unsigned int SCR_WIDTH = 800;
const unsigned int SCR_HEIGHT = 600;

typedef enum
{
	enumShader5_1,
	enumShader6_1,
	enumShader6_2,
	enumShader6_3
}ShaderType;

typedef enum
{
	enum2D,
	enum3D,
	enumMore3D
}VerticesTYPE;

class OglFunManager
{
public:
	OglFunManager();
	~OglFunManager();
	int initGLFWAndGLAD();
	void GetShader(ShaderType st);
	void SetVerticesTexture(VerticesTYPE vt);
	void CreateTexture();
	void RenderLoop();
private:
	void SetVAOVBOEBOVerticesTexture();
	void SetVAOVBO3DVerticesTexture();
	void RenderImage();
private:
	unsigned int texture1, texture2;
	unsigned int VBO, VAO, EBO;
	GLFWwindow* window;
	Shader ourShader;
	ShaderType m_st;
	VerticesTYPE m_vt;
	glm::vec3 m_cubePositions[10];
};

#endif //OGL_FUN_MANAGER
