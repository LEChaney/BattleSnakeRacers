//
// Bachelor of Software Engineering
// Media Design School
// Auckland
// New Zealand
//
// (c) 2017 Media Design School
//
// Description  : A header only collection of useful utility functions and types.
// Author       : Lance Chaney
// Mail         : lance.cha7337@mediadesign.school.nz
//

#pragma once

#include <fstream>
#include <glm\glm.hpp>

class Scene;

//pass scene in 
glm::vec3 CreateLevel(Scene& scene, std::string _path);