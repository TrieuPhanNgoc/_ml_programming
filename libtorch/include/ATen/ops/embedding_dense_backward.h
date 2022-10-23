#pragma once

// @generated by torchgen/gen.py from Function.h

#include <ATen/Context.h>
#include <ATen/DeviceGuard.h>
#include <ATen/TensorUtils.h>
#include <ATen/TracerMode.h>
#include <ATen/core/Generator.h>
#include <ATen/core/Reduction.h>
#include <ATen/core/Tensor.h>
#include <c10/core/Scalar.h>
#include <c10/core/Storage.h>
#include <c10/core/TensorOptions.h>
#include <c10/util/Deprecated.h>
#include <c10/util/Optional.h>



#include <ATen/ops/embedding_dense_backward_ops.h>

namespace at {


// aten::embedding_dense_backward(Tensor grad_output, Tensor indices, SymInt num_weights, int padding_idx, bool scale_grad_by_freq) -> Tensor
inline at::Tensor embedding_dense_backward(const at::Tensor & grad_output, const at::Tensor & indices, int64_t num_weights, int64_t padding_idx, bool scale_grad_by_freq) {
    return at::_ops::embedding_dense_backward::call(grad_output, indices, num_weights, padding_idx, scale_grad_by_freq);
}
namespace symint {
  template <typename T, typename = std::enable_if_t<std::is_same<T, int64_t>::value>>
  at::Tensor embedding_dense_backward(const at::Tensor & grad_output, const at::Tensor & indices, int64_t num_weights, int64_t padding_idx, bool scale_grad_by_freq) {
    return at::_ops::embedding_dense_backward::call(grad_output, indices, num_weights, padding_idx, scale_grad_by_freq);
  }
}

// aten::embedding_dense_backward(Tensor grad_output, Tensor indices, SymInt num_weights, int padding_idx, bool scale_grad_by_freq) -> Tensor
inline at::Tensor embedding_dense_backward_symint(const at::Tensor & grad_output, const at::Tensor & indices, c10::SymInt num_weights, int64_t padding_idx, bool scale_grad_by_freq) {
    return at::_ops::embedding_dense_backward::call(grad_output, indices, num_weights, padding_idx, scale_grad_by_freq);
}
namespace symint {
  template <typename T, typename = std::enable_if_t<std::is_same<T, c10::SymInt>::value>>
  at::Tensor embedding_dense_backward(const at::Tensor & grad_output, const at::Tensor & indices, c10::SymInt num_weights, int64_t padding_idx, bool scale_grad_by_freq) {
    return at::_ops::embedding_dense_backward::call(grad_output, indices, num_weights, padding_idx, scale_grad_by_freq);
  }
}

// aten::embedding_dense_backward.out(Tensor grad_output, Tensor indices, SymInt num_weights, int padding_idx, bool scale_grad_by_freq, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & embedding_dense_backward_out(at::Tensor & out, const at::Tensor & grad_output, const at::Tensor & indices, int64_t num_weights, int64_t padding_idx, bool scale_grad_by_freq) {
    return at::_ops::embedding_dense_backward_out::call(grad_output, indices, num_weights, padding_idx, scale_grad_by_freq, out);
}
namespace symint {
  template <typename T, typename = std::enable_if_t<std::is_same<T, int64_t>::value>>
  at::Tensor & embedding_dense_backward_out(at::Tensor & out, const at::Tensor & grad_output, const at::Tensor & indices, int64_t num_weights, int64_t padding_idx, bool scale_grad_by_freq) {
    return at::_ops::embedding_dense_backward_out::call(grad_output, indices, num_weights, padding_idx, scale_grad_by_freq, out);
  }
}

// aten::embedding_dense_backward.out(Tensor grad_output, Tensor indices, SymInt num_weights, int padding_idx, bool scale_grad_by_freq, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & embedding_dense_backward_outf(const at::Tensor & grad_output, const at::Tensor & indices, int64_t num_weights, int64_t padding_idx, bool scale_grad_by_freq, at::Tensor & out) {
    return at::_ops::embedding_dense_backward_out::call(grad_output, indices, num_weights, padding_idx, scale_grad_by_freq, out);
}
namespace symint {
  template <typename T, typename = std::enable_if_t<std::is_same<T, int64_t>::value>>
  at::Tensor & embedding_dense_backward_outf(const at::Tensor & grad_output, const at::Tensor & indices, int64_t num_weights, int64_t padding_idx, bool scale_grad_by_freq, at::Tensor & out) {
    return at::_ops::embedding_dense_backward_out::call(grad_output, indices, num_weights, padding_idx, scale_grad_by_freq, out);
  }
}

// aten::embedding_dense_backward.out(Tensor grad_output, Tensor indices, SymInt num_weights, int padding_idx, bool scale_grad_by_freq, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & embedding_dense_backward_symint_out(at::Tensor & out, const at::Tensor & grad_output, const at::Tensor & indices, c10::SymInt num_weights, int64_t padding_idx, bool scale_grad_by_freq) {
    return at::_ops::embedding_dense_backward_out::call(grad_output, indices, num_weights, padding_idx, scale_grad_by_freq, out);
}
namespace symint {
  template <typename T, typename = std::enable_if_t<std::is_same<T, c10::SymInt>::value>>
  at::Tensor & embedding_dense_backward_out(at::Tensor & out, const at::Tensor & grad_output, const at::Tensor & indices, c10::SymInt num_weights, int64_t padding_idx, bool scale_grad_by_freq) {
    return at::_ops::embedding_dense_backward_out::call(grad_output, indices, num_weights, padding_idx, scale_grad_by_freq, out);
  }
}

// aten::embedding_dense_backward.out(Tensor grad_output, Tensor indices, SymInt num_weights, int padding_idx, bool scale_grad_by_freq, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & embedding_dense_backward_symint_outf(const at::Tensor & grad_output, const at::Tensor & indices, c10::SymInt num_weights, int64_t padding_idx, bool scale_grad_by_freq, at::Tensor & out) {
    return at::_ops::embedding_dense_backward_out::call(grad_output, indices, num_weights, padding_idx, scale_grad_by_freq, out);
}
namespace symint {
  template <typename T, typename = std::enable_if_t<std::is_same<T, c10::SymInt>::value>>
  at::Tensor & embedding_dense_backward_outf(const at::Tensor & grad_output, const at::Tensor & indices, c10::SymInt num_weights, int64_t padding_idx, bool scale_grad_by_freq, at::Tensor & out) {
    return at::_ops::embedding_dense_backward_out::call(grad_output, indices, num_weights, padding_idx, scale_grad_by_freq, out);
  }
}

}