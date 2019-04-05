#include "character.h"

namespace how {
namespace model {
Character::Character(types::point_t initialPosition, types::delaunay_graph_vertex_index_t currentVertex)
    : GraphEntity(initialPosition, currentVertex) {}
} // namespace model
} // namespace how
