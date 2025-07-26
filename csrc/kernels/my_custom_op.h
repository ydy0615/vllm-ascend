#pragma once
#include <torch/extension.h>

void my_custom_op_launcher(
    torch::Tensor& output,
    const torch::Tensor& input);
