/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_cc.py:297
 */

#include "pybind11/pybind11.h"
#include "pybind11/stl.h"

#include <type_traits>

#include "base/compiler.hh"
#include "params/CPack.hh"
#include "sim/init.hh"
#include "sim/sim_object.hh"

#include "mem/cache/compressors/cpack.hh"

namespace py = pybind11;

namespace gem5
{

static void
module_init(py::module_ &m_internal)
{
py::module_ m = m_internal.def_submodule("param_CPack");
    py::class_<CPackParams, BaseDictionaryCompressorParams, std::unique_ptr<CPackParams, py::nodelete>>(m, "CPackParams")
        .def(py::init<>())
        .def("create", &CPackParams::create)
        ;

    py::class_<gem5::compression::CPack, gem5::compression::BaseDictionaryCompressor, std::unique_ptr<gem5::compression::CPack, py::nodelete>>(m, "gem5_COLONS_compression_COLONS_CPack")
        ;

}

static EmbeddedPyBind embed_obj("CPack", module_init, "BaseDictionaryCompressor");

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
class DummyCPackParamsClass
{
  public:
    gem5::compression::CPack *create() const;
};

template <class CxxClass, class Enable=void>
class DummyCPackShunt;

/*
 * This version directs to the real Params struct and the
 * default behavior of create if there's an appropriate
 * constructor.
 */
template <class CxxClass>
class DummyCPackShunt<CxxClass, std::enable_if_t<
    std::is_constructible_v<CxxClass, const CPackParams &>>>
{
  public:
    using Params = CPackParams;
    static gem5::compression::CPack *
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
class DummyCPackShunt<CxxClass, std::enable_if_t<
    !std::is_constructible_v<CxxClass, const CPackParams &>>>
{
  public:
    using Params = DummyCPackParamsClass;
    static gem5::compression::CPack *
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
[[maybe_unused]] gem5::compression::CPack *
DummyCPackShunt<gem5::compression::CPack>::Params::create() const
{
    return DummyCPackShunt<gem5::compression::CPack>::create(*this);
}

} // namespace gem5
