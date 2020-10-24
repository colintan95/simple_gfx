#ifndef MODEL_H_
#define MODEL_H_

#include <optional>
#include <string_view>

struct Mesh {

};

std::optional<Mesh> LoadMeshFromFile(std::string_view model_path, std::string_view material_dir);

struct Model {

};

#endif  // MODEL_H_