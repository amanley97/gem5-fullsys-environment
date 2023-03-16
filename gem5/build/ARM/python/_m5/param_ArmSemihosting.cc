/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_cc.py:297
 */

#include "pybind11/pybind11.h"
#include "pybind11/stl.h"

#include <type_traits>

#include "base/compiler.hh"
#include "params/ArmSemihosting.hh"
#include "sim/init.hh"
#include "sim/sim_object.hh"

#include "arch/arm/semihosting.hh"

#include <string>
#include <string>
#include "base/types.hh"
#include "base/types.hh"
#include <string>
#include <string>
#include <string>
#include <time.h>
namespace py = pybind11;

namespace gem5
{

static void
module_init(py::module_ &m_internal)
{
py::module_ m = m_internal.def_submodule("param_ArmSemihosting");
    py::class_<ArmSemihostingParams, SimObjectParams, std::unique_ptr<ArmSemihostingParams, py::nodelete>>(m, "ArmSemihostingParams")
        .def(py::init<>())
        .def("create", &ArmSemihostingParams::create)
        .def_readwrite("cmd_line", &ArmSemihostingParams::cmd_line)
        .def_readwrite("files_root_dir", &ArmSemihostingParams::files_root_dir)
        .def_readwrite("mem_reserve", &ArmSemihostingParams::mem_reserve)
        .def_readwrite("stack_size", &ArmSemihostingParams::stack_size)
        .def_readwrite("stderr", &ArmSemihostingParams::stderr)
        .def_readwrite("stdin", &ArmSemihostingParams::stdin)
        .def_readwrite("stdout", &ArmSemihostingParams::stdout)
        .def_readwrite("time", &ArmSemihostingParams::time)
        ;

    py::class_<gem5::ArmSemihosting, gem5::SimObject, std::unique_ptr<gem5::ArmSemihosting, py::nodelete>>(m, "gem5_COLONS_ArmSemihosting")
        ;

}

static EmbeddedPyBind embed_obj("ArmSemihosting", module_init, "SimObject");

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
class DummyArmSemihostingParamsClass
{
  public:
    gem5::ArmSemihosting *create() const;
};

template <class CxxClass, class Enable=void>
class DummyArmSemihostingShunt;

/*
 * This version directs to the real Params struct and the
 * default behavior of create if there's an appropriate
 * constructor.
 */
template <class CxxClass>
class DummyArmSemihostingShunt<CxxClass, std::enable_if_t<
    std::is_constructible_v<CxxClass, const ArmSemihostingParams &>>>
{
  public:
    using Params = ArmSemihostingParams;
    static gem5::ArmSemihosting *
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
class DummyArmSemihostingShunt<CxxClass, std::enable_if_t<
    !std::is_constructible_v<CxxClass, const ArmSemihostingParams &>>>
{
  public:
    using Params = DummyArmSemihostingParamsClass;
    static gem5::ArmSemihosting *
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
[[maybe_unused]] gem5::ArmSemihosting *
DummyArmSemihostingShunt<gem5::ArmSemihosting>::Params::create() const
{
    return DummyArmSemihostingShunt<gem5::ArmSemihosting>::create(*this);
}

} // namespace gem5
