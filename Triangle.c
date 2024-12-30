#include<stdio.h>
#include<stdlib.h>

#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>
/*#include <iostream>
#include <stdexcept>
#include <cstdlib>*/

const uint32_t WIDTH = 800;
const uint32_t HEIGHT = 600;

typedef struct s_App
{
 GLFWwindow *window;

}VulkanApp;

void initVulakn();
void initWindow(VulkanApp *app);
void mainloop(VulkanApp *app);
void cleanup(VulkanApp *app);


int main()
{
    VulkanApp app={0};	
    initWindow(&app);
    initVulakn();
    mainloop(&app);
    cleanup(&app);

    return 0;
}


void initWindow(VulkanApp *app)
{
  glfwInit();	
  glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
  glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);
  app->window = glfwCreateWindow(WIDTH, HEIGHT, "Vulkan", NULL, NULL);

}

void initVulakn()
{


}
void mainloop(VulkanApp *app)
{
    while (!glfwWindowShouldClose(app->window)) 
    {
        glfwPollEvents();
    }
}
void cleanup(VulkanApp *app)
{
    glfwDestroyWindow(app->window);
    glfwTerminate();
}
