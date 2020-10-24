#ifndef SCENE_H_
#define SCENE_H_

#include <vector>

#include "camera.h"
#include "light.h"
#include "model.h"

struct Scene {
  Camera camera;

  std::vector<Light> lights;
  std::vector<Model> models;
};

#endif  // SCENE_H_