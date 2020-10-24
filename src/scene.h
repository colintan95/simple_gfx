#ifndef SCENE_H_
#define SCENE_H_

#include <vector>

#include "light.h"
#include "model.h"

class Scene {
private:
  std::vector<Light> lights_;
  std::vector<Model> models_;
};

#endif // SCENE_H_