#include "model.h"

#define TINYOBJLOADER_IMPLEMENTATION
#include "tiny_obj_loader.h"

#include <iostream>
#include <optional>
#include <string>
#include <vector>

std::optional<Mesh> LoadMeshFromFile(const std::string& model_path, 
                                     const std::string& material_dir) {
  tinyobj::attrib_t attribs;
  std::vector<tinyobj::shape_t> shapes;
  std::vector<tinyobj::material_t> mtls;
  std::string warn_msg, err_msg;

  if (!tinyobj::LoadObj(&attribs, &shapes, &mtls, &warn_msg, &err_msg, model_path.c_str(), 
                        material_dir.c_str())) {
    return std::nullopt;
  }

  return Mesh();
}