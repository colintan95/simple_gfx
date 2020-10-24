#ifndef MODEL_H_
#define MODEL_H_

#include <optional>
#include <string>

struct Mesh {

};

std::optional<Mesh> LoadMeshFromFile(const std::string& model_path, 
                                     const std::string& material_dir);

struct Model {

};

#endif  // MODEL_H_