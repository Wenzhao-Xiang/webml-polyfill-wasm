// clang-format off
// Generated file (from: strided_slice_float_1.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace strided_slice_float_1 {
// Generated strided_slice_float_1 test
#include "generated/examples/strided_slice_float_1.example.cpp"
// Generated model constructor
#include "generated/models/strided_slice_float_1.model.cpp"
} // namespace strided_slice_float_1

TEST_F(GeneratedTests, strided_slice_float_1) {
    execute(strided_slice_float_1::CreateModel,
            strided_slice_float_1::is_ignored,
            strided_slice_float_1::examples);
}
