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



#include <ATen/ops/upsample_bilinear2d_ops.h>

namespace at {


// aten::upsample_bilinear2d.vec(Tensor input, SymInt[]? output_size, bool align_corners, float[]? scale_factors) -> Tensor
inline at::Tensor upsample_bilinear2d(const at::Tensor & input, at::OptionalIntArrayRef output_size, bool align_corners, c10::optional<at::ArrayRef<double>> scale_factors) {
    return at::_ops::upsample_bilinear2d_vec::call(input, output_size.has_value() ? c10::make_optional(c10::fromIntArrayRefSlow(*output_size)) : c10::nullopt, align_corners, scale_factors);
}
namespace symint {
  template <typename T, typename = std::enable_if_t<std::is_same<T, int64_t>::value>>
  at::Tensor upsample_bilinear2d(const at::Tensor & input, at::OptionalIntArrayRef output_size, bool align_corners, c10::optional<at::ArrayRef<double>> scale_factors) {
    return at::_ops::upsample_bilinear2d_vec::call(input, output_size.has_value() ? c10::make_optional(c10::fromIntArrayRefSlow(*output_size)) : c10::nullopt, align_corners, scale_factors);
  }
}

// aten::upsample_bilinear2d.vec(Tensor input, SymInt[]? output_size, bool align_corners, float[]? scale_factors) -> Tensor
inline at::Tensor upsample_bilinear2d_symint(const at::Tensor & input, at::OptionalSymIntArrayRef output_size, bool align_corners, c10::optional<at::ArrayRef<double>> scale_factors) {
    return at::_ops::upsample_bilinear2d_vec::call(input, output_size, align_corners, scale_factors);
}
namespace symint {
  template <typename T, typename = std::enable_if_t<std::is_same<T, c10::SymInt>::value>>
  at::Tensor upsample_bilinear2d(const at::Tensor & input, at::OptionalSymIntArrayRef output_size, bool align_corners, c10::optional<at::ArrayRef<double>> scale_factors) {
    return at::_ops::upsample_bilinear2d_vec::call(input, output_size, align_corners, scale_factors);
  }
}

// aten::upsample_bilinear2d.out(Tensor self, SymInt[2] output_size, bool align_corners, float? scales_h=None, float? scales_w=None, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & upsample_bilinear2d_out(at::Tensor & out, const at::Tensor & self, at::IntArrayRef output_size, bool align_corners, c10::optional<double> scales_h=c10::nullopt, c10::optional<double> scales_w=c10::nullopt) {
    return at::_ops::upsample_bilinear2d_out::call(self, c10::fromIntArrayRefSlow(output_size), align_corners, scales_h, scales_w, out);
}
namespace symint {
  template <typename T, typename = std::enable_if_t<std::is_same<T, int64_t>::value>>
  at::Tensor & upsample_bilinear2d_out(at::Tensor & out, const at::Tensor & self, at::IntArrayRef output_size, bool align_corners, c10::optional<double> scales_h=c10::nullopt, c10::optional<double> scales_w=c10::nullopt) {
    return at::_ops::upsample_bilinear2d_out::call(self, c10::fromIntArrayRefSlow(output_size), align_corners, scales_h, scales_w, out);
  }
}

// aten::upsample_bilinear2d.out(Tensor self, SymInt[2] output_size, bool align_corners, float? scales_h=None, float? scales_w=None, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & upsample_bilinear2d_outf(const at::Tensor & self, at::IntArrayRef output_size, bool align_corners, c10::optional<double> scales_h, c10::optional<double> scales_w, at::Tensor & out) {
    return at::_ops::upsample_bilinear2d_out::call(self, c10::fromIntArrayRefSlow(output_size), align_corners, scales_h, scales_w, out);
}
namespace symint {
  template <typename T, typename = std::enable_if_t<std::is_same<T, int64_t>::value>>
  at::Tensor & upsample_bilinear2d_outf(const at::Tensor & self, at::IntArrayRef output_size, bool align_corners, c10::optional<double> scales_h, c10::optional<double> scales_w, at::Tensor & out) {
    return at::_ops::upsample_bilinear2d_out::call(self, c10::fromIntArrayRefSlow(output_size), align_corners, scales_h, scales_w, out);
  }
}

// aten::upsample_bilinear2d.out(Tensor self, SymInt[2] output_size, bool align_corners, float? scales_h=None, float? scales_w=None, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & upsample_bilinear2d_symint_out(at::Tensor & out, const at::Tensor & self, c10::SymIntArrayRef output_size, bool align_corners, c10::optional<double> scales_h=c10::nullopt, c10::optional<double> scales_w=c10::nullopt) {
    return at::_ops::upsample_bilinear2d_out::call(self, output_size, align_corners, scales_h, scales_w, out);
}
namespace symint {
  template <typename T, typename = std::enable_if_t<std::is_same<T, c10::SymInt>::value>>
  at::Tensor & upsample_bilinear2d_out(at::Tensor & out, const at::Tensor & self, c10::SymIntArrayRef output_size, bool align_corners, c10::optional<double> scales_h=c10::nullopt, c10::optional<double> scales_w=c10::nullopt) {
    return at::_ops::upsample_bilinear2d_out::call(self, output_size, align_corners, scales_h, scales_w, out);
  }
}

// aten::upsample_bilinear2d.out(Tensor self, SymInt[2] output_size, bool align_corners, float? scales_h=None, float? scales_w=None, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & upsample_bilinear2d_symint_outf(const at::Tensor & self, c10::SymIntArrayRef output_size, bool align_corners, c10::optional<double> scales_h, c10::optional<double> scales_w, at::Tensor & out) {
    return at::_ops::upsample_bilinear2d_out::call(self, output_size, align_corners, scales_h, scales_w, out);
}
namespace symint {
  template <typename T, typename = std::enable_if_t<std::is_same<T, c10::SymInt>::value>>
  at::Tensor & upsample_bilinear2d_outf(const at::Tensor & self, c10::SymIntArrayRef output_size, bool align_corners, c10::optional<double> scales_h, c10::optional<double> scales_w, at::Tensor & out) {
    return at::_ops::upsample_bilinear2d_out::call(self, output_size, align_corners, scales_h, scales_w, out);
  }
}

// aten::upsample_bilinear2d(Tensor self, SymInt[2] output_size, bool align_corners, float? scales_h=None, float? scales_w=None) -> Tensor
inline at::Tensor upsample_bilinear2d(const at::Tensor & self, at::IntArrayRef output_size, bool align_corners, c10::optional<double> scales_h=c10::nullopt, c10::optional<double> scales_w=c10::nullopt) {
    return at::_ops::upsample_bilinear2d::call(self, c10::fromIntArrayRefSlow(output_size), align_corners, scales_h, scales_w);
}
namespace symint {
  template <typename T, typename = std::enable_if_t<std::is_same<T, int64_t>::value>>
  at::Tensor upsample_bilinear2d(const at::Tensor & self, at::IntArrayRef output_size, bool align_corners, c10::optional<double> scales_h=c10::nullopt, c10::optional<double> scales_w=c10::nullopt) {
    return at::_ops::upsample_bilinear2d::call(self, c10::fromIntArrayRefSlow(output_size), align_corners, scales_h, scales_w);
  }
}

// aten::upsample_bilinear2d(Tensor self, SymInt[2] output_size, bool align_corners, float? scales_h=None, float? scales_w=None) -> Tensor
inline at::Tensor upsample_bilinear2d_symint(const at::Tensor & self, c10::SymIntArrayRef output_size, bool align_corners, c10::optional<double> scales_h=c10::nullopt, c10::optional<double> scales_w=c10::nullopt) {
    return at::_ops::upsample_bilinear2d::call(self, output_size, align_corners, scales_h, scales_w);
}
namespace symint {
  template <typename T, typename = std::enable_if_t<std::is_same<T, c10::SymInt>::value>>
  at::Tensor upsample_bilinear2d(const at::Tensor & self, c10::SymIntArrayRef output_size, bool align_corners, c10::optional<double> scales_h=c10::nullopt, c10::optional<double> scales_w=c10::nullopt) {
    return at::_ops::upsample_bilinear2d::call(self, output_size, align_corners, scales_h, scales_w);
  }
}

// aten::upsample_bilinear2d.vec_out(Tensor input, SymInt[]? output_size, bool align_corners, float[]? scale_factors, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & upsample_bilinear2d_out(at::Tensor & out, const at::Tensor & input, at::OptionalIntArrayRef output_size, bool align_corners, c10::optional<at::ArrayRef<double>> scale_factors) {
    return at::_ops::upsample_bilinear2d_vec_out::call(input, output_size.has_value() ? c10::make_optional(c10::fromIntArrayRefSlow(*output_size)) : c10::nullopt, align_corners, scale_factors, out);
}
namespace symint {
  template <typename T, typename = std::enable_if_t<std::is_same<T, int64_t>::value>>
  at::Tensor & upsample_bilinear2d_out(at::Tensor & out, const at::Tensor & input, at::OptionalIntArrayRef output_size, bool align_corners, c10::optional<at::ArrayRef<double>> scale_factors) {
    return at::_ops::upsample_bilinear2d_vec_out::call(input, output_size.has_value() ? c10::make_optional(c10::fromIntArrayRefSlow(*output_size)) : c10::nullopt, align_corners, scale_factors, out);
  }
}

// aten::upsample_bilinear2d.vec_out(Tensor input, SymInt[]? output_size, bool align_corners, float[]? scale_factors, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & upsample_bilinear2d_outf(const at::Tensor & input, at::OptionalIntArrayRef output_size, bool align_corners, c10::optional<at::ArrayRef<double>> scale_factors, at::Tensor & out) {
    return at::_ops::upsample_bilinear2d_vec_out::call(input, output_size.has_value() ? c10::make_optional(c10::fromIntArrayRefSlow(*output_size)) : c10::nullopt, align_corners, scale_factors, out);
}
namespace symint {
  template <typename T, typename = std::enable_if_t<std::is_same<T, int64_t>::value>>
  at::Tensor & upsample_bilinear2d_outf(const at::Tensor & input, at::OptionalIntArrayRef output_size, bool align_corners, c10::optional<at::ArrayRef<double>> scale_factors, at::Tensor & out) {
    return at::_ops::upsample_bilinear2d_vec_out::call(input, output_size.has_value() ? c10::make_optional(c10::fromIntArrayRefSlow(*output_size)) : c10::nullopt, align_corners, scale_factors, out);
  }
}

// aten::upsample_bilinear2d.vec_out(Tensor input, SymInt[]? output_size, bool align_corners, float[]? scale_factors, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & upsample_bilinear2d_symint_out(at::Tensor & out, const at::Tensor & input, at::OptionalSymIntArrayRef output_size, bool align_corners, c10::optional<at::ArrayRef<double>> scale_factors) {
    return at::_ops::upsample_bilinear2d_vec_out::call(input, output_size, align_corners, scale_factors, out);
}
namespace symint {
  template <typename T, typename = std::enable_if_t<std::is_same<T, c10::SymInt>::value>>
  at::Tensor & upsample_bilinear2d_out(at::Tensor & out, const at::Tensor & input, at::OptionalSymIntArrayRef output_size, bool align_corners, c10::optional<at::ArrayRef<double>> scale_factors) {
    return at::_ops::upsample_bilinear2d_vec_out::call(input, output_size, align_corners, scale_factors, out);
  }
}

// aten::upsample_bilinear2d.vec_out(Tensor input, SymInt[]? output_size, bool align_corners, float[]? scale_factors, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & upsample_bilinear2d_symint_outf(const at::Tensor & input, at::OptionalSymIntArrayRef output_size, bool align_corners, c10::optional<at::ArrayRef<double>> scale_factors, at::Tensor & out) {
    return at::_ops::upsample_bilinear2d_vec_out::call(input, output_size, align_corners, scale_factors, out);
}
namespace symint {
  template <typename T, typename = std::enable_if_t<std::is_same<T, c10::SymInt>::value>>
  at::Tensor & upsample_bilinear2d_outf(const at::Tensor & input, at::OptionalSymIntArrayRef output_size, bool align_corners, c10::optional<at::ArrayRef<double>> scale_factors, at::Tensor & out) {
    return at::_ops::upsample_bilinear2d_vec_out::call(input, output_size, align_corners, scale_factors, out);
  }
}

}
