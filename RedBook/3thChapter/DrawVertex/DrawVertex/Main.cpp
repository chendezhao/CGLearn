#define GLEW_STATIC
#include <GL\glew.h>
#include <GLFW\glfw3.h>


#include <iostream>
using namespace std;


static const GLfloat vertex_position[] =
{
	-1.0f, -1.0f, 0.0f,
	 1.0f, -1.0f, 0.0f,
	-1.0f,  1.0f, 0.0f,
	-1.0f, -1.0f, 0.0f,
};

static const GLfloat color[] =
{
	 1.0f, 1.0f, 1.0f, 1.0,
	 1.0f, 1.0f, 0.0f, 1.0,
	 1.0f, 0.0f, 1.0f, 1.0,
	 0.0f, 1.0f, 1.0f, 1.0,
};

void initVertext()
{

}

void update()
{

}
//---------------------------------------------------------------------  
//  
// main  
//  
int main(int argc, char** argv)
{
	glfwInit();
	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 4);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 2);
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

	glfwWindowHint(GLFW_RESIZABLE, GL_FALSE);
	GLFWwindow* window = glfwCreateWindow(800, 600, "LearnOpenGL", nullptr, nullptr);
	if (window == nullptr)
	{
		std::cout << "Failed to create GLFW window" << std::endl;
		glfwTerminate();
		return -1;
	}
	glfwMakeContextCurrent(window);

	glewExperimental = GL_TRUE;
	if (glewInit() != GLEW_OK)
	{
		std::cout << "Failed to initialize GLEW" << std::endl;
		return -1;
	}

	int width, height;
	glfwGetFramebufferSize(window, &width, &height);

	glViewport(0, 0, width, height);

	// 程序循环
	while (!glfwWindowShouldClose(window))
	{
		// 检查事件
		glfwPollEvents();

		glClearColor(0.2f, 0.3f, 0.3f, 1.0f);
		glClear(GL_COLOR_BUFFER_BIT);
		// 渲染指令
		//...

			// 交换缓冲
			glfwSwapBuffers(window);
	}

	glfwTerminate();
	return 0;
}