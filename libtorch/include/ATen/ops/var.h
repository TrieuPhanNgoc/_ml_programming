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



#include <ATen/ops/var_ops.h>

namespace at {


// aten::var(Tensor self, bool unbiased=True) -> Tensor
inline at::Tensor var(const at::Tensor & self, bool unbiased=true) {
    return at::_ops::var::call(self, unbiased);
}

// aten::var.dim(Tensor self, int[1]? dim, bool unbiased=True, bool keepdim=False) -> Tensor
inline at::Tensor var(const at::Tensor & self, at::OptionalIntArrayRef dim, bool unbiased=true, bool keepdim=false) {
    return at::_ops::var_dim::call(self, dim, unbiased, keepdim);
}

// aten::var.correction(Tensor self, int[1]? dim, *, int? correction, bool keepdim=False) -> Tensor
inline at::Tensor var(const at::Tensor & self, at::OptionalIntArrayRef dim, c10::optional<int64_t> correction, bool keepdim=false) {
    return at::_ops::var_correction::call(self, dim, correction, keepdim);
}

// aten::var.out(Tensor self, int[1]? dim, bool unbiased=True, bool keepdim=False, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & var_out(at::Tensor & out, const at::Tensor & self, at::OptionalIntArrayRef dim, bool unbiased=true, bool keepdim=false) {
    return at::_ops::var_out::call(self, dim, unbiased, keepdim, out);
}
// aten::var.out(Tensor self, int[1]? dim, bool unbiased=True, bool keepdim=False, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & var_outf(const at::Tensor & self, at::OptionalIntArrayRef dim, bool unbiased, bool keepdim, at::Tensor & out) {
    return at::_ops::var_out::call(self, dim, unbiased, keepdim, out);
}

// aten::var.correction_out(Tensor self, int[1]? dim, *, int? correction, bool keepdim=False, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & var_out(at::Tensor & out, const at::Tensor & self, at::OptionalIntArrayRef dim, c10::optional<int64_t> correction, bool keepdim=false) {
    return at::_ops::var_correction_out::call(self, dim, correction, keepdim, out);
}
// aten::var.correction_out(Tensor self, int[1]? dim, *, int? correction, bool keepdim=False, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & var_outf(const at::Tensor & self, at::OptionalIntArrayRef dim, c10::optional<int64_t> correction, bool keepdim, at::Tensor & out) {
    return at::_ops::var_correction_out::call(self, dim, correction, keepdim, out);
}

// aten::var.names_dim(Tensor self, Dimname[1] dim, bool unbiased=True, bool keepdim=False) -> Tensor
inline at::Tensor var(const at::Tensor & self, at::DimnameList dim, bool unbiased=true, bool keepdim=false) {
    return at::_ops::var_names_dim::call(self, dim, unbiased, keepdim);
}

// aten::var.names_out(Tensor self, Dimname[1] dim, bool unbiased=True, bool keepdim=False, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & var_out(at::Tensor & out, const at::Tensor & self, at::DimnameList dim, bool unbiased=true, bool keepdim=false) {
    return at::_ops::var_names_out::call(self, dim, unbiased, keepdim, out);
}
// aten::var.names_out(Tensor self, Dimname[1] dim, bool unbiased=True, bool keepdim=False, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & var_outf(const at::Tensor & self, at::DimnameList dim, bool unbiased, bool keepdim, at::Tensor & out) {
    return at::_ops::var_names_out::call(self, dim, unbiased, keepdim, out);
}

// aten::var.correction_names(Tensor self, Dimname[1] dim, *, int? correction, bool keepdim=False) -> Tensor
inline at::Tensor var(const at::Tensor & self, at::DimnameList dim, c10::optional<int64_t> correction, bool keepdim=false) {
    return at::_ops::var_correction_names::call(self, dim, correction, keepdim);
}

// aten::var.correction_names_out(Tensor self, Dimname[1] dim, *, int? correction, bool keepdim=False, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & var_out(at::Tensor & out, const at::Tensor & self, at::DimnameList dim, c10::optional<int64_t> correction, bool keepdim=false) {
    return at::_ops::var_correction_names_out::call(self, dim, correction, keepdim, out);
}
// aten::var.correction_names_out(Tensor self, Dimname[1] dim, *, int? correction, bool keepdim=False, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & var_outf(const at::Tensor & self, at::DimnameList dim, c10::optional<int64_t> correction, bool keepdim, at::Tensor & out) {
    return at::_ops::var_correction_names_out::call(self, dim, correction, keepdim, out);
}

}
