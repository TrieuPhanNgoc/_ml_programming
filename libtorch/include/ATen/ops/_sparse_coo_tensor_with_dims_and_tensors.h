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



#include <ATen/ops/_sparse_coo_tensor_with_dims_and_tensors_ops.h>

namespace at {


// aten::_sparse_coo_tensor_with_dims_and_tensors(SymInt sparse_dim, SymInt dense_dim, SymInt[] size, Tensor indices, Tensor values, *, ScalarType? dtype=None, Layout? layout=None, Device? device=None, bool? pin_memory=False) -> Tensor
inline at::Tensor _sparse_coo_tensor_with_dims_and_tensors(int64_t sparse_dim, int64_t dense_dim, at::IntArrayRef size, const at::Tensor & indices, const at::Tensor & values, at::TensorOptions options) {
    return at::_ops::_sparse_coo_tensor_with_dims_and_tensors::call(sparse_dim, dense_dim, c10::fromIntArrayRefSlow(size), indices, values, optTypeMetaToScalarType(options.dtype_opt()), options.layout_opt(), options.device_opt(), options.pinned_memory_opt());
}
namespace symint {
  template <typename T, typename = std::enable_if_t<std::is_same<T, int64_t>::value>>
  at::Tensor _sparse_coo_tensor_with_dims_and_tensors(int64_t sparse_dim, int64_t dense_dim, at::IntArrayRef size, const at::Tensor & indices, const at::Tensor & values, at::TensorOptions options) {
    return at::_ops::_sparse_coo_tensor_with_dims_and_tensors::call(sparse_dim, dense_dim, c10::fromIntArrayRefSlow(size), indices, values, optTypeMetaToScalarType(options.dtype_opt()), options.layout_opt(), options.device_opt(), options.pinned_memory_opt());
  }
}

// aten::_sparse_coo_tensor_with_dims_and_tensors(SymInt sparse_dim, SymInt dense_dim, SymInt[] size, Tensor indices, Tensor values, *, ScalarType? dtype=None, Layout? layout=None, Device? device=None, bool? pin_memory=False) -> Tensor
inline at::Tensor _sparse_coo_tensor_with_dims_and_tensors(int64_t sparse_dim, int64_t dense_dim, at::IntArrayRef size, const at::Tensor & indices, const at::Tensor & values, c10::optional<at::ScalarType> dtype, c10::optional<at::Layout> layout, c10::optional<at::Device> device, c10::optional<bool> pin_memory) {
    return at::_ops::_sparse_coo_tensor_with_dims_and_tensors::call(sparse_dim, dense_dim, c10::fromIntArrayRefSlow(size), indices, values, dtype, layout, device, pin_memory);
}
namespace symint {
  template <typename T, typename = std::enable_if_t<std::is_same<T, int64_t>::value>>
  at::Tensor _sparse_coo_tensor_with_dims_and_tensors(int64_t sparse_dim, int64_t dense_dim, at::IntArrayRef size, const at::Tensor & indices, const at::Tensor & values, c10::optional<at::ScalarType> dtype, c10::optional<at::Layout> layout, c10::optional<at::Device> device, c10::optional<bool> pin_memory) {
    return at::_ops::_sparse_coo_tensor_with_dims_and_tensors::call(sparse_dim, dense_dim, c10::fromIntArrayRefSlow(size), indices, values, dtype, layout, device, pin_memory);
  }
}

// aten::_sparse_coo_tensor_with_dims_and_tensors(SymInt sparse_dim, SymInt dense_dim, SymInt[] size, Tensor indices, Tensor values, *, ScalarType? dtype=None, Layout? layout=None, Device? device=None, bool? pin_memory=False) -> Tensor
inline at::Tensor _sparse_coo_tensor_with_dims_and_tensors_symint(c10::SymInt sparse_dim, c10::SymInt dense_dim, c10::SymIntArrayRef size, const at::Tensor & indices, const at::Tensor & values, at::TensorOptions options) {
    return at::_ops::_sparse_coo_tensor_with_dims_and_tensors::call(sparse_dim, dense_dim, size, indices, values, optTypeMetaToScalarType(options.dtype_opt()), options.layout_opt(), options.device_opt(), options.pinned_memory_opt());
}
namespace symint {
  template <typename T, typename = std::enable_if_t<std::is_same<T, c10::SymInt>::value>>
  at::Tensor _sparse_coo_tensor_with_dims_and_tensors(c10::SymInt sparse_dim, c10::SymInt dense_dim, c10::SymIntArrayRef size, const at::Tensor & indices, const at::Tensor & values, at::TensorOptions options) {
    return at::_ops::_sparse_coo_tensor_with_dims_and_tensors::call(sparse_dim, dense_dim, size, indices, values, optTypeMetaToScalarType(options.dtype_opt()), options.layout_opt(), options.device_opt(), options.pinned_memory_opt());
  }
}

// aten::_sparse_coo_tensor_with_dims_and_tensors(SymInt sparse_dim, SymInt dense_dim, SymInt[] size, Tensor indices, Tensor values, *, ScalarType? dtype=None, Layout? layout=None, Device? device=None, bool? pin_memory=False) -> Tensor
inline at::Tensor _sparse_coo_tensor_with_dims_and_tensors_symint(c10::SymInt sparse_dim, c10::SymInt dense_dim, c10::SymIntArrayRef size, const at::Tensor & indices, const at::Tensor & values, c10::optional<at::ScalarType> dtype, c10::optional<at::Layout> layout, c10::optional<at::Device> device, c10::optional<bool> pin_memory) {
    return at::_ops::_sparse_coo_tensor_with_dims_and_tensors::call(sparse_dim, dense_dim, size, indices, values, dtype, layout, device, pin_memory);
}
namespace symint {
  template <typename T, typename = std::enable_if_t<std::is_same<T, c10::SymInt>::value>>
  at::Tensor _sparse_coo_tensor_with_dims_and_tensors(c10::SymInt sparse_dim, c10::SymInt dense_dim, c10::SymIntArrayRef size, const at::Tensor & indices, const at::Tensor & values, c10::optional<at::ScalarType> dtype, c10::optional<at::Layout> layout, c10::optional<at::Device> device, c10::optional<bool> pin_memory) {
    return at::_ops::_sparse_coo_tensor_with_dims_and_tensors::call(sparse_dim, dense_dim, size, indices, values, dtype, layout, device, pin_memory);
  }
}

// aten::_sparse_coo_tensor_with_dims_and_tensors.out(SymInt sparse_dim, SymInt dense_dim, SymInt[] size, Tensor indices, Tensor values, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & _sparse_coo_tensor_with_dims_and_tensors_out(at::Tensor & out, int64_t sparse_dim, int64_t dense_dim, at::IntArrayRef size, const at::Tensor & indices, const at::Tensor & values) {
    return at::_ops::_sparse_coo_tensor_with_dims_and_tensors_out::call(sparse_dim, dense_dim, c10::fromIntArrayRefSlow(size), indices, values, out);
}
namespace symint {
  template <typename T, typename = std::enable_if_t<std::is_same<T, int64_t>::value>>
  at::Tensor & _sparse_coo_tensor_with_dims_and_tensors_out(at::Tensor & out, int64_t sparse_dim, int64_t dense_dim, at::IntArrayRef size, const at::Tensor & indices, const at::Tensor & values) {
    return at::_ops::_sparse_coo_tensor_with_dims_and_tensors_out::call(sparse_dim, dense_dim, c10::fromIntArrayRefSlow(size), indices, values, out);
  }
}

// aten::_sparse_coo_tensor_with_dims_and_tensors.out(SymInt sparse_dim, SymInt dense_dim, SymInt[] size, Tensor indices, Tensor values, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & _sparse_coo_tensor_with_dims_and_tensors_outf(int64_t sparse_dim, int64_t dense_dim, at::IntArrayRef size, const at::Tensor & indices, const at::Tensor & values, at::Tensor & out) {
    return at::_ops::_sparse_coo_tensor_with_dims_and_tensors_out::call(sparse_dim, dense_dim, c10::fromIntArrayRefSlow(size), indices, values, out);
}
namespace symint {
  template <typename T, typename = std::enable_if_t<std::is_same<T, int64_t>::value>>
  at::Tensor & _sparse_coo_tensor_with_dims_and_tensors_outf(int64_t sparse_dim, int64_t dense_dim, at::IntArrayRef size, const at::Tensor & indices, const at::Tensor & values, at::Tensor & out) {
    return at::_ops::_sparse_coo_tensor_with_dims_and_tensors_out::call(sparse_dim, dense_dim, c10::fromIntArrayRefSlow(size), indices, values, out);
  }
}

// aten::_sparse_coo_tensor_with_dims_and_tensors.out(SymInt sparse_dim, SymInt dense_dim, SymInt[] size, Tensor indices, Tensor values, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & _sparse_coo_tensor_with_dims_and_tensors_symint_out(at::Tensor & out, c10::SymInt sparse_dim, c10::SymInt dense_dim, c10::SymIntArrayRef size, const at::Tensor & indices, const at::Tensor & values) {
    return at::_ops::_sparse_coo_tensor_with_dims_and_tensors_out::call(sparse_dim, dense_dim, size, indices, values, out);
}
namespace symint {
  template <typename T, typename = std::enable_if_t<std::is_same<T, c10::SymInt>::value>>
  at::Tensor & _sparse_coo_tensor_with_dims_and_tensors_out(at::Tensor & out, c10::SymInt sparse_dim, c10::SymInt dense_dim, c10::SymIntArrayRef size, const at::Tensor & indices, const at::Tensor & values) {
    return at::_ops::_sparse_coo_tensor_with_dims_and_tensors_out::call(sparse_dim, dense_dim, size, indices, values, out);
  }
}

// aten::_sparse_coo_tensor_with_dims_and_tensors.out(SymInt sparse_dim, SymInt dense_dim, SymInt[] size, Tensor indices, Tensor values, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & _sparse_coo_tensor_with_dims_and_tensors_symint_outf(c10::SymInt sparse_dim, c10::SymInt dense_dim, c10::SymIntArrayRef size, const at::Tensor & indices, const at::Tensor & values, at::Tensor & out) {
    return at::_ops::_sparse_coo_tensor_with_dims_and_tensors_out::call(sparse_dim, dense_dim, size, indices, values, out);
}
namespace symint {
  template <typename T, typename = std::enable_if_t<std::is_same<T, c10::SymInt>::value>>
  at::Tensor & _sparse_coo_tensor_with_dims_and_tensors_outf(c10::SymInt sparse_dim, c10::SymInt dense_dim, c10::SymIntArrayRef size, const at::Tensor & indices, const at::Tensor & values, at::Tensor & out) {
    return at::_ops::_sparse_coo_tensor_with_dims_and_tensors_out::call(sparse_dim, dense_dim, size, indices, values, out);
  }
}

}
