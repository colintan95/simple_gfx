#ifndef CAMERA_H_
#define CAMERA_H_

#include "glm/glm.hpp"

class Camera {
 private:
  glm::vec3 position_;
  glm::vec3 direction_;

  float fov_;
  float near_depth_;
  float far_depth_;
};

#endif  // CAMERA_H_