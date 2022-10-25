#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>

std::string readFile(std::string fileName);

int createVertexShader(std::string shaderCode);

int createFragmentShader(std::string shaderCode);

GLuint createShaderProgram(std::string vertexFile, std::string fragFile);

void loadUniformMat4x4(GLuint shaderProgam, std::string uniformName, glm::mat4 data);