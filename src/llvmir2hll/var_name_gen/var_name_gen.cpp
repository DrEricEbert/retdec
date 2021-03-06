/**
* @file src/llvmir2hll/var_name_gen/var_name_gen.cpp
* @brief Implementation of VarNameGen.
* @copyright (c) 2017 Avast Software, licensed under the MIT license
*/

#include "llvmir2hll/support/debug.h"
#include "llvmir2hll/var_name_gen/var_name_gen.h"

namespace llvmir2hll {

/**
* @brief Constructs a new variable name generator.
*
* @param[in] prefix Prefix of all returned names.
*/
VarNameGen::VarNameGen(std::string prefix):
		prefix(prefix) {}

/**
* @brief Destructor.
*/
VarNameGen::~VarNameGen() {}

/**
* @brief Returns the prefix used by the generator.
*/
const std::string &VarNameGen::getPrefix() const {
	return prefix;
}

} // namespace llvmir2hll
