/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_cc.py:297
 */

#include "pybind11/pybind11.h"
#include "pybind11/stl.h"

#include <type_traits>

#include "base/compiler.hh"
#include "params/SkewedAssociative.hh"
#include "sim/init.hh"
#include "sim/sim_object.hh"

#include "mem/cache/tags/indexing_policies/skewed_associative.hh"

namespace py = pybind11;

namespace gem5
{

static void
module_init(py::module_ &m_internal)
{
py::module_ m = m_internal.def_submodule("param_SkewedAssociative");
    py::class_<SkewedAssociativeParams, BaseIndexingPolicyParams, std::unique_ptr<SkewedAssociativeParams, py::nodelete>>(m, "SkewedAssociativeParams")
        .def(py::init<>())
        .def("create", &SkewedAssociativeParams::create)
        ;

    py::class_<gem5::SkewedAssociative, gem5::BaseIndexingPolicy, std::unique_ptr<gem5::SkewedAssociative, py::nodelete>>(m, "gem5_COLONS_SkewedAssociative")
        ;

}

static EmbeddedPyBind embed_obj("SkewedAssociative", module_init, "BaseIndexingPolicy");

} // namespace gem5
namespace gem5
{

namespace
{

/*
 * If we can't define a default create() method for this params
 * struct because the SimObject doesn't have the right
 * constructor, use template magic to make it so we're actually
 * defining a create method for this class instead.
 */
class DummySkewedAssociativeParamsClass
{
  public:
    gem5::SkewedAssociative *create() const;
};

template <class CxxClass, class Enable=void>
class DummySkewedAssociativeShunt;

/*
 * This version directs to the real Params struct and the
 * default behavior of create if there's an appropriate
 * constructor.
 */
template <class CxxClass>
class DummySkewedAssociativeShunt<CxxClass, std::enable_if_t<
    std::is_constructible_v<CxxClass, const SkewedAssociativeParams &>>>
{
  public:
    using Params = SkewedAssociativeParams;
    static gem5::SkewedAssociative *
    create(const Params &p)
    {
        return new CxxClass(p);
    }
};

/*
 * This version diverts to the DummyParamsClass and a dummy
 * implementation of create if the appropriate constructor does
 * not exist.
 */
template <class CxxClass>
class DummySkewedAssociativeShunt<CxxClass, std::enable_if_t<
    !std::is_constructible_v<CxxClass, const SkewedAssociativeParams &>>>
{
  public:
    using Params = DummySkewedAssociativeParamsClass;
    static gem5::SkewedAssociative *
    create(const Params &p)
    {
        return nullptr;
    }
};

} // anonymous namespace

/*
 * An implementation of either the real Params struct's create
 * method, or the Dummy one. Either an implementation is
 * mandantory since this was shunted off to the dummy class, or
 * one is optional which will override this weak version.
 */
[[maybe_unused]] gem5::SkewedAssociative *
DummySkewedAssociativeShunt<gem5::SkewedAssociative>::Params::create() const
{
    return DummySkewedAssociativeShunt<gem5::SkewedAssociative>::create(*this);
}

} // namespace gem5
