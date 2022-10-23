#pragma once

// @generated by torchgen/gen.py from Operator.h

#include <tuple>
#include <vector>

// Forward declarations of any types needed in the operator signatures.
// We can't directly include these classes because it will cause circular include dependencies.
// This file is included by TensorBody.h, which defines the Tensor class.
#include <ATen/core/ATen_fwd.h>

namespace at {
namespace _ops {


struct TORCH_API _cufft_set_plan_cache_max_size {
  using schema = void (int64_t, int64_t);
  using ptr_schema = schema*;
  // See Note [static constexpr char* members for windows NVCC]
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(name, "aten::_cufft_set_plan_cache_max_size")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(overload_name, "")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(schema_str, "_cufft_set_plan_cache_max_size(int device_index, int max_size) -> ()")
  static void call(int64_t device_index, int64_t max_size);
  static void redispatch(c10::DispatchKeySet dispatchKeySet, int64_t device_index, int64_t max_size);
};

}} // namespace at::_ops
