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


struct TORCH_API triplet_margin_loss {
  using schema = at::Tensor (const at::Tensor &, const at::Tensor &, const at::Tensor &, double, double, double, bool, int64_t);
  using ptr_schema = schema*;
  // See Note [static constexpr char* members for windows NVCC]
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(name, "aten::triplet_margin_loss")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(overload_name, "")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(schema_str, "triplet_margin_loss(Tensor anchor, Tensor positive, Tensor negative, float margin=1.0, float p=2, float eps=1e-06, bool swap=False, int reduction=Mean) -> Tensor")
  static at::Tensor call(const at::Tensor & anchor, const at::Tensor & positive, const at::Tensor & negative, double margin, double p, double eps, bool swap, int64_t reduction);
  static at::Tensor redispatch(c10::DispatchKeySet dispatchKeySet, const at::Tensor & anchor, const at::Tensor & positive, const at::Tensor & negative, double margin, double p, double eps, bool swap, int64_t reduction);
};

}} // namespace at::_ops