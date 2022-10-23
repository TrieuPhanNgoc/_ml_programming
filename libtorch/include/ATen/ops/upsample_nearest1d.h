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



#include <ATen/ops/upsample_nearest1d_ops.h>

namespace at {


// aten::upsample_nearest1d.vec(Tensor input, SymInt[]? output_size, float[]? scale_factors) -> Tensor
inline at::Tensor upsample_nearest1d(const at::Tensor & input, at::OptionalIntArrayRef output_size, c10::optional<at::ArrayRef<double>> scale_factors) {
    return at::_ops::upsample_nearest1d_vec::call(input, output_size.has_value() ? c10::make_optional(c10::fromIntArrayRefSlow(*output_size)) : c10::nullopt, scale_factors);
}
namespace symint {
  template <typename T, typename = std::enable_if_t<std::is_same<T, int64_t>::value>>
  at::Tensor upsample_nearest1d(const at::Tensor & input, at::OptionalIntArrayRef output_size, c10::optional<at::ArrayRef<double>> scale_factors) {
    return at::_ops::upsample_nearest1d_vec::call(input, output_size.has_value() ? c10::make_optional(c10::fromIntArrayRefSlow(*output_size)) : c10::nullopt, scale_factors);
  }
}

// aten::upsample_nearest1d.vec(Tensor input, SymInt[]? output_size, float[]? scale_factors) -> Tensor
inline at::Tensor upsample_nearest1d_symint(const at::Tensor & input, at::OptionalSymIntArrayRef output_size, c10::optional<at::ArrayRef<double>> scale_factors) {
    return at::_ops::upsample_nearest1d_vec::call(input, output_size, scale_factors);
}
namespace symint {
  template <typename T, typename = std::enable_if_t<std::is_same<T, c10::SymInt>::value>>
  at::Tensor upsample_nearest1d(const at::Tensor & input, at::OptionalSymIntArrayRef output_size, c10::optional<at::ArrayRef<double>> scale_factors) {
    return at::_ops::upsample_nearest1d_vec::call(input, output_size, scale_factors);
  }
}

// aten::upsample_nearest1d.out(Tensor self, SymInt[1] output_size, float? scales=None, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & upsample_nearest1d_out(at::Tensor & out, const at::Tensor & self, at::IntArrayRef output_size, c10::optional<double> scales=c10::nullopt) {
    return at::_ops::upsample_nearest1d_out::call(self, c10::fromIntArrayRefSlow(output_size), scales, out);
}
namespace symint {
  template <typename T, typename = std::enable_if_t<std::is_same<T, int64_t>::value>>
  at::Tensor & upsample_nearest1d_out(at::Tensor & out, const at::Tensor & self, at::IntArrayRef output_size, c10::optional<double> scales=c10::nullopt) {
    return at::_ops::upsample_nearest1d_out::call(self, c10::fromIntArrayRefSlow(output_size), scales, out);
  }
}

// aten::upsample_nearest1d.out(Tensor self, SymInt[1] output_size, float? scales=None, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & upsample_nearest1d_outf(const at::Tensor & self, at::IntArrayRef output_size, c10::optional<double> scales, at::Tensor & out) {
    return at::_ops::upsample_nearest1d_out::call(self, c10::fromIntArrayRefSlow(output_size), scales, out);
}
namespace symint {
  template <typename T, typename = std::enable_if_t<std::is_same<T, int64_t>::value>>
  at::Tensor & upsample_nearest1d_outf(const at::Tensor & self, at::IntArrayRef output_size, c10::optional<double> scales, at::Tensor & out) {
    return at::_ops::upsample_nearest1d_out::call(self, c10::fromIntArrayRefSlow(output_size), scales, out);
  }
}

// aten::upsample_nearest1d.out(Tensor self, SymInt[1] output_size, float? scales=None, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & upsample_nearest1d_symint_out(at::Tensor & out, const at::Tensor & self, c10::SymIntArrayRef output_size, c10::optional<double> scales=c10::nullopt) {
    return at::_ops::upsample_nearest1d_out::call(self, output_size, scales, out);
}
namespace symint {
  template <typename T, typename = std::enable_if_t<std::is_same<T, c10::SymInt>::value>>
  at::Tensor & upsample_nearest1d_out(at::Tensor & out, const at::Tensor & self, c10::SymIntArrayRef output_size, c10::optional<double> scales=c10::nullopt) {
    return at::_ops::upsample_nearest1d_out::call(self, output_size, scales, out);
  }
}

// aten::upsample_nearest1d.out(Tensor self, SymInt[1] output_size, float? scales=None, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & upsample_nearest1d_symint_outf(const at::Tensor & self, c10::SymIntArrayRef output_size, c10::optional<double> scales, at::Tensor & out) {
    return at::_ops::upsample_nearest1d_out::call(self, output_size, scales, out);
}
namespace symint {
  template <typename T, typename = std::enable_if_t<std::is_same<T, c10::SymInt>::value>>
  at::Tensor & upsample_nearest1d_outf(const at::Tensor & self, c10::SymIntArrayRef output_size, c10::optional<double> scales, at::Tensor & out) {
    return at::_ops::upsample_nearest1d_out::call(self, output_size, scales, out);
  }
}

// aten::upsample_nearest1d(Tensor self, SymInt[1] output_size, float? scales=None) -> Tensor
inline at::Tensor upsample_nearest1d(const at::Tensor & self, at::IntArrayRef output_size, c10::optional<double> scales=c10::nullopt) {
    return at::_ops::upsample_nearest1d::call(self, c10::fromIntArrayRefSlow(output_size), scales);
}
namespace symint {
  template <typename T, typename = std::enable_if_t<std::is_same<T, int64_t>::value>>
  at::Tensor upsample_nearest1d(const at::Tensor & self, at::IntArrayRef output_size, c10::optional<double> scales=c10::nullopt) {
    return at::_ops::upsample_nearest1d::call(self, c10::fromIntArrayRefSlow(output_size), scales);
  }
}

// aten::upsample_nearest1d(Tensor self, SymInt[1] output_size, float? scales=None) -> Tensor
inline at::Tensor upsample_nearest1d_symint(const at::Tensor & self, c10::SymIntArrayRef output_size, c10::optional<double> scales=c10::nullopt) {
    return at::_ops::upsample_nearest1d::call(self, output_size, scales);
}
namespace symint {
  template <typename T, typename = std::enable_if_t<std::is_same<T, c10::SymInt>::value>>
  at::Tensor upsample_nearest1d(const at::Tensor & self, c10::SymIntArrayRef output_size, c10::optional<double> scales=c10::nullopt) {
    return at::_ops::upsample_nearest1d::call(self, output_size, scales);
  }
}

// aten::upsample_nearest1d.vec_out(Tensor input, SymInt[]? output_size, float[]? scale_factors, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & upsample_nearest1d_out(at::Tensor & out, const at::Tensor & input, at::OptionalIntArrayRef output_size, c10::optional<at::ArrayRef<double>> scale_factors) {
    return at::_ops::upsample_nearest1d_vec_out::call(input, output_size.has_value() ? c10::make_optional(c10::fromIntArrayRefSlow(*output_size)) : c10::nullopt, scale_factors, out);
}
namespace symint {
  template <typename T, typename = std::enable_if_t<std::is_same<T, int64_t>::value>>
  at::Tensor & upsample_nearest1d_out(at::Tensor & out, const at::Tensor & input, at::OptionalIntArrayRef output_size, c10::optional<at::ArrayRef<double>> scale_factors) {
    return at::_ops::upsample_nearest1d_vec_out::call(input, output_size.has_value() ? c10::make_optional(c10::fromIntArrayRefSlow(*output_size)) : c10::nullopt, scale_factors, out);
  }
}

// aten::upsample_nearest1d.vec_out(Tensor input, SymInt[]? output_size, float[]? scale_factors, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & upsample_nearest1d_outf(const at::Tensor & input, at::OptionalIntArrayRef output_size, c10::optional<at::ArrayRef<double>> scale_factors, at::Tensor & out) {
    return at::_ops::upsample_nearest1d_vec_out::call(input, output_size.has_value() ? c10::make_optional(c10::fromIntArrayRefSlow(*output_size)) : c10::nullopt, scale_factors, out);
}
namespace symint {
  template <typename T, typename = std::enable_if_t<std::is_same<T, int64_t>::value>>
  at::Tensor & upsample_nearest1d_outf(const at::Tensor & input, at::OptionalIntArrayRef output_size, c10::optional<at::ArrayRef<double>> scale_factors, at::Tensor & out) {
    return at::_ops::upsample_nearest1d_vec_out::call(input, output_size.has_value() ? c10::make_optional(c10::fromIntArrayRefSlow(*output_size)) : c10::nullopt, scale_factors, out);
  }
}

// aten::upsample_nearest1d.vec_out(Tensor input, SymInt[]? output_size, float[]? scale_factors, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & upsample_nearest1d_symint_out(at::Tensor & out, const at::Tensor & input, at::OptionalSymIntArrayRef output_size, c10::optional<at::ArrayRef<double>> scale_factors) {
    return at::_ops::upsample_nearest1d_vec_out::call(input, output_size, scale_factors, out);
}
namespace symint {
  template <typename T, typename = std::enable_if_t<std::is_same<T, c10::SymInt>::value>>
  at::Tensor & upsample_nearest1d_out(at::Tensor & out, const at::Tensor & input, at::OptionalSymIntArrayRef output_size, c10::optional<at::ArrayRef<double>> scale_factors) {
    return at::_ops::upsample_nearest1d_vec_out::call(input, output_size, scale_factors, out);
  }
}

// aten::upsample_nearest1d.vec_out(Tensor input, SymInt[]? output_size, float[]? scale_factors, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & upsample_nearest1d_symint_outf(const at::Tensor & input, at::OptionalSymIntArrayRef output_size, c10::optional<at::ArrayRef<double>> scale_factors, at::Tensor & out) {
    return at::_ops::upsample_nearest1d_vec_out::call(input, output_size, scale_factors, out);
}
namespace symint {
  template <typename T, typename = std::enable_if_t<std::is_same<T, c10::SymInt>::value>>
  at::Tensor & upsample_nearest1d_outf(const at::Tensor & input, at::OptionalSymIntArrayRef output_size, c10::optional<at::ArrayRef<double>> scale_factors, at::Tensor & out) {
    return at::_ops::upsample_nearest1d_vec_out::call(input, output_size, scale_factors, out);
  }
}

}
